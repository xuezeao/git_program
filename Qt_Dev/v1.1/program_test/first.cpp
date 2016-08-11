#include "first.h"
#include "ui_first.h"
#include <QLabel>
#include <QTimer>

first::first(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::first)
{
    ui->setupUi(this);
//  this->showFullScreen();//主屏幕最大化


}

first::~first()
{
    delete ui;
}

void first::on_pushButton_clicked()
{
    emit page1Exit();
}

