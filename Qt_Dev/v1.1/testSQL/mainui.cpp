#include "mainui.h"
#include "ui_mainui.h"
#include <QTextCodec>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QModelIndex>
#include <QVariantMap>
int sheetOperate_Model;//选择发送模式
//uint count_sheet;
//QString sheetOperate_SwitchData;//存储处理信息
QString stash[1000];
MainUI::MainUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainUI)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    reagentGPage = new searchWindow;
    reagentPPage = new MainWindow;
    accessManager =new QNetworkAccessManager(this);

//    this->showFullScreen();//主屏幕最大化
    connect(accessManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));
    connect(reagentGPage,SIGNAL(GPageToMainUi()),this,SLOT(GPage_To_this()));
    connect(reagentPPage,SIGNAL(toMainChoice()),this,SLOT(PPage_To_this()));
//    QString postStr = "{\"username\":\"james\",\"password\":\"attack\"}";

//    QString temporaryMessage="{\"a\":\"bejing\",\"name\":\"酒精\",\"number\":10,\"drawer\":[{\"drawerNo\":\"好的\"},{\"drawerNo\":2}]}";
//    int i=10;
//    qDebug()<<temporaryMessage[i];
//    MessageSaveTOsql(temporaryMessage);
//    QString bc="abc";//可以自动相加
//    QString cd="def";
//    QString ac='{ '+'\"'+bc+'\"'+':'+'\"'+cd+'\"'+'}';

//    qDebug()<<ac;
//    QSqlQuery query;
//    query.exec(QString("delete from placeDurg"));//删除所有数据

//postHttp(0);
    getHttp();
    ModelOperate=0;

}

MainUI::~MainUI()
{
    delete ui;
}

void MainUI::on_pushButton_reagentP_clicked()
{
    this->hide();
    reagentPPage->show();
    reagentPPage->timer->start(1000);
}

void MainUI::on_pushButton_reagentG_clicked()
{
    this->hide();
    reagentGPage->show();
    reagentGPage->searchSelect(1);
}

void MainUI::on_pushButton_reagentB_clicked()
{
    this->hide();
    reagentGPage->show();
    reagentGPage->searchSelect(2);
}

void MainUI::GPage_To_this()
{
    this->show();
    reagentGPage->close();
}

void MainUI::PPage_To_this()
{
    this->show();
    reagentPPage->close();
}

/******************************get/Http***************************************/
void MainUI::getHttp()
{
    QNetworkRequest *request=new QNetworkRequest();
//    request->setUrl(QUrl("http://121.41.78.9:3000/arm/getTest"));
    request->setUrl(QUrl(QString("http://localhost:3000/arm/initialInfo/AABBCCDD")));
    accessManager->get(*request);
}
void MainUI::postHttp(int num,QString postStr)
{
    QString address;

    switch (num) {
    case 0 :address="postTest";//测试地址
        break;
    case 1 :address="login";//登入地址
        break;
    case 2 :address="agentiaTypeList";//获取试剂类型列表
        break;
    case 3 :address="availableAgentiaList";//获取再位试剂列表
        break;
    case 4 :address="occupiedAgentiaList";//获取带归还试剂列表
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
    accessManager->post(*request,postData);
//    QByteArray postData = ui->textEdit->toPlainText().toUtf8();
//    qDebug()<<QObject::tr(postData);
//    accessManager->post(*request,postData);
}
/*********************************************************************/
void MainUI::finished(QNetworkReply *reply)
{
   QMessageBox *msgBox = new QMessageBox(this);

    if(reply->error() == QNetworkReply::NoError)
    {
//        QTextCodec *codec = QTextCodec::codecForName("GBK");//显示中文
         QTextCodec *codec = QTextCodec::codecForName("utf-8");
//        QString all = codec->toUnicode(reply->readAll());
//        MessageAnayle(all);

        QString all = codec->toUnicode(reply->readAll());
        QJsonDocument all_switch_MainUi=QJsonDocument::fromJson(all.toUtf8());
        agentiaNewsGet(all_switch_MainUi,ModelOperate);


        qDebug()<<all;
//        ui->textEdit->setText(all);
//        msgBox->setText(QObject::tr(reply->readAll()));
//        QByteArray bytes = reply->readAll();
//        QString result(bytes);//转化为字符串
//        qDebug()<<"handle errors here";
    }
    else
    {
        msgBox->setText(reply->errorString());
        qDebug()<<"handle errors here";
//        QString errorall=reply->errorString();
//        qDebug()<<errorall;
    }
    reply->deleteLater();
//    msgBox->exec();
}

void MainUI::agentiaNewsGet(QJsonDocument str, char t)
{
    QJsonObject sett1=str.object();

    if(t==0)
    {
        QJsonValue i1=sett1["cabinetName"].toString();
        qDebug()<<i1.toString();
        stash_M[0]=i1.toString();

        QJsonValue i2=sett1["groupId"].toInt();
        qDebug()<<QString::number(i2.toInt());
        stash_M[1]=QString::number(i2.toInt());

        QJsonValue i3=sett1["groupName"].toString();
        qDebug()<<i3.toString();
        stash_M[2]=i3.toString();

        QJsonValue i4=sett1["drawerAmount"].toInt();
        message_Acount=i4.toInt();
        qDebug()<<QString::number(i4.toInt());
        stash_M[3]=QString::number(i4.toInt());

        QJsonArray i5=sett1["drawerList"].toArray();
        for(int i=0;i<message_Acount;i++)
        {
            QJsonObject i6=i5[i].toObject();
            QJsonValue i7=i6["drawerNo"].toInt();
            stash_M[4+i*5]=QString::number(i7.toInt());

            QJsonValue i8=i6["drawerName"].toString();
            stash_M[5+i*5]=i8.toString();

            QJsonValue i9=i6["drawerSize"].toString();
            stash_M[6+i*5]=i9.toString();

            QJsonValue i10=i6["positionAmount"].toInt();
            stash_M[7+i*5]=QString::number(i10.toInt());

            QJsonValue i11=i6["attribte"].toInt();
            stash_M[8+i*5]=QString::number(i11.toInt());
            qDebug()<<i7<<"-------"<<i8<<"----"<<i9<<"-------"<<i10<<"----------"<<i11;


        }
    }

}

void MainUI::on_pushButton_clicked()
{
    this->close();
}
