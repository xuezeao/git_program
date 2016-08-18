#include "replacereagent.h"
#include "ui_replacereagent.h"

replaceReagent::replaceReagent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::replaceReagent)
{
    ui->setupUi(this);
    Dialog_replaceReagent_In_repalceReagent = new Dialog_replaceReagent;
    connect(Dialog_replaceReagent_In_repalceReagent,SIGNAL(close_dialog_replaceReagen_To_replaceReagent()),
            this,SLOT(close_dialog_replaceReagentPage_IN_this()));
}

replaceReagent::~replaceReagent()
{
    delete ui;
}

void replaceReagent::on_pushButton_sureOpera_replaceReagent_clicked()
{
    this->close();
    Dialog_replaceReagent_In_repalceReagent->show();
}

void replaceReagent::on_commandLinkButton_closePage_replaceReagent_clicked()
{
    emit close_replaceReagent_Page_To_MainUI();
}

void replaceReagent::close_dialog_replaceReagentPage_IN_this()
{
    this->show();
    Dialog_replaceReagent_In_repalceReagent->close();
}
