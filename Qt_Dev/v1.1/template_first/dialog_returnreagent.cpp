#include "dialog_returnreagent.h"
#include "ui_dialog_returnreagent.h"

Dialog_returnReagent::Dialog_returnReagent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_returnReagent)
{
    ui->setupUi(this);
}

Dialog_returnReagent::~Dialog_returnReagent()
{
    delete ui;
}

void Dialog_returnReagent::on_pushButton_closeReturnReagentPage_clicked()
{

    emit close_dialog_returnReagent();
}
