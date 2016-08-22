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
