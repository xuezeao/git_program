#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStatusBar>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    createStatusBar();
//    QDateTime time = QDateTime::currentDateTime();
//    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd");
//    ui->label_time->setText(str);


//    ui->statusBar->addWidget("time");
}

void MainWindow::createStatusBar()
{
    locationLabel = new QLabel("W999");
    locationLabel->setAlignment(Qt::AlignHCenter);
    locationLabel->setMinimumSize(locationLabel->sizeHint());
    formulaLabel = new QLabel;
    formulaLabel->setIndent(3);

    statusBar()->addWidget(locationLabel);
    statusBar()->addWidget(formulaLabel,1);

    updateStatusBar();
}
void MainWindow::updateStatusBar()
{
    locationLabel->setText("1");
    formulaLabel->setText("2");
}

MainWindow::~MainWindow()
{
    delete ui;
}
