#include "popuppage.h"
#include "ui_popuppage.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include <QModelIndex>
#include <QTextCodec>
#include <QJsonArray>
/********************/
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
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

popupPage::popupPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::popupPage)
{
    ui->setupUi(this);
    accessManager_here =new QNetworkAccessManager(this);
    model = new QSqlTableModel(this);

//    getHttp();
//    QSqlQuery query;

//    ui->tableView->setModel(model);
//   ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//不可窗口编辑
     connect(accessManager_here,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));

//     connect(this,SIGNAL(stopWait()),this,SLOT(starWork()));
}


void popupPage::selectModel(int num)
{
    switch (num)
    {
        case 1 : sheetName="T_Task",modelChoice=1;break;
        case 2 : sheetName="T_Task",modelChoice=2;break;
        case 3 : sheetName="T_Task",modelChoice=3;break;
        default:
            break;
    }

    showmain();//因为更新比较慢，在这里确保一定更新了

    model->setTable(QString("%1").arg(sheetName));

    model->submitAll();


}

popupPage::~popupPage()
{
    delete ui;
    myCom->close();


}

void popupPage::on_pushButton_backPreviousOption_clicked()//返回入柜编辑窗口
{
    if(modelChoice==1)
        emit backplacepage();
    if(modelChoice!=1)
        emit backGPage();
}
void popupPage::showmain()
{

    model->setEditStrategy(QSqlTableModel::OnFieldChange);//恢复原来自保持模式
    model->setTable(QString("%1").arg(sheetName));
    model->select();

//    qDebug()<<rowAllNum;

//   model->removeColumns(3,4);//隐藏不需要从第4列到第7类的所有row

}

void popupPage::showNeedPlaceReagent()
{
    a[0]=ba;
    ba++;
    QSqlQuery query;
//    QString table="placeDurg";

        query.exec(QString("select * from '%1' where rowid = '%2'")//从id=rownum中选中所有属性 '*' /也可指定 'name'
                 .arg(sheetName).arg(acount));//选中表格中最后一行并执行操作exec，没有经过exec的都是没有执行
        query.next();//指向下一行表格
        model->setFilter(QString("rowid = '%1'").arg(acount));//取得所要显示的信息
        model->select();



        QString showName = query.value(3).toString();//名字
        QString sendSize = query.value(9).toString();
        int attributV= query.value(12).toInt();//试剂类别
        QString showVolume = query.value(5).toString();

        if(showName==""&&acount!=1)//执行完毕返回上一层界面
        {
            int ok = QMessageBox::warning(this,tr("摆放完成"),tr("ok"),QMessageBox::Yes,QMessageBox::No);
            if(ok==QMessageBox::Yes)
            if(modelChoice==1)
                emit backplacepage();
            if(modelChoice==2)
                emit backGPage();
            acount=1;
        }


//        qDebug("reCLOCK");
        //waitTaskInfo(300);


        if(attributV!='\0'&&sendSize!='\0')
        {

//            QString add=S_KL+S_F+"cabinetNo"+S_F+S_M+S_F+"AABBCCDD"+S_F+S_D+S_F+"drawerSize"+S_F+S_M+S_F+sendSize+S_F+S_D+S_F+"attribute"+S_F+S_M+attributV+S_KR;
//             postHttp_P(2,add);

//            qDebug()<<add;
            QJsonObject json_PutInOk;
            json_PutInOk.insert("cabinetNo",QString("AABBCCDD"));//生成JSON
            json_PutInOk.insert("drawerSize",sendSize);
            json_PutInOk.insert("attribute",attributV);

            document.setObject(json_PutInOk);
            QByteArray byte_array=document.toJson(QJsonDocument::Compact);
            QString json_str(byte_array);


            postHttp_P(1,json_str);
            modelSwitch=0;
             waitTaskInfo(300);

             qDebug()<<"*************************";
//            QTimer::singleShot(300,&eventloop,SLOT(quit()));
//            eventloop.exec();

//            IntoCabinet(0x01);//开锁





              takeAct(0x01,a,1);
//              IntoCabinet(0x01);
//              IntoLED(DID,send_positionNo,send_LEDNum,1);
//            IntoLED(0x01,a,1,0);//a是int 型数组包含显示灯的位置信号，后一位是发送的灯的个数
//            int b[]={0,0,0,0,0,0,0,0,0};
//            for(int j=0;j<150;j++)
//            {
//                waitTaskInfo(30);
//                IntoPhotosensor(0x01,b);
//            }
//            postStash_P(0);

            if(positionInfo=="0")
            {
                int ok = QMessageBox::warning(this,tr("error"),tr("无法收到正确信息系统将返回上一界面"
                                                                      "无法收到正确信息系统将返回上一界面"),
                                                 QMessageBox::Yes,QMessageBox::No);
                   if(ok == QMessageBox::No||ok == QMessageBox::Yes)
                   {

                   }
                   emit backplacepage();
                   acount=0;
            }

        }



        qDebug()<<showName<<"  "+showVolume<<"  "+sendSize;
         ui->textBrowser_showReagentName->setText(showName);
        ui->textBrowser_showReagentVolume->setText(showVolume);
        ui->textBrowser_showReagentlocation->setText(positionInfo);





         acount++;
}
void popupPage::creatPostInfo(int a)//暂时不用
{

//    if(a==0)//入柜申请位置
//    {
//        QJsonObject json_PutInOk;
//        json_PutInOk.insert("cabinetNo",QString("AABBCCDD"));//生成JSON
//        json_PutInOk.insert("drawerSize",sendSize);
//        json_PutInOk.insert("attribute",attributV);

//        document.setObject(json_PutInOk);
//        QByteArray byte_array=document.toJson(QJsonDocument::Compact);
//        QString json_str(byte_array);

//        postSwitch_P(0);
//        postHttp_P(1,json_str);
//        modelSwitch=0;
//    }
//    if(a==1)//入柜操作完成
//    {
//        QJsonObject json;
//        json.insert("userId",QString("1"));//生成JSON
//        json.insert("agentiaTypeId",1);
//        json.insert("bottleCapacity",QString("500ml"));
//        json.insert("dose",QString("400ml"));
//        json.insert("expireDate",QString("2017.1.1"));
//        json.insert("positionId",6);

//        document.setObject(json);
//        QByteArray byte_array=document.toJson(QJsonDocument::Compact);
//        QString json_str(byte_array);

//        postHttp_P(2,json_str);
//        modelSwitch=1;
//    }
}

