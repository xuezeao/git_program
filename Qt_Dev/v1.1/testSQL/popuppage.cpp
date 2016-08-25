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
             waitTaskInfo();
             qDebug()<<"*************************";
//            QTimer::singleShot(300,&eventloop,SLOT(quit()));
//            eventloop.exec();
            postStash_P(0);

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

void popupPage::waitTaskInfo()
{
    QElapsedTimer t;//主程序等待
    t.start();
     while(t.elapsed() < 300)
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

    waitTaskInfo();

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

        QJsonValue i2=sett1["positionName"].toString();
        stash_P[1]=i2.toString();

        QJsonValue i3=sett1["positionId"].toInt();
        stash_P[2]=QString::number(i3.toInt());

        QJsonValue i4=sett1["drawerNo"].toInt();
        stash_P[3]=QString::number(i4.toInt());

        QJsonValue i5=sett1["drawerName"].toString();
        stash_P[4]=i5.toString();

        qDebug()<<stash_P[0]+" "+stash_P[1]+"  "+stash_P[2]+"---"+stash_P[3]+"******"+stash_P[4]+"***";

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
//            emit stopWait();
    }

}
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


