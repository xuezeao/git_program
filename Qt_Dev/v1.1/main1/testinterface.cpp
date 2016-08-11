#include "testinterface.h"
#include "ui_testinterface.h"

testinterface::testinterface(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testinterface)
{
    ui->setupUi(this);
}

testinterface::~testinterface()
{
    delete ui;
}
