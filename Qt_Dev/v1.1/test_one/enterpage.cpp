#include "enterpage.h"
#include "ui_enterpage.h"
#include <QPixmap>
#include <QMessageBox>

EnterPage::EnterPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EnterPage)
{
    ui->setupUi(this);
    mainUI_Page = new MainUI;
    http_Page = new http_GAndP;

//    ui->graphicsView->autoFillBackground();
//        post_Info="0";
//        postHttp(1,post_Info);//获取所有信息
//        ModelOperate=1;

    this->showFullScreen();//主屏幕最大化

//    ui->widget->setObjectName("widget");
//    ui->widget->setStyleSheet("#widget{"
//                              "font-size:16px;"
//                              "border-image:url(:/image/1.jpg);"
//                              "}");

    connect(http_Page,SIGNAL(sendInfo_To_Enter(int,int,int)),this,SLOT(receiverInfo_from_Http(int,int,int)));
    connect(mainUI_Page,SIGNAL(leaveOperate_To_enter()),this,SLOT(closePage()));

}

EnterPage::~EnterPage()
{
    delete ui;
}

void EnterPage::on_pushButton_sigin_clicked()
{
    handleInfo();

}

void EnterPage::handleInfo()//处理输入框的信息
{
    QString username;
    QString password;

    username = ui->lineEdit_acount->text();
    password = ui->lineEdit_password->text();

    http_Page->jsonForSend(11,username,0);

    http_Page->jsonForSend(11,password,1);

}

void EnterPage::receiverInfo_from_Http(int status, int userId, int role)
//接受服务器下发信息 0:正确 1：错误
{
    if(status == 0)//正确
    {
        this->close();

        qDebug()<<userId;

        QString username;
        username =ui->lineEdit_acount->text();

        mainUI_Page->show();
        mainUI_Page->initShow(role,username);

    }
    else if(status == 1) //错误
    {
         QMessageBox::warning(this,tr("Waring"),tr("user name or password error!"),QMessageBox::Yes);

    }
    ui->lineEdit_acount->clear();
    ui->lineEdit_password->clear();

}


void EnterPage::closePage()
{
    this->show();
}