void popupPage::waitTaskInfo(char a)
{
    QElapsedTimer t;//主程序等待
    t.start();
     while(t.elapsed() < a)
     {
         QCoreApplication::processEvents();
     }
}

void popupPage::on_pushButton_placedNext_clicked()
{
//    QString sheetName="placeDurg";
    QSqlQuery query;
    model->setEditStrategy(QSqlTableModel::OnFieldChange);//自保持模式
    model->setTable(QString("%1").arg(sheetName));
    model->setData(model->index(0,7),stash_P[3]);//更改状态
    model->setData(model->index(0,8),stash_P[4]);//更改状态
    model->setData(model->index(0,10),stash_P[0]);//更改状态
    model->setData(model->index(0,11),stash_P[1]);//更改状态
    model->setData(model->index(0,12),stash_P[2]);//更改状态
//  model->setData(model->index(rowNumIndex-1,3),"已放");//为自增位置预留位置
    model->select();
    model->submitAll();
//    RequestDoorClock(myCom,0xFF);
//    qDebug("getCLOCK");

    QJsonObject json;
    json.insert("userId",QString("1"));//生成JSON
    json.insert("agentiaTypeId",1);
    json.insert("bottleCapacity",QString("500ml"));
    json.insert("dose",QString("400ml"));
    json.insert("expireDate",QString("2017.1.1"));
    json.insert("positionId",6);

    document.setObject(json);
    QByteArray byte_array=document.toJson(QJsonDocument::Compact);
    QString json_str(byte_array);

    postHttp_P(2,json_str);
    modelSwitch=1;

    waitTaskInfo(100);

//    if(stash_P[5]=="false")
//    {
//        int ok = QMessageBox::warning(this,tr("error"),tr("无法收到正确信息系统将返回上一界面"
//                                                              "无法收到正确信息系统将返回上一界面"),
//                                         QMessageBox::Yes,QMessageBox::No);
//           if(ok == QMessageBox::No||ok == QMessageBox::Yes)
//           {

//           }
//           emit backplacepage();
//    }

    showNeedPlaceReagent();
    positionInfo="0";
    query.exec(QString("DELETE * FROM T_PositionAllocate"));
}
void popupPage::getHttp()
{
    QNetworkRequest *request=new QNetworkRequest();
//    request->setUrl(QUrl("http://121.41.78.9:3000/arm/getTest"));
    request->setUrl(QUrl(QString("http://localhost:3000/arm/initialInfo/AABBCCDD")));
    accessManager_here->get(*request);
}


