#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QThread>
#include <QObject>
#include <QThread>
#include <string.h>
#include "threadread.h"
#include "uart4stm.h"
#include <unistd.h>

#include <QElapsedTimer>
QSerialPort* myCom;
int buffer[512];
int STATE_RTN = STATE_NONE;
int photosensor[9];
int changePositionStatus[9];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void createSerialPort(const QString &portName, unsigned int baudRate)
{
    myCom= new QSerialPort("/dev/ttyS2");
    myCom->setPortName(portName);
    myCom->open(QIODevice::ReadWrite);
    myCom->setBaudRate(baudRate);
    myCom->setDataBits(QSerialPort::Data8);
    myCom->setParity(QSerialPort::NoParity);
    //myCom->setStopBits(QSerialPort::OneStop);
    myCom->setFlowControl(QSerialPort::NoFlowControl);
}

void ThreadRead::run()
{
    QByteArray alldata;

    while(1)
    {
        int i = 0;
        if(myCom->bytesAvailable()>8)
        {
            alldata = myCom->readAll();
            for(i=0;i<=alldata.size();i++)
             {
                 if((alldata.at(i) == 0x1b)&&(alldata.at(i+1) == 0x46)&&(alldata.at(i+2) == 0x44)&&(alldata.at(i+3) == 0x41))
                     break;
                 else if((alldata.at(i) == 0x1D)&&(alldata.at(i+1) == 0x48)&&(alldata.at(i+2) == 0x46)&&(alldata.at(i+3) == 0x43))
                     break;
                 else if((alldata.at(i) == 0x1b)&&(alldata.at(i+1) == 0x46)&&(alldata.at(i+2) == 0x44)&&(alldata.at(i+3) == 0x41))
                     break;
                 else if((alldata.at(i) == 0x1B)&&(alldata.at(i+1) == 0x46)&&(alldata.at(i+2) == 0x44)&&(alldata.at(i+3) == 0x41))
                     break;
             }
            int pHead = i;
            int nread;
            unsigned char CID = 0;
            int exDataLen = 0;
            unsigned char checkSum = 0;
            for(i = pHead+4; i < pHead+8; i++)
                checkSum += alldata.at(i);
            if(alldata.at(i) != checkSum)
            {
                qDebug("P1 Check Sum Error!\n");
                nread = 0;
                alldata.clear();
                //STATE_RTN = STATE_ERROR;
            }
            else
            {
                qDebug("P1 Check Sum Confirmed!\n");
                CID=alldata.at(pHead+5);
                exDataLen = alldata.at(pHead+6);
                //有扩展帧
                if(exDataLen>0)
                {
                    qDebug("Extra data length: %d\n", exDataLen);
                    usleep(100000);
                    checkSum = 0;
                    for(i = pHead+9;i<pHead+exDataLen+8;i++)
                        checkSum += alldata.at(i);
                    if(alldata.at(pHead+exDataLen+8) == checkSum)
                    {
                        nread = 0;
                        if(CID == CID_REQUEST_DOOR_CLOCK)
                        {
                            if(alldata.at(pHead+9)==0)
                            {
                                STATE_RTN=STATE_DOOR1_CLOCK_CLOSE;
                                qDebug("Door1 clock OPEN!");
                            }
                            else
                            {
                                STATE_RTN=STATE_DOOR1_CLOCK_OPEN;
                                qDebug("Door1 clock CLOSE!");
                            }

                        }
                        else if(CID == CID_REQUEST_DRAWER_CLOCK) //0x41
                        {
                            if(alldata.at(pHead+9)==0)
                            {
                                STATE_RTN=STATE_DRAWER_CLOCK_CLOSE;
                                qDebug("Door1 clock CLOSE!");
                            }
                            else
                            {
                                STATE_RTN=STATE_DRAWER_CLOCK_OPEN;
                                qDebug("Door1 clock OPEN!");
                            }

                        }
                        else if(CID==CID_REQUEST_PHOTOSENSOR)
                        {
                            photosensor[0]=alldata.at(pHead+9)/128;
                            photosensor[1]=alldata.at(pHead+9)%128/64;
                            photosensor[2]=alldata.at(pHead+9)%64/32;
                            photosensor[3]=alldata.at(pHead+9)%32/16;
                            photosensor[4]=alldata.at(pHead+9)%16/8;
                            photosensor[5]=alldata.at(pHead+9)%8/4;
                            photosensor[6]=alldata.at(pHead+9)%4/2;
                            photosensor[7]=alldata.at(pHead+9)%2;
                            photosensor[8]=alldata.at(pHead+9)/128;
                            STATE_RTN=STATE_REQUEST_PHOTOSENSOR;
                            qDebug("Request Photosensor!");

                        }

                    }
                    else
                    {
                        qDebug("P2 Check Sum Error: %x\n", checkSum);
                        nread = 0;
                        STATE_RTN = STATE_ERROR;
                    }
                }
                //没有扩展帧
                else
                {
                    if(CID == CID_SET_DRAWER_LOCK )                 //0x11
                        STATE_RTN = STATE_SET_DRAWER_LOCK;
                    else if(CID==CID_SET_LED)                       //0x12
                    {
                        STATE_RTN = STATE_SET_LED;
                        qDebug("0x12");
                    }
                    else if(CID==CID_SET_DOOR_LOCK)               //0x05
                    {
                        STATE_RTN = STATE_SET_DOOR_LOCK;
                        qDebug("0x12");
                    }
                    else
                        STATE_RTN = STATE_ERROR;
                }
            }
        }
        alldata.clear();
        msleep(10);
        //STATE_RTN = STATE_NONE;
    }
}

