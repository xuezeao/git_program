#include "returnreagenttochest.h"
#include "ui_returnreagenttochest.h"

returnreagenttochest::returnreagenttochest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::returnreagenttochest)
{
    ui->setupUi(this);
    returnReagentPage = new Dialog_returnReagent;
    connect(returnReagentPage,SIGNAL(close_dialog_returnReagent()),this,SLOT(close_dialog_returnReagentPage()));
}

returnreagenttochest::~returnreagenttochest()
{
    delete ui;
}

void returnreagenttochest::on_pushButton_closeReturnReagentPage_clicked()
{
    emit closeReturnReagentPageToMainUI();
}

void returnreagenttochest::on_pushButton_sureOperaReturnOperate_clicked()
{
    returnReagentPage->show();
    this->show();
}

void returnreagenttochest::close_dialog_returnReagentPage()
{
    this->show();
    returnReagentPage->close();
}
