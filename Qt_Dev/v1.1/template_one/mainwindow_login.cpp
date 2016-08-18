#include "mainwindow_login.h"
#include "ui_mainwindow_login.h"

MainWindow_login::MainWindow_login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_login)
{
    ui->setupUi(this);
}

MainWindow_login::~MainWindow_login()
{
    delete ui;
}
