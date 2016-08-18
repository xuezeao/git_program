#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "logininterface.h"
#include "waitinterface.h"
#include "reagentplace.h"
#include "reagentgetfromchest.h"
#include "returnreagenttochest.h"
#include "abandonreagent.h"
#include "replacereagent.h"
#include "checkreagent.h"
#include "limitreagentoperate.h"
//  #include "dialog_getoperatepage.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:

public slots:
    void openChoiceMainPage();
    void openLoginPage();
    void closePlacePageOpenMainPage();

    void closeReagentGetPageOpenMainPage();
//    void closeGetOpenMainPage();
    void closeReturnReagentBackMainPage();
    void close_abandonReagentPage_BackMainUI();
    void close_replaceReagentPage_BackMainUI();
    void close_checkReagent_BackMainUI();
    void close_limitReagent_BackMainUI();
private slots:
    void on_pushButton_reagentPlace_clicked();

    void on_pushButton_reagentGet_clicked();

    void on_pushButton_reagentReturn_clicked();

    void on_pushButton_openReagentAbandon_clicked();

    void on_pushButton_reagentReplace_clicked();

    void on_pushButton_reagentCheck_clicked();

    void on_pushButton_limitReagentOption_clicked();

private:
    Ui::MainWindow *ui;
    LoginInterface *LoginPage;
    waitInterface *waitOpenPage;
    reagentPlace *reagentPlacePage;
    reagentgetfromchest *reagentGetPgae;
//    Dialog_getoperatepage *closeGetOperateOpenMainUI;
    returnreagenttochest *returnReagentPage;
    abandonReagent * this_abandonReagent;
    replaceReagent * this_replaceReagent;
    CheckReagent * this_checkReagent;
    limitReagentOperate * this_limitReagent;
};

#endif // MAINWINDOW_H
