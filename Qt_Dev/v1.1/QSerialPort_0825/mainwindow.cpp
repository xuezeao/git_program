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
                            if(alldata.at(pHead+9)==1)
                            {
                                STATE_RTN=STATE_DOOR1_CLOCK_OPEN;
                                qDebug("Door1 clock OPEN");
                            }
                            else
                            {
                                STATE_RTN=STATE_DOOR1_CLOCK_CLOSE;
                                qDebug("Door1 clock CLOSE");
                            }

                        }
                        else if(CID == CID_REQUEST_DRAWER_CLOCK) //0x41
                        {
                            if(alldata.at(10)==0)
                            {
                                STATE_RTN = STATE_DRAWER_CLOCK_CLOSE;
                                qDebug("Drawer clock CLOSE");
                            }
                            else
                            {
                                STATE_RTN = STATE_DRAWER_CLOCK_OPEN;
                                qDebug("Drawer clock OPEN");
                            }
                        }
                        else if(CID ==CID_REQUEST_LED)  //0x42
                        {

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
                    if(CID == CID_SET_DRAWER_LOCK )			//0x11
                        STATE_RTN = STATE_SET_DRAWER_LOCK;
                    else if(CID==CID_SET_LED)               //0x12
                    {
                        STATE_RTN = STATE_SET_LED;
                        qDebug("0x12");
                    }
                    else if(CID==CID_SET_LED)               //0x12
                    {
                        STATE_RTN = STATE_SET_LED;
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
/*
int LEDposition (int positionNo)
{
    char *DataLED[32];
    int i=positionNo%2;
    if (i==1)
    {
        DataLED[positionNo/2+1] = 0x10;
    }
    else
    {
        DataLED[positionNo/2] = 0x01;
    }
}
*/

void createSerialPort(const QString &portName, unsigned int baudRate)
{
    myCom= new QSerialPort("com3");//dev/ttyS2
    myCom->setPortName(portName);
    myCom->open(QIODevice::ReadWrite);
    myCom->setBaudRate(baudRate);
    myCom->setDataBits(QSerialPort::Data8);
    myCom->setParity(QSerialPort::NoParity);
    //myCom->setStopBits(QSerialPort::OneStop);
    myCom->setFlowControl(QSerialPort::NoFlowControl);
}
int IntoCabinet(int DID)
{
    STATE_RTN=STATE_NONE;
    int j=0;
    intocabinet(myCom,DID);
    waitTaskInfo();
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
    createSerialPort("com3", 38400);
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

void MainWindow::on_getDrawerClock_clicked()
{
    intocabinet(myCom,0xFF);
    qDebug("getCLOCK");
}
