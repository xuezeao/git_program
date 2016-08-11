#include "testcomandhttp.h"
#include "ui_testcomandhttp.h"
#include <QMessageBox>
#include <QUrl>
#include <QtNetwork/QtNetwork>
#include <QtNetwork/QNetworkAccessManager>
#include <QtSerialPort/QSerialPortInfo>

#include <QtSerialPort/QSerialPort>
#include <QtDebug>

QSerialPort* myCom;
QNetworkAccessManager *accessManager;

testComAndHttp::testComAndHttp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::testComAndHttp)
{

    ui->setupUi(this);
    qDebug() << "UI Initial complete!";
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        qDebug() << "Name : " << info.portName();
        qDebug() << "Description : " << info.description();
        qDebug() << "Manufacturer: " << info.manufacturer();
//        qDebug() << "Serial Number: " <<info.serialNumber();
//        qDebug() << "System Location: " << info.systemLocation();

    }
    accessManager = new QNetworkAccessManager(this);
    connect(accessManager,SIGNAL(finished(QNetworkReply*)),this,SLOT(finished(QNetworkReply*)));
    QString postStr = "{\"username\":\"james\",\"password\":\"attack\"}";
    ui->textEditPostText->setText(postStr);
}

void createSerialPort( const QString &portName, unsigned int baudRate)
{
     myCom= new QSerialPort("COM1");
     myCom->setPortName(portName);
     myCom->open(QIODevice::ReadWrite);
     myCom->setBaudRate(baudRate);
     myCom->setDataBits(QSerialPort::Data8);
     myCom->setParity(QSerialPort::NoParity);
     //myCom->setStopBits(QSerialPort::OneStop);
     myCom->setFlowControl(QSerialPort::NoFlowControl);

}

testComAndHttp::~testComAndHttp()
{
    delete ui;
}

void testComAndHttp::on_pushButton_BackMainUi_clicked()
{
    emit testPageExit();
}

void testComAndHttp::on_pushButton_OpenCom_clicked()
{
    QString uartText = ui->comboBox_ChoiceCom->currentText();
    QMessageBox msgBox;
    QString msgText = "UART ";
    createSerialPort(uartText, 9600);
    msgText += uartText;
    msgText += " is selected!";
    msgBox.setText(msgText);
    msgBox.exec();
}

void testComAndHttp::on_pushButton_httpGet_clicked()
{
    QNetworkRequest *request = new QNetworkRequest();
    request->setUrl(QUrl("http://121.41.78.9:3000/arm/getTest"));
    accessManager->get(*request);//通过发送数据，返回值保存在reply指针里.

}
void testComAndHttp::finished(QNetworkReply *reply)
{
    QMessageBox *msgBox = new QMessageBox(this);
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    //QTextCodec::setCodecForTr(QTextCodec::codecForName("GBK"));

    if(reply->error() == QNetworkReply::NoError)
    {
        msgBox->setText(QObject::tr(reply->readAll()));
        qDebug()<<"handle errors here";
    }
    else
    {
        msgBox->setText(reply->errorString());
        qDebug()<<"handle errors here";
    }
    msgBox->exec();
}

void testComAndHttp::on_pushButton_httpPost_clicked()
{
    QNetworkRequest *request = new QNetworkRequest();
    request->setUrl(QUrl("http://localhost:9090/testurl?key=value "));
    request->setHeader(QNetworkRequest::ContentTypeHeader,"application/json");
    QByteArray postData = ui->textEditPostText->toPlainText().toUtf8();
    qDebug()<<QObject::tr(postData);
    accessManager->post(*request, postData);

}
