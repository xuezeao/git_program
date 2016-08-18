#include "autocompelete.h"
#include "ui_autocompelete.h"

autocompelete::autocompelete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::autocompelete)
{
    ui->setupUi(this);
}

autocompelete::~autocompelete()
{
    delete ui;
}
