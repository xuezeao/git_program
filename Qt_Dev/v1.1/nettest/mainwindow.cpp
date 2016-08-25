#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer = new QTimer(this);
    PPage = new reagentPPage;
    GPage = new reagentGPage;

    connect(PPage,SIGNAL(closePPage_To_Main()),this,SLOT(closeThis_To_PPage()));
    connect(GPage,SIGNAL(closeGPage_To_Main()),this,SLOT(closeThis_To_GPage()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::closeThis_To_PPage()
{
    this->show();
    PPage->close();
}
void MainWindow::closeThis_To_GPage()
{
    this->show();
    GPage->close();
}
void MainWindow::closeThis_To_BPage()
{

}

void MainWindow::on_pushButton_reagentP_clicked()
{
    this->close();
    PPage->show();
}

void MainWindow::on_pushButton_reagentG_clicked()
{
    this->close();
    GPage->show();
}

void MainWindow::on_pushButton_reagentB_clicked()
{

}
