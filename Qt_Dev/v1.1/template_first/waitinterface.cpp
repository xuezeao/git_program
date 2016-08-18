#include "waitinterface.h"
#include "ui_waitinterface.h"
#include <QDebug>


waitInterface::waitInterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::waitInterface)
{
    ui->setupUi(this);
    this->setMouseTracking(true);
    ui->textBrowser->viewport()->installEventFilter(this);//设置窗口鼠标事件
}

waitInterface::~waitInterface()
{
    delete ui;
}
void waitInterface::mousePressEvent(QMouseEvent* event)
{
      emit openLoginPage();

//        qDebug()<<"OK";


}
bool waitInterface::eventFilter(QObject * /*watched*/, QEvent * event)
{
    if(event->type()==QEvent::MouseButtonPress)
    {
        emit openLoginPage();
//        qDebug()<<"OK1";
    }
}

