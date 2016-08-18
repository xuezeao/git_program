#include "dialog_getoperatepage.h"
#include "ui_dialog_getoperatepage.h"

Dialog_getoperatepage::Dialog_getoperatepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_getoperatepage)
{
    ui->setupUi(this);
}

Dialog_getoperatepage::~Dialog_getoperatepage()
{
    delete ui;
}

void Dialog_getoperatepage::on_pushButton_cancelOK_clicked()
{
    emit closeGetOperatePageToGetInterface();
}

void Dialog_getoperatepage::on_pushButton_operateOK_clicked()
{
//    emit operateOKBackMainUI();
     emit closeGetOperatePageToGetInterface();
}
