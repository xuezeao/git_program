#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QDateTime>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd");
    ui->label_time->setText(str);

}

MainWindow::~MainWindow()
{
    delete ui;
}