void popupPage::on_pushButton_jumpThisOption_clicked()
{
     showNeedPlaceReagent();
}

void popupPage::postHttp_P(int num,QString postStr)
{
    QString address;

    switch (num) {
    case 0 :address="postTest";
        break;
    case 1 :address="allocPosition";//获取地址信息
        break;
    case 2 :address="putIn";//反馈入柜完成
        break;
    case 3 :address="disablePosition";
        break;
    default:
        break;
    }
    QNetworkRequest *request = new QNetworkRequest();
//    request->setUrl(QUrl("http://121.41.78.9:3000/arm/postTest"));
//    request->setUrl(QUrl("http://localhost:9090/test"));
    request->setUrl(QUrl(QString("http://localhost:3000/arm/%1").arg(address)));
    request->setHeader(QNetworkRequest::ContentTypeHeader,"application/json");
//    QString postStr = "{\"username\":\"james\",\"password\":\"attack\"}";
    QByteArray postData = postStr.toUtf8();
    qDebug()<<QObject::tr(postData);
    accessManager_here->post(*request,postData);
//    QByteArray postData = ui->textEdit->toPlainText().toUtf8();
//    qDebug()<<QObject::tr(postData);
//    accessManager->post(*request,postData);
}
/*********************************************************************/
void popupPage::finished(QNetworkReply *reply)
{
//   QMessageBox *msgBox = new QMessageBox(this);

    if(reply->error() == QNetworkReply::NoError)
    {
//        QTextCodec *codec = QTextCodec::codecForName("GBK");//显示中文
        QTextCodec *codec = QTextCodec::codecForName("utf-8");

//        QByteArray bytes=codec->toUnicode(reply->readAll());
//        QByteArray bytes=codec->toUnicode(reply->readAll());
//        QByteArray bytes=reply->readAll();
//        qDebug<<bytes;
        QString all = codec->toUnicode(reply->readAll());
        QJsonDocument all_switch=QJsonDocument::fromJson(all.toUtf8());
        postS_GetPosition(all_switch,modelSwitch);



//        MessageAnayle(all);
//        qDebug()<<all;
//        ui->textEdit->setText(all);
//        msgBox->setText(QObject::tr(reply->readAll()));
//        QByteArray bytes = reply->readAll();
//        QString result(bytes);//转化为字符串
//        qDebug()<<"handle errors here";
    }
    else
    {
//        msgBox->setText(reply->errorString());
        qDebug()<<"handle errors here";
//        QString errorall=reply->errorString();
//        qDebug()<<errorall;
    }
    reply->deleteLater();
//    msgBox->exec();
}
void popupPage::postS_GetPosition(QJsonDocument t,char t1)
{
    QJsonObject sett1=t.object();
//    QJsonValue value = sett1.value(QString("appName"));
//    qDebug()<<value;
//    QJsonObject item=value.toObject();
//    qDebug()<<item;
//    QJsonValue subobj=item["description"];
//    qDebug()<<subobj.toString();
//    QJsonArray test=item["imp"].toArray();
//    qDebug()<< test[1].toString();
//    QJsonParseError *json_error;
//       QJsonDocument parse_doucment = QJsonDocument::fromJson(str,json_error);
//       if(json_error->error==QJsonParseError::NoError)
//       {

    if(t1==0)
    {
        QJsonValue i1=sett1["positionNo"].toInt();
        stash_P[0]=QString::number(i1.toInt());
        send_positionNo=i1.toInt();

        QJsonValue i2=sett1["positionName"].toString();
        stash_P[1]=i2.toString();

        QJsonValue i3=sett1["positionId"].toInt();
        stash_P[2]=QString::number(i3.toInt());

        QJsonValue i4=sett1["drawerNo"].toInt();
        stash_P[3]=QString::number(i4.toInt());
        send_drawerNo=i4.toInt();

        QJsonValue i5=sett1["drawerName"].toString();
        stash_P[4]=i5.toString();

        qDebug()<<stash_P[0]+" "+stash_P[1]+"  "+stash_P[2]+"---"+stash_P[3]+"******"+stash_P[4]+"***";
        postStash_P(0);
    }
    if(t1==1)
    {
        QJsonValue i1=sett1["success"].toBool();
        if(i1==true)
            stash_P[5]="true";
        else
            stash_P[5]="false";
        qDebug()<<stash_P[5];
    }
}

