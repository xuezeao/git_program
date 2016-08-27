#ifndef POPUPPAGE_H
#define POPUPPAGE_H
#include <QSqlTableModel>
#include <QDialog>
#include <QTimer>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QUrl>
#include <QNetworkRequest>
#include <QEventLoop>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>
#include <QJsonValue>
#include <QElapsedTimer>
#include  <QSqlQuery>

#include "threadread.h"
namespace Ui {
class popupPage;
}


class popupPage : public QDialog
{
    Q_OBJECT
signals:
    void backplacepage();
    void backGPage();
//    void postTaskRole(int no,QString postInfo);
    void stopWait();
public:
    explicit popupPage(QWidget *parent = 0);
    ~popupPage();
     void showReagentTableView();
     void selectModel(int num);//模式显示
     void waitHttpInfo(int no,QString a);
     QString getPosition;
     void getHttp();
  int acount=1;//指示显示内容
     void read(const QJsonObject &json);
private slots:
    void on_pushButton_backPreviousOption_clicked();

    void on_pushButton_placedNext_clicked();

    void on_pushButton_jumpThisOption_clicked();
    void finished(QNetworkReply *reply);//get post 信息接收



    void on_pushButton_clicked();

private:
    Ui::popupPage *ui;
//    QJsonObject json;
    QJsonDocument document;
    QSqlTableModel *model;
    QTimer *timer;


    QNetworkAccessManager *accessManager_here;
    char modelSwitch;//0_申请位置；1完成信息
    void showmain();
    void showNeedPlaceReagent();
    QString positionInfo;//直接存储位置信息方便使用
    QString stash_P[100];//存储从服务器发送回数据的解析内容
    QEventLoop eventloop;//单线程等待事件
    void MessageAnayle(QString a);
    void postStash_P(int num);//将解析的数据存到数据库
    void postHttp_P(int num,QString postStr);//信息post给服务器
    QString sheetName;//用于切换数据表
    int     modelChoice;//模式选择切换返回的页面

    int    Message_error;//错误信息
//    void jsonSwith_position(QByteArray str);//从json到文本


    void postS_GetPosition(QJsonDocument t,char t1);//发送位置请求
    void waitTaskInfo();//系统等待反馈
    void creatPostInfo(int a);//用于选择生成发送的信息0入柜位置申请 1完成一个入柜任务

    ThreadRead threadRead;
    void createSerialPort(const QString &portName, unsigned int baudRate);
    int IntoCabinet(int DID);
    void waitTaskInfo(char a);
    int IntoLED(int DID, int *positionNo, int LEDNum,char *DataLED, int color);
    int send_positionNo;
    int send_drawerNo;
    int send_LEDNo;
    int IntoPhotosensor(int DID,int *after_photosensor);
    int changePositionStatus;//接受改变位置
    int wait4positionNo(int *send_positionNo,int send_LEDNum);
    int takeAct(int DID,int *send_positionNo,int send_LEDNum);//执行任务
int ba;
int a[0];

};



//int IntoCabinet(int DID);
#endif // POPUPPAGE_H