int IntoLED(int DID,int *send_positionNo,int send_LEDNum,int color)//color 1绿色
{
    STATE_RTN = STATE_NONE;

    char DataLED[6];
    memset(DataLED,0,6);
    for(int ledNo = 0;ledNo < send_LEDNum;ledNo++)
    {
    int i=send_positionNo[ledNo]%2;
    if (i==1)
    {
        if(color==1)
            DataLED[send_positionNo[ledNo]/2] = 0x10;
        else
            DataLED[send_positionNo[ledNo]/2] = 0x20;

    }
    else
    {
        if(color==1)
            DataLED[send_positionNo[ledNo]/2-1] = 0x01;
        else
            DataLED[send_positionNo[ledNo]/2-1] = 0x02;
    }
    }
    SetLED(myCom,DID,DataLED);
    for(int j=0;j<150;j++)
    {
    waitTaskInfo();
    if(STATE_RTN==STATE_SET_LED)
        return 0;
    }
}
int IntoCabinet(int DID)
{
    STATE_RTN=STATE_NONE;
    int j=0;
    RequestDoorClock(myCom,DID);

    for(j=0;j<150;j++)
    {
        waitTaskInfo();
        if (STATE_RTN==STATE_DOOR1_CLOCK_CLOSE)
        {
            SetDoorClock(myCom,DID,1, 1);
            qDebug("CLOSE");
            return 0;
        }
        else if(STATE_RTN==STATE_DOOR1_CLOCK_OPEN)
        {
            qDebug("OPEN");
            return 0;
        }
    }
}

int IntoPhotosensor(int DID,int *befor_photosensor)
{
    RequestPhotosensor(myCom,DID);
    for(int j=0;j<150;j++)
    {
        waitTaskInfo();
        if (STATE_RTN==STATE_REQUEST_PHOTOSENSOR)
        {
            for(int i=0;i<9;i++)
            {
                if(photosensor[i]!=befor_photosensor[i])
                {
                    return 0;
                }
            }
        }
    }
}

int wait4positionNo(int *send_positionNo,int send_LEDNum)
{
    for(int i=0;i<send_LEDNum;i++)
    {
        if(send_positionNo!=0)
            return 1;
        else
            return 0;
    }
}

int takeAct(int DID,int *send_positionNo,int send_LEDNum)
{
    int *befor_photosensor;
    int *after_photosensor;
    int Error;
    //查询任务前光电状态
    RequestPhotosensor(myCom,DID);
    for(int j=0;j<150;j++)
    {
        waitTaskInfo();
        if (STATE_RTN==STATE_REQUEST_PHOTOSENSOR)
        {
            for(int i=0;i<9;i++)
            {
                befor_photosensor[i]=photosensor[i];
                after_photosensor[i]=photosensor[i];
                photosensor[i]=0;
            }
            break;
        }
    }
    //设定任务后应得到的状态
    for(int i=0;i<send_LEDNum;i++)
    {
        if(after_photosensor[send_positionNo[i]]==1)
            after_photosensor[send_positionNo[i]]=0;
        else
            after_photosensor[send_positionNo[i]]=1;
    }

    IntoCabinet(DID);
    IntoLED(DID,send_positionNo,send_LEDNum,1);
    while(wait4positionNo(send_positionNo,send_LEDNum)!=0)
    {
        IntoPhotosensor(DID,after_photosensor);
        //判断光电状态改变是否正确，改变灯状态
        for(int i=0;i<9;i++)
        {
            if(photosensor[i]!=befor_photosensor[i])
            {
                Error=1;
                for (int j=0;j<send_LEDNum;j++)
                {
                    if(i==send_positionNo[j])
                    {
                        Error=0;
                        IntoLED(DID,&i,1,0);
                        send_positionNo[j]=0;
                        break;
                    }
                }
                if(Error==1)
                {
                    IntoLED(DID,&i,1,2);
                }
            }
        }
    }
}

void waitTaskInfo()
{
    QElapsedTimer t;
    t.start();
        while(t.elapsed()<300)
        {
            QCoreApplication::processEvents();
        }
}
void MainWindow::on_openBtn_clicked()
{
    createSerialPort("/dev/ttyS2", 38400);
    qDebug("SerialPort open!");
}

void MainWindow::on_sendBtn_clicked()
{
    QByteArray data = 0x00;
    //const char data=0x00;
    myCom->write(data,1);
    qDebug("1");
}

void MainWindow::on_readBtn_clicked()
{
    //threadRead=new ThreadRead(this);
    threadRead.start();
}

void MainWindow::on_SetDrawerClockBtn_clicked()
{
    IntoCabinet(0xFF);
    qDebug("reCLOCK");

}

