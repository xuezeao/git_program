#ifndef HTTP_GANDP_H
#define HTTP_GANDP_H

/****************http******************/
#include <QByteArray>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QMessageBox>
#include <QtDebug>


/**************json使用******************/
#include <QSqlTableModel>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>


/************数据库***************/
#include <QSqlQuery>





class http_GAndP : public QObject
{
    Q_OBJECT
public:
    explicit http_GAndP(QObject *parent = 0);
    void getHttp(void);
    //0 测试地址 1获取再位试剂列表 2获取试剂类型列表 3获取待归还试剂
    void postHttp(int postName_NO,QString postStr);//postName_NO用于选择接口名对应的序号，postStr用于装载需要发送内容

    void jsonForSend(int model_json,QString T_tableName,int T_tableNo);//model_json 选择打包json格式，T_tableName用于选择对应的表格，T_tableNo选择对应打包的行数
    //  5：分配位置 6：入柜完成上报 7：取完成上报 8：还上报 9：报废 10：替换 11：登入

signals:

    void sendInfo_To_Operate(int drawerNo,int positionNo,int positionId);//发送接收到的位置信息
    void sendError_To_Operate(int status);//发送上传状态 0：ok 1:lose
    void sendError_To_Execut(int error_status,QString errorInfo);//发送任务完成情况 0-error 1-OK
    void sendInfo_To_sheetPage(int status);//发送上传状态 0:OK 1:lose
    void sendFalse();
    void sendInfo_To_return_PutIn(int status);//0 成功 1 失败 2未操作
    void sendInfo_To_Enter(int status,int userId,int userRole);//0 成功 1 失败

public slots:

private slots:
        void finished(QNetworkReply *reply);
private:
        bool agentiaInfoGet(QJsonDocument str ,int t);//选择和切换post反馈的信息
        //5: 入柜 6：入柜完成 7：取完成 8:还完成  9:替换完成 10：报废完成 11：登入

        void emitLostMessage(int t);//发送失败信息
        //5: 入柜 6：入柜完成 7：取完成
        QNetworkAccessManager *accessManager;

        QMessageBox *msgBox;



        struct User{
            int user_Id;
            int user_Role;//0-创建者,1-管理员,2-普通组员
            int positionId_allocPosition;//存储系统分配positionId

            QString usernamer;

        }USER;
        struct User *user;
        int Http_ModelChoice;//选择解析的模式 0-get-柜子信息  1-post-

};

#endif // HTTP_GANDP_H
