#include "reagentplace.h"
#include "ui_reagentplace.h"

reagentPlace::reagentPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reagentPlace)
{
    ui->setupUi(this);
    placeOperatePage = new Dialog_placeoperatepage;

    connect(placeOperatePage,SIGNAL(closePlaceOperatePageBackPlaceEditPage()),this,SLOT(openPlacePage()));
}

reagentPlace::~reagentPlace()
{
    delete ui;
}

void reagentPlace::on_commandLinkButton_fromPlaceToChoicePage_clicked()
{
    emit closePlacePageOpenChoice();
}

void reagentPlace::openPlacePage()
{
    placeOperatePage->close();
    this->show();
}



void reagentPlace::on_pushButton_sureOperate_clicked()
{
//    this->close();
    placeOperatePage->show();
}
