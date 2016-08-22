#include "mainui.h"
#include "ui_mainui.h"

MainUI::MainUI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainUI)
{
    ui->setupUi(this);
    reagentGPage = new searchWindow(this);
    reagentPPage = new MainWindow(this);

    connect(reagentGPage,SIGNAL(GPageToMainUi()),this,SLOT(GPage_To_this()));
    connect(reagentPPage,SIGNAL(toMainChoice()),this,SLOT(PPage_To_this()));
}

MainUI::~MainUI()
{
    delete ui;
}

void MainUI::on_pushButton_reagentP_clicked()
{
    this->close();
    reagentPPage->show();

}

void MainUI::on_pushButton_reagentG_clicked()
{
    this->close();
    reagentGPage->show();
}

void MainUI::on_pushButton_reagentB_clicked()
{

}

void MainUI::GPage_To_this()
{
    this->show();
    reagentGPage->close();
}

void MainUI::PPage_To_this()
{
    this->show();
    reagentPPage->close();
}