void popupPage::postStash_P(int num)
{

    QSqlQuery query;
    if(num==0)
    {
            query.prepare("insert into T_PositionAllocate (positionNo,positionName,positionId,drawerNo,drawerName) values (?,?,?,?,?)");
            query.addBindValue(stash_P[0]);
            query.addBindValue(stash_P[1]);
            query.addBindValue(stash_P[2]);
            query.addBindValue(stash_P[3]);
            query.addBindValue(stash_P[4]);
            query.exec();
            positionInfo="抽屉号："+stash_P[3]+",位置："+stash_P[0];
            qDebug()<<positionInfo;
            waitTaskInfo(10);
//            emit stopWait();
    }

}

/*************************************/
void popupPage::createSerialPort(const QString &portName, unsigned int baudRate)
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
//int popupPage::IntoCabinet(int DID)//锁
//{
//    STATE_RTN=STATE_NONE;
//    int j=0;
//    RequestDrawerClock(myCom,DID);
//    waitTaskInfo();
//    for(j=0;j<150;j++)
//    {
//        waitTaskInfo();
//        if (STATE_RTN==STATE_DRAWER_CLOCK_CLOSE)
//        {
//            SetDrawerClock(myCom,DID, 1);
//            qDebug("CLOSE");//            return 0;
//        }
//        else if(STATE_RTN==STATE_DRAWER_CLOCK_OPEN)
//        {
//            qDebug("OPEN");
//            return 0;
//        }
//    }
//}
int popupPage::IntoCabinet(int DID)
{
    STATE_RTN=STATE_NONE;
    int j=0;
    RequestDrawerClock(myCom,DID);
//    waitTaskInfo(30);
    for(j=0;j<150;j++)
    {
        waitTaskInfo(30);
        if (STATE_RTN==STATE_DRAWER_CLOCK_CLOSE)
        {
            STATE_RTN = STATE_NONE;
            SetDrawerClock(myCom,DID,1);
            qDebug("CLOSE");
//            waitTaskInfo(30);
            for(j=0;j<150;j++)
            {
            waitTaskInfo(30);
            if(STATE_RTN==STATE_SET_DRAWER_LOCK)
                return 0;
            }
        }
        else if(STATE_RTN==STATE_DRAWER_CLOCK_OPEN)
        {
            qDebug("OPEN");
            return 0;
        }
    }
}
int popupPage::IntoLED(int DID,int *send_positionNo,int send_LEDNum,char *DataLED,int color)//color=1绿色
{
    STATE_RTN = STATE_NONE;
//    char DataLED[6];
//    memset(DataLED,0,6);
    for(int ledNo = 0;ledNo < send_LEDNum;ledNo++)
    {
    int i=send_positionNo[ledNo]%2;
    if (i==1)
    {
        if(color==1)
            DataLED[send_positionNo[ledNo]/2] += 0x10;
        else
            DataLED[send_positionNo[ledNo]/2] += 0x20;

    }
    else
    {
        if(color==1)
            DataLED[send_positionNo[ledNo]/2-1] += 0x01;
        else
            DataLED[send_positionNo[ledNo]/2-1] += 0x02;
    }
    }
    SetLED(myCom,DID,DataLED);
    for(int j=0;j<150;j++)
    {
    waitTaskInfo(30);
    if(STATE_RTN==STATE_SET_LED)
        return 0;
    }
}

