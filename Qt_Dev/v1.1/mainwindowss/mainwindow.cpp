#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createStatusBars();
}
void MainWindow::createToolsBars()
{

}

MainWindow::~MainWindow()
{
    delete ui;
}
