#ifndef TESTCOMANDHTTP_H
#define TESTCOMANDHTTP_H

#include <QWidget>
#include <QString>
#include <QtNetwork/qnetworkaccessmanager.h>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <Qtimer>
namespace Ui {
class testComAndHttp;
}

class testComAndHttp : public QWidget
{
    Q_OBJECT

public:
    explicit testComAndHttp(QWidget *parent = 0);
    ~testComAndHttp();
signals:
    void testPageExit();
private slots:
    void on_pushButton_BackMainUi_clicked();

    void on_pushButton_OpenCom_clicked();

    void on_pushButton_httpGet_clicked();

    void on_pushButton_httpPost_clicked();

    void finished(QNetworkReply *reply);

private:
    Ui::testComAndHttp *ui;
    QSerialPort *my_serialport;

    QByteArray requestData;
    QTimer *timer;

};

#endif // TESTCOMANDHTTP_H
