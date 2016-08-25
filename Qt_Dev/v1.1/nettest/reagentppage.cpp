#include "reagentppage.h"
#include "ui_reagentppage.h"

reagentPPage::reagentPPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reagentPPage)
{
    ui->setupUi(this);
}

reagentPPage::~reagentPPage()
{
    delete ui;
}

void reagentPPage::on_commandLinkButton_B_clicked()
{
    emit closePPage_To_Main();
}

void reagentPPage::on_pushButton_Preagent_clicked()
{

}

void reagentPPage::on_pushButton_Dreagent_clicked()
{

}
