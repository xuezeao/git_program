#ifndef HTTPGP_H
#define HTTPGP_H


#include <QtDebug>
#include <QMessageBox>

/****************http******************/
#include <QByteArray>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>

/**************json使用******************/
#include <QSqlTableModel>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>

/************数据库***************/
#include <QSqlQuery>


class HttpGP : public QObject
{
    Q_OBJECT
public:
    explicit HttpGP(QObject *parent = 0);

    void GetHttp(void);
        //0 测试地址 1获取再位试剂列表 2获取试剂类型列表 3获取待归还试剂
    void PostHttp(int postId_NO, QString postStr);//postName_NO用于选择接口名对应的序号，postStr用于装载需要发送内容
    //0:测试地址 1：获取在位试剂 2：获取试剂类型 3：获取待归还试剂 4：获取地址信息 5:请求空闲位置
    //6:入柜完成 7：取完成  8：还完成  9：替换完成 10：报废完成 11：登入 12：点验 13：获取任务申请 14：报警信息
    void JsonForSend(int model_json, QString T_tableName, int T_tableNo);
    //赋值
    //model_json 选择打包json格式，T_tableName用于选择对应的表格，T_tableNo选择对应打包的行数

    void PackageJson(int order);
    //封装JSON信息
    //  5：分配位置 6：入柜完成上报 7：取完成上报 8：还上报 9：报废 10：替换 11：登入

signals:

public slots:
    void finished(QNetworkReply *reply);

private:
    QSqlQuery query;
    QNetworkAccessManager *accessManager;
    QMessageBox *msgBox;

    struct User
    {
        int user_id;
        int user_role;//0-创建者,1-管理员,2-普通组员
        int positionId_allocPosition;//存储系统分配positionId

        QString userName;
    };
    struct User *user;

    struct Http_info
    {
        int http_modelChoice;
        int model_json;
        int tableNo;

        QString tableName;
    };
    struct Http_info *http_info;

    void UnpackageJson(QJsonDocument str, int t);
    //解析JSON信息并存入数据库
    //5: 入柜 6：入柜完成 7：取完成 8:还完成  9:替换完成 10：报废完成 11：登入




};

#endif // HTTPGP_H
