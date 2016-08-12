#include "placereagent.h"
#include "ui_placereagent.h"

placeReagent::placeReagent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::placeReagent)
{
    ui->setupUi(this);
}

placeReagent::~placeReagent()
{
    delete ui;
}
