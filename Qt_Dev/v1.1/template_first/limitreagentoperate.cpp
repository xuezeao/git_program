#include "limitreagentoperate.h"
#include "ui_limitreagentoperate.h"

limitReagentOperate::limitReagentOperate(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::limitReagentOperate)
{
    ui->setupUi(this);
}

limitReagentOperate::~limitReagentOperate()
{
    delete ui;
}

void limitReagentOperate::on_pushButton_cancelOperate_limitReagent_clicked()
{
    emit close_limitReagent_To_limitReagent();
}

void limitReagentOperate::on_pushButton_cancelrole_limitReagent_clicked()
{
    emit close_limitReagent_To_limitReagent();
}

void limitReagentOperate::on_pushButton_sureRole_limitReagent_clicked()
{
    emit close_limitReagent_To_limitReagent();
}
