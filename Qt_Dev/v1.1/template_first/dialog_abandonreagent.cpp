#include "dialog_abandonreagent.h"
#include "ui_dialog_abandonreagent.h"

dialog_abandonReagent::dialog_abandonReagent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dialog_abandonReagent)
{
    ui->setupUi(this);
}

dialog_abandonReagent::~dialog_abandonReagent()
{
    delete ui;
}

void dialog_abandonReagent::on_pushButton_cancelOK_abandonReagent_clicked()
{
    emit close_dialog_abandonReagentPage();
}

void dialog_abandonReagent::on_pushButton_operateOK_abandonReagent_clicked()
{
    emit close_dialog_abandonReagentPage();
}
