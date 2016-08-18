#include "comandhttptest.h"
#include "ui_comandhttptest.h"

comandhttptest::comandhttptest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::comandhttptest)
{
    ui->setupUi(this);
}

comandhttptest::~comandhttptest()
{
    delete ui;
}

void comandhttptest::on_commandLinkButton_backLoginPage_clicked()
{
    emit backLoginPage();
}
