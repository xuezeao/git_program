#include "checkreagent.h"
#include "ui_checkreagent.h"

CheckReagent::CheckReagent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckReagent)
{
    ui->setupUi(this);
    this_dialog_checkReagent_In_checkReagent = new Dialog_checkreagent;
    connect(this_dialog_checkReagent_In_checkReagent,SIGNAL(close_dialog_checkReagentPage_To_checkReagent()),
            this,SLOT(close_dialog_checkReagent_Come_here()));
}

CheckReagent::~CheckReagent()
{
    delete ui;
}

void CheckReagent::on_pushButton_cancelOperate_replaceReagent_clicked()
{
    emit close_checkReagent_To_MainUI();
}

void CheckReagent::on_pushButton__sureOK_replaceReagent_clicked()
{
    this->close();
    this_dialog_checkReagent_In_checkReagent->show();
}
void CheckReagent::close_dialog_checkReagent_Come_here()
{
    this->show();
    this_dialog_checkReagent_In_checkReagent->close();
}
