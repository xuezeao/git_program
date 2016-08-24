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
private:
    Ui::MainUI *ui;
    searchWindow *reagentGPage;
    MainWindow *reagentPPage;
    QSqlTableModel *model;
    QNetworkAccessManager *accessManager;
    void MessageAnayle(QString a);
    void switchStyle(QString b);

};
#endif // MAINUI_H
