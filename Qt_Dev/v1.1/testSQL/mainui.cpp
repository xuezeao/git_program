#include "mainui.h"
#include "ui_mainui.h"
#include <QTextCodec>
MainUI::MainUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainUI)
{
    ui->setupUi(this);
    reagentGPage = new searchWindow;
    reagentPPage = new MainWindow;
    accessManager =new QNetworkAccessManager(this);


    connect(accessManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));
    connect(reagentGPage,SIGNAL(GPageToMainUi()),this,SLOT(GPage_To_this()));
    connect(reagentPPage,SIGNAL(toMainChoice()),this,SLOT(PPage_To_this()));
    QString postStr = "{\"username\":\"james\",\"password\":\"attack\"}";

    ui->textEdit->setText(postStr);
}

MainUI::~MainUI()
{
    delete ui;
}

void MainUI::on_pushButton_reagentP_clicked()
{
    this->close();
    reagentPPage->show();
    reagentPPage->timer->start(1000);
}

void MainUI::on_pushButton_reagentG_clicked()
{
    this->close();
    reagentGPage->show();
    reagentGPage->searchSelect(1);
}

void MainUI::on_pushButton_reagentB_clicked()
{
    this->close();
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

void MainUI::on_pushButton_GetHttp_clicked()
{
    QNetworkRequest *request=new QNetworkRequest();
    request->setUrl(QUrl("http://121.41.78.9:3000/arm/getTest"));
    accessManager->get(*request);
}

void MainUI::on_pushButton_PostHttp_clicked()
{
    QNetworkRequest *request = new QNetworkRequest();
//    request->setUrl(QUrl("http://121.41.78.9:3000/arm/postTest"));
    request->setUrl(QUrl("http://localhost:9090/test"));
    request->setHeader(QNetworkRequest::ContentTypeHeader,"application/json");
    QByteArray postData = ui->textEdit->toPlainText().toUtf8();
    qDebug()<<QObject::tr(postData);
    accessManager->post(*request,postData);
}
void MainUI::finished(QNetworkReply *reply)
{
    QMessageBox *msgBox = new QMessageBox(this);

    if(reply->error() == QNetworkReply::NoError)
    {
        QTextCodec *codec = QTextCodec::codecForName("GBK");//显示中文
        QString all = codec->toUnicode(reply->readAll());
        ui->textEdit->setText(all);
        msgBox->setText(QObject::tr(reply->readAll()));
//        QByteArray bytes = reply->readAll();
//        QString result(bytes);//转化为字符串
        qDebug()<<"handle errors here";
    }
    else
    {
        msgBox->setText(reply->errorString());
        qDebug()<<"handle errors here";
    }
    reply->deleteLater();
    msgBox->exec();
}
