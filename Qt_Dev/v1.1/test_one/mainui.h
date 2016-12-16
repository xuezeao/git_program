#ifndef MAINUI_H
#define MAINUI_H

#include <QMainWindow>
#include "http_gandp.h"
#include "operatewindow.h"
#include "returnpage.h"

#include "showallinfo.h"

#include <QtDebug>
#include <QUrl>
#include <QMessageBox>
namespace Ui {
class MainUI;
}

class MainUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = 0);
    ~MainUI();

    void initShow(int num,QString username);//0：创建者 1：管理者 2：普通

private slots:

    void closeOperatePage_Return_MainUi();

    void closeReturnPage_Return_MainUi();

    void on_pBT_PutIn_clicked();

    void on_pBt_Get_clicked();

    void on_pBt_Return_clicked();

    void on_pBt_getTest_clicked();

    void on_pBt_leave_clicked();

    void on_pBt_post_clicked();



    void on_pBt_change_clicked();

signals:
    void leaveOperate_To_enter();

private:
    Ui::MainUI *ui;
    http_GAndP *MainUi_http_Page;
    OperateWindow *MainUi_operate_Page;
    ReturnPage *MainUi_return_Page;
    ShowAllInfo *showAA;

};

#endif // MAINUI_H
