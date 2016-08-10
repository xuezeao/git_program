#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStatusBar>
#include <QDateTime>
#include <QTimer>

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
    timer = new QTimer(this);

    locationLabel = new QLabel(this);
    locationLabel->setAlignment(Qt::AlignHCenter);
    locationLabel->setMinimumSize(locationLabel->sizeHint());
    formulaLabel = new QLabel(this);
    formulaLabel->setIndent(3);
    formulaLabel->setAlignment(Qt::AlignRight);

    statusBar()->addWidget(locationLabel);
    statusBar()->addWidget(formulaLabel,1);

    connect(timer,SIGNAL(timeout()),this,SLOT(updateStatusBar()));
    updateStatusBar();
}
void MainWindow::updateStatusBar()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str =time.toString("yyyy-MM-dd hh:mm ddd");
    locationLabel->setText("status:");//状态显示
    formulaLabel->setText("time:"+str);//时间显示

}


MainWindow::~MainWindow()
{
    delete ui;
}
