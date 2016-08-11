#include "first.h"
#include "ui_first.h"
#include <QApplication>
first::first(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);
    //this->setWindowFlags(Qt::WindowFullScreen);


}

first::~first()
{
    delete ui;
}

void first::on_pushButton_clicked()
{
    emit page1Exit();
}
