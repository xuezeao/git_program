#include "signin.h"
#include "ui_signin.h"
#include <QMessageBox>
signIn::signIn(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::signIn)
{

//    MainWindowPage = new MainWindow();

    ui->setupUi(this);


}

signIn::~signIn()
{
    delete ui;
}


void signIn::on_pushButton_signIN_clicked()
{
    if(ui->lineEdit_acount->text() == tr("meixing")&&
            (ui->lineEdit_password->text() == tr("123456")))
   {
       accept();
    }
    else{
        QMessageBox::warning(this,tr("Waring"),tr("user name or password error!"),QMessageBox::Yes);
         ui->lineEdit_acount->clear();
         ui->lineEdit_password->clear();
         ui->lineEdit_acount->setFocus();

    }
}
