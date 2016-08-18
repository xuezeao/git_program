#include "reagentgetfromchest.h"
#include "ui_reagentgetfromchest.h"

reagentgetfromchest::reagentgetfromchest(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reagentgetfromchest)
{
    ui->setupUi(this);
    getPage = new Dialog_getoperatepage;
    connect(getPage,SIGNAL(closeGetOperatePageToGetInterface()),this,SLOT(openThisPageCloseOperatePage()));

}

reagentgetfromchest::~reagentgetfromchest()
{
    delete ui;
}

void reagentgetfromchest::on_pushButton_sureOperaGetAction_clicked()
{
    this->close();
    getPage->show();
}

void reagentgetfromchest::on_commandLinkButton_closeGetPageOpenMain_clicked()
{

    emit closeGetOperateOpenMain();
}
void reagentgetfromchest::openThisPageCloseOperatePage()
{
    this->show();
    getPage->close();
}
