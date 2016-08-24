#include "mainui.h"
#include "ui_mainui.h"
#include <QTextCodec>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QModelIndex>
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
//    getHttp();
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
    case 0 :address="postTest";
        break;
    case 1 :address="putIn";
        break;
    case 2 :address="allocPosition";
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
        QString all = codec->toUnicode(reply->readAll());
        MessageAnayle(all);
//        qDebug()<<all;
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

void MainUI::MessageAnayle(QString a)
{
    uint i=0;
    uint locationFlag=0;//
    uint newsFlag=0;
    uint sheetNews=0;
    QString store;
    uint count_sheet=0;
    while(a[i]!='\0')
    {
        if(a[i]=='\"'||a[i]==':'||a[i]==','||a[i]=='{'||a[i]=='}'||a[i]=='['||a[i]==']')
        {
            if(a[i]==':'&&a[i+2]=='{'&&a[i+1]=='[')
            {
                sheetNews=1;
                i+=2;
            }
            if(a[i]=='}'&&a[i+1]==']'&&a[i+2]=='}')
            {
                sheetNews=0;
                i+=2;
            }

            i+=1;
        }else{
            newsFlag=i;//指向正式数据第一位
            if(sheetNews!=0)//记录数据位便于存储
            {
                sheetNews+=1;//记录非显示内容   单数为内容，双数为字段  1进入数据库类存储  0退出数据类存储
            }else{
                locationFlag+=1;//记录非显示内容   单数为字段，双数为内容
            }
            while(a[i]!='\"')
            {
                i+=1;
                if(a[i]==','||a[i]==':'||a[i]=='{'||a[i]=='}'||a[i]=='['||a[i]==']')
                {
                    break;
                }
            }

            store=a.mid(newsFlag,i-newsFlag);//获取数据字段
            qDebug()<<store;
//            sheetOperate_SwitchData=store;
            stash[count_sheet]=store;
            count_sheet++;
            i+=1;//下一个字符

        }
    }
    postSwitch(0);

}
void MainUI::switchStyle(QString b)
{

}
void MainUI::postSwitch(int num)
{
   int this_count=0;
   QSqlQuery query;
    if(num==0)//柜子信息
    {
        query.prepare("insert into T_CabinetInfo (cabinetName,groupId,groupName,drawerAmout) values (?,?,?,?)");
        query.addBindValue(stash[1]);
        query.addBindValue(stash[3]);
        query.addBindValue(stash[5]);
        query.addBindValue(stash[7]);
        query.exec();
        for(int i=9;i<1000;++i)
        {
            if(stash[i]=="drawerNo")
            {
                query.prepare("insert into T_DrawerList (drawerNo,drawerName,drawerSize,positionAmout,attribute) values (?,?,?,?,?)");
                query.addBindValue(stash[i+=1]);
                query.addBindValue(stash[i+=2]);
                query.addBindValue(stash[i+=2]);
                query.addBindValue(stash[i+=2]);
                query.addBindValue(stash[i+=2]);
                query.exec();

            }
            else{
                break;
            }
        }

    }
}
