#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QDateTime>
#include <Qtimer>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    page1 = new first();
    page2 = new second();

    createStatusBar();
//    this->showFullScreen();//主屏幕最大化
    connect(page1,SIGNAL(page1Exit()),this,SLOT(page1ReturnMainUi()));
    connect(page2,SIGNAL(page2Exit()),this,SLOT(page2ReturnMainUi()));

}
void MainWindow::createStatusBar()
{
    timer = new QTimer(this);

    locationLabel = new QLabel(this);
    locationLabel->setAlignment(Qt::AlignHCenter);
    locationLabel->setMaximumSize(locationLabel->sizeHint());

    webStatusLabel = new QLabel(this);
    webStatusLabel->setAlignment(Qt::AlignRight);
    webStatusLabel->setIndent(3);//空白区域的长度

    statusBar()->addWidget(locationLabel);
    statusBar()->addWidget(webStatusLabel,1);//拉伸长度

    connect(timer,SIGNAL(timeout()),this,SLOT(updatetime()));

    timer->start(500);
    updatetime();

}

void MainWindow::updatetime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd  hh:mm ddd");//时间格式设定
    locationLabel->setText("Status:");//状态显示
    webStatusLabel->setText("Time: "+str);//时间显示

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{

    page2->show();
    this->close();

}

void MainWindow::on_pushButton_clicked()
{
    page1->show();
    this->close();

}
void MainWindow::page1ReturnMainUi()
{
    this->show();
  page1->close();
}
void MainWindow::page2ReturnMainUi()
{
    this->show();
 page2->close();
}
