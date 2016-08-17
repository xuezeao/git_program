#include "mouseeventtest.h"
#include "ui_mouseeventtest.h"
#include <QMouseEvent>
#include <QDebug>
#include <QSqlTableModel>
#include <QCheckBox>
#include <QTableView>
#include <QDebug>

mouseEventTest::mouseEventTest(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mouseEventTest)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);

    model->setTable("placeDurg");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);//窗口不可编辑
//    QTableView* itsView = new QTableView;
//    itsView->viewport()->installEventFilter(this);
    ui->tableView->viewport()->installEventFilter(this);


}

mouseEventTest::~mouseEventTest()
{
    delete ui;
}

void mouseEventTest::mouseDoubleClickEvent(QMouseEvent *event)
{
    qDebug("sss");

}
bool mouseEventTest::eventFilter(QObject * watched, QEvent * event)
{
  if(event->type() == QEvent::MouseButtonDblClick)
 { //  mouseDoubleClickEvent();

      printf("MouseButtonPress event!\n");
  qDebug()<<"a";}
  else if(event->type() == QEvent::KeyPress)
  {  printf("KeyPress event!\n");
  qDebug()<<"b";}
}
