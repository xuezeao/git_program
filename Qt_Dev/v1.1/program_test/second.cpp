#include "second.h"
#include "ui_second.h"
#include <QApplication>
second::second(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::second)
{
    ui->setupUi(this);

}

second::~second()
{
    delete ui;
}

void second::on_pushButton_clicked()
{
    emit page2Exit();
}
