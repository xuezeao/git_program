#include "reagentgpage.h"
#include "ui_reagentgpage.h"

reagentGPage::reagentGPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reagentGPage)
{
    ui->setupUi(this);
}

reagentGPage::~reagentGPage()
{
    delete ui;
}

void reagentGPage::on_pushButton_searchNews_clicked()
{

}

void reagentGPage::on_pushButton_2_clicked()
{

}

void reagentGPage::on_pushButton_clicked()
{

}

void reagentGPage::on_commandLinkButton_clicked()
{
    emit closeGPage_To_Main();
}
