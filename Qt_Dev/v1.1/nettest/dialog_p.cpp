#include "dialog_p.h"
#include "ui_dialog_p.h"

dialog_P::dialog_P(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_P)
{
    ui->setupUi(this);
}

dialog_P::~dialog_P()
{
    delete ui;
}

void dialog_P::on_pushButton_backPreviousOption_clicked()
{

}

void dialog_P::on_pushButton_jumpThisOption_clicked()
{

}

void dialog_P::on_pushButton_placedNext_clicked()
{


}
