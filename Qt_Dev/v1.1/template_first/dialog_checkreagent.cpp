#include "dialog_checkreagent.h"
#include "ui_dialog_checkreagent.h"

Dialog_checkreagent::Dialog_checkreagent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_checkreagent)
{
    ui->setupUi(this);
}

Dialog_checkreagent::~Dialog_checkreagent()
{
    delete ui;
}

void Dialog_checkreagent::on_pushButton_checkOK_checkReagent_clicked()
{
    emit close_dialog_checkReagentPage_To_checkReagent();
}
