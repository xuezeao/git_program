#include "mainui.h"
#include "ui_mainui.h"

MainUI::MainUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainUI)
{
    ui->setupUi(this);



    MainUi_http_Page = new http_GAndP;
    MainUi_operate_Page = new OperateWindow;
    MainUi_return_Page = new ReturnPage;
    showAA = new ShowAllInfo;



    connect(MainUi_operate_Page,SIGNAL(OperateWindow_To_MainUI()),this,SLOT(closeOperatePage_Return_MainUi()));
    connect(MainUi_return_Page,SIGNAL(returnPage_To_MainUi()),this,SLOT(closeReturnPage_Return_MainUi()));


}


void MainUI::initShow(int num,QString username)//0：创建者 1：管理者 2：普通
{
    if(num == 0)
    {
        ui->pBt_getTest->show();
        ui->pBt_post->show();

    }
    else if(num == 1)
    {
        ui->pBt_getTest->hide();
        ui->pBt_post->hide();

        ui->pBt_change->show();
        ui->pBt_inspect->show();
        ui->pBt_desert->show();
    }
    else if(num == 2)
    {
        ui->pBt_change->hide();
        ui->pBt_inspect->hide();
        ui->pBt_desert->hide();
        ui->pBt_getTest->hide();
        ui->pBt_post->hide();
    }
    MainUi_http_Page->getHttp();
    ui->label_usename->setText(username);
    this->showFullScreen();//主屏幕最大化

}

void MainUI::closeOperatePage_Return_MainUi()
{

    this->show();
    MainUi_operate_Page->close();
}

void MainUI::closeReturnPage_Return_MainUi()
{
    this->show();
    MainUi_return_Page->close();
}

MainUI::~MainUI()
{
    delete ui;
}

/*******************按键区*****************/
void MainUI::on_pBT_PutIn_clicked()
{

    MainUi_operate_Page->show();
    MainUi_operate_Page->ModelSelect(1);
    this->close();
}

void MainUI::on_pBt_Get_clicked()
{

    MainUi_operate_Page->show();
    MainUi_operate_Page->ModelSelect(2);
    this->close();
}

void MainUI::on_pBt_change_clicked()
{/*
    MainUi_operate_Page->show();
    MainUi_operate_Page->ModelSelect(4);
    this->close();*/
}

void MainUI::on_pBt_Return_clicked()
{


    MainUi_return_Page->show();
    MainUi_return_Page->ModelSelect(3);
    this->close();
}

void MainUI::on_pBt_getTest_clicked()
{
    MainUi_http_Page->getHttp();
}

void MainUI::on_pBt_post_clicked()
{
    MainUi_http_Page->postHttp(0,"0");
}

void MainUI::on_pBt_leave_clicked()
{
    this->close();
    emit leaveOperate_To_enter();
}


/*******************************************/



