#include "placereagent.h"
#include "ui_placereagent.h"
#include <QSqlQuery>
#include <QDebug>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QTableView>
#include <QMessageBox>
#include "mysqlquerymodel.h"

placeReagent::placeReagent(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::placeReagent)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);
    model->setTable("student");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select(); //选取整个表的所有行
    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    // model->removeColumn(1);
    ui->tableView->setModel(model);
    //使其不可编辑
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

placeReagent::~placeReagent()
{
    delete ui;
}

void placeReagent::on_pushButton_inquire_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("select * from student");
    model->setHeaderData(0, Qt::Horizontal, tr("id"));
    model->setHeaderData(1, Qt::Horizontal, tr("name"));
    QTableView *view = new QTableView;
    view->setModel(model);
    view->show();

//创建自己模型的对象
    mysqlquerymodel *myModel = new mysqlquerymodel;
    myModel->setQuery("select * from student");
    myModel->setHeaderData(0, Qt::Horizontal, tr("id"));
    myModel->setHeaderData(1, Qt::Horizontal, tr("name"));
    QTableView *view1 = new QTableView;
    view1->setWindowTitle("mySqlQueryModel"); //修改窗口标题
    view1->setModel(myModel);
    view1->show();
}

void placeReagent::on_pushButton_pushChange_clicked()
{
    model->database().transaction(); //开始事务操作
        if (model->submitAll()) {
           model->database().commit(); //提交
        } else {
           model->database().rollback(); //回滚
           QMessageBox::warning(this, tr("tableModel"),
                                 tr("数据库错误: %1")
                                 .arg(model->lastError().text()));
        }
}

void placeReagent::on_pushButton_returnOption_clicked()
{
    model->revertAll();
}

void placeReagent::on_pushButton_showAllSheet_clicked()
{
    model->setTable("sudent");
    model->select();
}

void placeReagent::on_pushButton_upOrder_clicked()
{
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}

void placeReagent::on_pushButton_downOrder_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}

void placeReagent::on_pushButton_delCheckedRow_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行！"),tr("你确定删除当前行"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        model->revertAll();
    }
    else model->submitAll();
}

void placeReagent::on_pushButton_addOption_clicked()
{
      int rowNum = model->rowCount(); //获得表的行数
       int id = 10;
       model->insertRow(rowNum); //添加一行
       model->setData(model->index(rowNum,0),id);
       //model->submitAll(); //可以直接提交
}
