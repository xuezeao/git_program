#include "sigin.h"
#include "ui_sigin.h"

sigin::sigin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sigin)
{
    ui->setupUi(this);
}

sigin::~sigin()
{
    delete ui;
}
