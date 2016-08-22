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