int popupPage::IntoPhotosensor(int DID,int *befor_photosensor)
{
    RequestPhotosensor(myCom,DID);
    for(int j=0;j<150;j++)
    {
        waitTaskInfo(30);
        if (STATE_RTN==STATE_REQUEST_PHOTOSENSOR)
        {
            for(int i=0;i<9;i++)
            {
                if(photosensor[i]!=befor_photosensor[i])
//                    qDebug()<<i++;
                    return 0;
            }
        }
    }
}

int popupPage::wait4positionNo(int *send_positionNo,int send_LEDNum)
{
    for(int i=0;i<send_LEDNum;i++)
    {
        if(send_positionNo!=0)
            return 1;
        else
            return 0;
    }
}

int popupPage::takeAct(int DID,int *send_positionNo,int send_LEDNum)
{
    int *befor_photosensor;
    int *after_photosensor;
    int Error;
    char DataLED[6];
    memset(DataLED,0,6);
    //查询任务前光电状态
    RequestPhotosensor(myCom,DID);
    for(int j=0;j<150;j++)
    {
        waitTaskInfo(300);
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
    IntoLED(DID,send_positionNo,send_LEDNum,DataLED,1);
    while(wait4positionNo(send_positionNo,send_LEDNum)==1)
    {
        if(IntoPhotosensor(DID,befor_photosensor)==0);
      {  //判断光电状态改变是否正确，改变灯状态
        for(int i=0;i<9;i++)
        {
            if(photosensor[i]!=after_photosensor[i])
            {
                Error=1;
                for (int j=0;j<send_LEDNum;j++)
                {
                    if(i==send_positionNo[j])
                    {
                        Error=0;
                        send_positionNo[j]=0;
                        IntoLED(DID,send_positionNo,send_LEDNum,DataLED,1);
                        break;
                    }
                }
                if(Error==1)
                {
                    IntoLED(DID,&i,1,DataLED,2);
                }
            }
          }
        }
    }
}
void popupPage::on_pushButton_clicked()
{
    createSerialPort("com3", 38400);
//    waitTaskInfo(300);
    threadRead.start();
    QByteArray data = 0x00;
    //const char data=0x00;
    myCom->write(data,1);
    qDebug("1");
    qDebug("SerialPort open!");
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
                                qDebug("Door1 clock OPEN");
                            }
                            else
                            {
                                STATE_RTN=STATE_DOOR1_CLOCK_OPEN;
                                qDebug("Door1 clock CLOSE");
                            }

                        }
                        else if(CID == CID_REQUEST_DRAWER_CLOCK) //0x41
                        {
                            if(alldata.at(pHead+9)==0)
                            {
                                STATE_RTN=STATE_DRAWER_CLOCK_CLOSE;
                                qDebug("Door1 clock CLOSE");
                            }
                            else
                            {
                                STATE_RTN=STATE_DRAWER_CLOCK_OPEN;
                                qDebug("Door1 clock OPEN");
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
                            photosensor[8]=alldata.at(pHead+9)/2;
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
                    if(CID == CID_SET_DRAWER_LOCK )			//0x11
                        STATE_RTN = STATE_SET_DRAWER_LOCK;
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



//void waitTaskInfo()
//{
//    QElapsedTimer t;
//    t.start();
//        while(t.elapsed()<300)
//        {
//            QCoreApplication::processEvents();
//        }
//}
//void MainWindow::on_openBtn_clicked()
//{
//    createSerialPort("com3", 38400);
//    qDebug("SerialPort open!");
//}

//void MainWindow::on_sendBtn_clicked()
//{
//    QByteArray data = 0x00;
//    //const char data=0x00;
//    myCom->write(data,1);
//    qDebug("1");
//}

//void MainWindow::on_readBtn_clicked()
//{
//    //threadRead=new ThreadRead(this);
//    threadRead.start();
//}

//void MainWindow::on_SetDrawerClockBtn_clicked()
//{
//    IntoCabinet(0xFF);
//    qDebug("reCLOCK");

//}

//void MainWindow::on_getDrawerClock_clicked()
//{
//    RequestDoorClock(myCom,0xFF);
//    qDebug("getCLOCK");
//}


//void popupPage::jsonSwith_position(QByteArray str)
//{
//    QJsonParseError *json_error;
//    QJsonDocument parse_doucment = QJsonDocument::fromJson(str,json_error);
//    if(json_error->error==QJsonParseError::NoError)
//    {
//        if(parse_doucment.isObject())
//        {
//            QJsonObject obj=parse_doucment.object();
//            if(obj.contains("success"))
//            {
//                QJsonValue result_value = obj.take("success");
//                if(result_value.isBool())
//                {
//                    bool re = result_value.toBool();
//                    if(re=='false')
//                        stash_P[0]="false";
//                    else
//                        stash_P[0]="true";
//                }
//            }
//            if(obj.contains("positionNo"))
//            {
//                QJsonValue positionNo_value =obj.take("positionNo");
//                if(positionNo_value.isDouble())
//                {
//                    stash_P[1]=QString::number(positionNo_value.toInt());
//                }
//            }
//            if(obj.contains("positionName"))
//            {
//                QJsonValue positionName_value=obj.take("positionName");
//                if(positionName_value.isString())
//                {
//                    stash_P[2]=positionName_value.toString();
//                }
//            }
//            if(obj.contains("positionId"))
//            {
//                QJsonValue positionId_value = obj.take("positionId");
//                if(positionId_value.isDouble())
//                {
//                    stash_P[3]=QString::number(positionId_value.toInt());

//                }
//            }
//            if(obj.contains("drawerNo"))
//            {
//                QJsonValue drawerNo_value = obj.take("drawerNo");
//                if(drawerNo_value.isDouble())
//                {
//                    stash_P[4]=QString::number(drawerNo_value.toInt());
//                }
//            }
//            if(obj.contains("drawerName"))

//            {
//                QJsonValue drawerName_value = obj.take("drawerName");
//                if(drawerName_value.isString())
//                {
//                    stash_P[5]=drawerName_value.toString();
//                }
//            }
//        }
////
//    }

//    qDebug()<<stash_P[0];
//    qDebug()<<stash_P[1];
//    qDebug()<<stash_P[2];
//    qDebug()<<stash_P[3];
//    qDebug()<<stash_P[4];
//    qDebug()<<stash_P[5];

//}


    //void popupPage::MessageAnayle(QString a)
    //{
    //    uint i=0;
    //    uint locationFlag=0;//
    //    uint newsFlag=0;
    //    uint sheetNews=0;
    //    QString store;
    //    uint count_sheet=0;
    //    while(a[i]!='\0')
    //    {
    //        if(a[i]=='\"'||a[i]==':'||a[i]==','||a[i]=='{'||a[i]=='}'||a[i]=='['||a[i]==']')
    //        {
    //            if(a[i]==':'&&a[i+2]=='{'&&a[i+1]=='[')
    //            {
    //                sheetNews=1;
    //                i+=2;
    //            }
    //            if(a[i]=='}'&&a[i+1]==']'&&a[i+2]=='}')
    //            {
    //                sheetNews=0;
    //                i+=2;
    //            }

    //            i+=1;
    //        }else{
    //            newsFlag=i;//指向正式数据第一位
    //            if(sheetNews!=0)//记录数据位便于存储
    //            {
    //                sheetNews+=1;//记录非显示内容   单数为内容，双数为字段  1进入数据库类存储  0退出数据类存储
    //            }else{
    //                locationFlag+=1;//记录非显示内容   单数为字段，双数为内容
    //            }
    //            while(a[i]!='\"')
    //            {
    //                i+=1;
    //                if(a[i]==','||a[i]==':'||a[i]=='{'||a[i]=='}'||a[i]=='['||a[i]==']')
    //                {
    //                    break;
    //                }
    //            }

    //            store=a.mid(newsFlag,i-newsFlag);//获取数据字段
    //            qDebug()<<store;
    ////            sheetOperate_SwitchData=store;
    //            stash_P[count_sheet]=store;
    //            count_sheet++;
    //            i+=1;//下一个字符

    //        }
    //    }
    //    postSwitch_P(0);

    //}

