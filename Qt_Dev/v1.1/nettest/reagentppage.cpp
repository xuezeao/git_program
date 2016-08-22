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
