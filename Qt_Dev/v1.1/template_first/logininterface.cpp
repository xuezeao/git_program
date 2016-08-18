#include "logininterface.h"
#include "ui_logininterface.h"

LoginInterface::LoginInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginInterface)
{

    ui->setupUi(this);

    comAndHttpTestPage = new comandhttptest;

    connect(comAndHttpTestPage,SIGNAL(backLoginPage()),this,SLOT(openLoginInterface()));
}

LoginInterface::~LoginInterface()
{
    delete ui;
}

void LoginInterface::on_pushButton_LoginInterface_clicked()
{
    emit openChoicMainInterface();
}

void LoginInterface::openLoginInterface()
{
    this->show();
    comAndHttpTestPage->close();

}

void LoginInterface::on_pushButton_openTestPage_clicked()
{
    this->close();
    comAndHttpTestPage->show();
}
