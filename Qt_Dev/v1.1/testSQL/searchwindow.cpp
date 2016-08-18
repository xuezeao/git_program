#include "searchwindow.h"
#include "ui_searchwindow.h"
#include <QSqlRecord>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QMouseEvent>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QPushButton>

searchWindow::searchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchWindow)
{
    ui->setupUi(this);
      teapage = new test(this);
    model = new QSqlTableModel(this);

    model->setTable("placeDurg");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView_showSearch->setModel(model);
    ui->tableView_showSearch->setEditTriggers(QAbstractItemView::NoEditTriggers);//窗口不可编辑
    ui->tableView_showSearch->viewport()->installEventFilter(this);//设置窗口鼠标事件

  ui->tableView_showSearch->horizontalHeader()->setStretchLastSection(true);
  ui-> tableView_showSearch->setItemDelegateForColumn(0, new test);

    applyNews = new QSqlTableModel(this);//关联数据库，设置为自动保存，窗口不可编辑
    applyNews->setTable("choiceReagent");
    applyNews->setEditStrategy(QSqlTableModel::OnManualSubmit);
    applyNews->select();
//    QComboBox *comBox = new QComboBox();
//    comBox->addItem("F");
//    comBox->addItem("M");
//    ui->tableView_showSearch->setIndexWidget(model->index(0,0),comBox);
    //可实现在表中显示部分按钮
//    QPushButton *pushbutton = new QPushButton();
//    ui->tableView_showSearch->setIndexWidget(model->index(0,0),pushbutton);
//    ui->tableView_showNeedReagent->setModel(applyNews);
    ui->tableView_showNeedReagent->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableView_showSearch->viewport()->installEventFilter(this);//设置窗口鼠标事件

//    connect(teapage,SIGNAL(send()),this,SLOT(testslot()));
}

void searchWindow::testslot()
{
    qDebug()<<"sended";
}

searchWindow::~searchWindow()
{
    delete ui;
}


void searchWindow::on_pushButton_searchNews_clicked()
{
    QString reagentName = ui->lineEdit_search->text();//获取搜索框内容
    reagentName="*";
    QSqlQueryModel *model1 = new QSqlQueryModel(ui->tableView_showSearch);

    model->setFilter(QString("试剂名称 = '*%1'").arg(reagentName));//筛选结果

    model->select();//显示

    // QSqlQuery query;
   // query.exec(QString("select * from placeDurg where 试剂名称 like '%'%1'%'").arg(reagentName));//将A表向b添加选中记录

}

void searchWindow::addNewsToApplySheet()//将选定信息添加到执行框
{
     int curRow = ui->tableView_showSearch->currentIndex().row();
     qDebug()<<"*********************"<<curRow;
     QSqlRecord record = model->record(curRow);//获取指定行的记录
    qDebug()<<record;
    QSqlQuery query;
    query.exec(QString("insert into choiceReagent select * from placeDurg where rowid='%1'").arg(curRow+1));//将A表向b添加选中记录
  //  query.next();   //作用同上面这句函数效果一致
//    QSqlRecord record1 = applyNews->record(1);
//    qDebug()<<"12312312"<<record1;
//    QSqlRecord record21 = applyNews->record(0);
//    qDebug()<<"12312312"<<record21;
    applyNews->setTable("choiceReagent");

    applyNews->select();
    ui->tableView_showNeedReagent->setModel(applyNews);

   //  int getRowNum = applyNews->rowCount();//获得行数
 //    applyNews->insertRow(getRowNum);
//     applyNews->setData(applyNews->index(getRowNum),record);

}


void searchWindow::on_pushButton_delThisNews_clicked()

{
    //获取选中的行
    int curRow = ui->tableView_showNeedReagent->currentIndex().row();

    //删除该行
    applyNews->removeRow(curRow);
//    qDebug()<<"--------------------------"<<curRow;
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定"
                                                       "删除当前行吗？"),
                                  QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
        applyNews->revertAll(); //如果不删除，则撤销
    }
    else applyNews->submitAll(); //否则提交，在数据库中删除该行

}
bool searchWindow::eventFilter(QObject * watched, QEvent * event)
{
  if(event->type() == QEvent::MouseButtonDblClick)
   {


            addNewsToApplySheet();
            qDebug()<<"a";

////            on_pushButton_delThisNews_clicked();
////            qDebug()<<"111111111111111111111111111111";
   }


}
