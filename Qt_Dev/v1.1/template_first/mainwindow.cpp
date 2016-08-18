#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LoginPage = new LoginInterface;
    waitOpenPage = new waitInterface;
    reagentPlacePage = new reagentPlace;
    reagentGetPgae = new reagentgetfromchest;
//    closeGetOperateOpenMainUI = new Dialog_getoperatepage;
    returnReagentPage = new returnreagenttochest;
    this_abandonReagent = new abandonReagent;
    this_replaceReagent = new replaceReagent;
    this_checkReagent = new CheckReagent;
    this_limitReagent = new limitReagentOperate;



    waitOpenPage->show();

    connect(LoginPage,SIGNAL(openChoicMainInterface()),this,SLOT(openChoiceMainPage()));
    connect(waitOpenPage,SIGNAL(openLoginPage()),this,SLOT(openLoginPage()));
    connect(reagentPlacePage,SIGNAL(closePlacePageOpenChoice()),this,SLOT(closePlacePageOpenMainPage()));
    connect(reagentGetPgae,SIGNAL(closeGetOperateOpenMain()),this,SLOT(closeReagentGetPageOpenMainPage()));
//    connect(closeGetOperateOpenMainUI,SIGNAL(closeGetOperateOpenMain()),this,SLOT(closeGetOpenMainPage()));
    connect(returnReagentPage,SIGNAL(closeReturnReagentPageToMainUI()),this,SLOT(closeReturnReagentBackMainPage()));
    connect(this_abandonReagent,SIGNAL(close_abandonReagentPage_To_MainUI()),this,SLOT(close_abandonReagentPage_BackMainUI()));
    connect(this_replaceReagent,SIGNAL(close_replaceReagent_Page_To_MainUI()),this,SLOT(close_replaceReagentPage_BackMainUI()));
    connect(this_limitReagent,SIGNAL(close_limitReagent_To_limitReagent()),this,SLOT(close_limitReagent_BackMainUI()));
    connect(this_checkReagent,SIGNAL(close_checkReagent_To_MainUI()),this,SLOT(close_checkReagent_BackMainUI()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
/*******************登入界面到主界面***************************/
void MainWindow::openChoiceMainPage()
{
    this->show();
    LoginPage->close();
}
/************************等待界面切换到登入界面*************************/
void MainWindow::openLoginPage()
{
    waitOpenPage->close();
    LoginPage->show();
}

/***********************入柜操作区****************************/
void MainWindow::on_pushButton_reagentPlace_clicked()
{
    this->close();
    reagentPlacePage->show();
}

void MainWindow::closePlacePageOpenMainPage()
{
    reagentPlacePage->close();
    this->show();
}
/***********************取用操作区***********************************/
void MainWindow::on_pushButton_reagentGet_clicked()
{
    reagentGetPgae->show();
    this->close();
}
void MainWindow::closeReagentGetPageOpenMainPage()
{
    reagentGetPgae->close();
    this->show();
}
//void MainWindow::closeGetOpenMainPage()
//{
//    this->show();
//    closeGetOperateOpenMainUI->show();
//}
/*************************归还**********************************/
void MainWindow::closeReturnReagentBackMainPage()
{
    this->show();
    returnReagentPage->close();
}

void MainWindow::on_pushButton_reagentReturn_clicked()
{
    this->close();
    returnReagentPage->show();
}

/*********************报废操作区*************************/

void MainWindow::on_pushButton_openReagentAbandon_clicked()
{
    this->close();
    this_abandonReagent->show();
}
void MainWindow::close_abandonReagentPage_BackMainUI()
{
    this->show();
    this_abandonReagent->close();
}


/************************替换**********************************/
void MainWindow::close_replaceReagentPage_BackMainUI()
{
    this->show();
    this_replaceReagent->close();
}

void MainWindow::on_pushButton_reagentReplace_clicked()
{
    this->close();
    this_replaceReagent->show();
}
/***************************点验********************************/
void MainWindow::close_checkReagent_BackMainUI()
{
    this->show();
    this_checkReagent->close();
}


void MainWindow::on_pushButton_reagentCheck_clicked()
{
    this->close();
    this_checkReagent->show();
}

/********************************管制试剂*************************************/

void MainWindow::on_pushButton_limitReagentOption_clicked()
{
    this->close();
    this_limitReagent->show();
}
void MainWindow::close_limitReagent_BackMainUI()
{
    this->show();
    this_limitReagent->close();
}
