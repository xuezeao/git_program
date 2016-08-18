#include "abandonreagent.h"
#include "ui_abandonreagent.h"

abandonReagent::abandonReagent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::abandonReagent)
{
    ui->setupUi(this);
    dialog_abandonReagent_Page = new dialog_abandonReagent;

    connect(dialog_abandonReagent_Page,SIGNAL(close_dialog_abandonReagentPage()),this,SLOT(open_dialog_dabandonReagentPage()));


}

abandonReagent::~abandonReagent()
{
    delete ui;
}

void abandonReagent::on_pushButton_sureOpera_abandonReagent_clicked()
{
    this->close();
    dialog_abandonReagent_Page->show();
}

void abandonReagent::on_commandLinkButton_closePage_abandonReagent_clicked()
{
    emit close_abandonReagentPage_To_MainUI();
}
void abandonReagent::open_dialog_dabandonReagentPage()
{
    this->show();
    dialog_abandonReagent_Page->close();
}
