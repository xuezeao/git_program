#include "dialog_replacereagent.h"
#include "ui_dialog_replacereagent.h"

Dialog_replaceReagent::Dialog_replaceReagent(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_replaceReagent)
{
    ui->setupUi(this);
}

Dialog_replaceReagent::~Dialog_replaceReagent()
{
    delete ui;
}

void Dialog_replaceReagent::on_pushButton_backPreviousOption_replaceReagent_clicked()
{
    emit close_dialog_replaceReagen_To_replaceReagent();
}
