#include "sigin.h"
#include "ui_sigin.h"
#include <QPixmap>
#include <QMessageBox>

sigin::sigin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sigin)
{
    ui->setupUi(this);
    MainUI_page = new MainUI;

    ui->graphicsView->autoFillBackground();
}

sigin::~sigin()
{
    delete ui;
}

void sigin::on_pushButton_sigin_clicked()
{
    if((ui->lineEdit_acount->text() == tr("admin"))&&(ui->lineEdit_password->text() == tr("123456")))
    {
//        emit open_Option();
        MainUI_page->show();
        this->close();
    }
    else{
        QMessageBox::warning(this,tr("Waring"),tr("user name or password error!"),QMessageBox::Yes);
         ui->lineEdit_acount->clear();
         ui->lineEdit_password->clear();
         ui->lineEdit_acount->setFocus();
    }
}
