#ifndef MAINUI_H
#define MAINUI_H

#include <QMessageBox>
#include <QUrl>
#include <QNetworkRequest>
#include <QDebug>
#include <QWidget>
#include "mainwindow.h"
#include "searchwindow.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QSqlTableModel>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonParseError>


namespace Ui {
class MainUI;
}
//char T_CabinetInfo,T_DrawerList,T_AgentiaInBox,T_AgentiaTypeList,T_UserInfo,T_AgentiaSearchResult,
//T_Task,T_CabinetStatus,T_PositionDisable,T_WaringLog,T_PositionAllocate,T_DrawerSize;//列表名
//QString sheetOperate_SwitchData;//存储处理信息

class MainUI : public QWidget
{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = 0);
    ~MainUI();
    void postHttp(int num,QString postStr);
    void getHttp();
    void postSwitch(int num);
public slots:
//    void potest();
private slots:
    void on_pushButton_reagentP_clicked();

    void on_pushButton_reagentG_clicked();

    void on_pushButton_reagentB_clicked();
    void GPage_To_this();
    void PPage_To_this();

    void finished(QNetworkReply * reply);
    void on_pushButton_clicked();

private:
    bool messageSuccess;
    QString messageError;
    int message_Acount;
    Ui::MainUI *ui;
    searchWindow *reagentGPage;
    MainWindow *reagentPPage;
    QSqlTableModel *model;
    QNetworkAccessManager *accessManager;
    void agentiaNewsGet(QJsonDocument str ,char t);//选择和切换post反馈的信息
    char ModelOperate;//用于指定agentiaNewsGet中对于json的解析模式选定 0 get 分解柜子信息
    void infoSave_To_Sql(char t);//使用ModelOperate作为模式选择对象
    QString stash_M[1000];

};
#endif // MAINUI_H
