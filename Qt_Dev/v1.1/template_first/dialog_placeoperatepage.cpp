#include "dialog_placeoperatepage.h"
#include "ui_dialog_placeoperatepage.h"

Dialog_placeoperatepage::Dialog_placeoperatepage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog_placeoperatepage)
{
    ui->setupUi(this);
}

Dialog_placeoperatepage::~Dialog_placeoperatepage()
{
    delete ui;
}

void Dialog_placeoperatepage::on_pushButton_backPreviousOption_clicked()
{
    emit closePlaceOperatePageBackPlaceEditPage();
}
