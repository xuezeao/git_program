#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mysqlquerymodel.h"
#include <QSqlTableModel>
#include <QSqlRelation>
#include <QDebug>
#include <QModelIndex>
#include <QTimer>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    model = new QSqlTableModel(this);
    timer = new QTimer(this);

    ui->setupUi(this);

    getSheetAddShow();

    connect(timer,SIGNAL(timeout()),this,SLOT(auto_AddRow()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_newRow_clicked()
{
     int rowNum = model->rowCount(); //获得表的行数
     model->insertRow(rowNum); //添加一行
     model->setData(model->index(rowNum,0),rowNum+1);
//     model->setData(model->index(rowNum,0),id);
//    id++;
     //model->submitAll(); //可以直接提交


}

void MainWindow::auto_AddRow()//自增行数
{

    int rowNum = model->rowCount();//获得表的行数
//    QModelIndex namevalue = model->index(rowNum,3);
//    QModelIndex namePreviousValue = model->index(rowNum-1,1);

//    qDebug()<< namevalue.data();

    QSqlQuery query;
//    int id = rowNum;
    query.exec(QString("select * from placeDurg where id =%1")//从id=rownum中选中所有属性 '*' /也可指定 'name'
               .arg(rowNum));//选中表格中最后一行并执行操作exec，没有经过exec的都是没有执行

    query.next();//指向下一行表格

    QString nameNowValue = query.value(1).toString();//名字
    QString modelNowValue = query.value(2).toString();//规格
    int mlNowValue = query.value(3).toInt();//容量

    if(nameNowValue >="A"&&mlNowValue>=1&&modelNowValue>="A")//只有当名字、规格和容量都输入之后才会自动加一行
     {
        qDebug() << "OK";
        model->insertRow(rowNum); //添加一行
        model->setData(model->index(rowNum,0),rowNum+1);//id 已经设为关键字段，自增一行
    }
    else
        qDebug()<< "NO" ;



}
void MainWindow::getSheetAddShow()
{


//    int rowNum = model->rowCount(); //获得表的行数

    model->setTable("placeDurg");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);//写完一行保存
    model->select(); //选取整个表的所有行
    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
    // model->removeColumn(1);
    ui->tableView_showEnter->setModel(model);
    //使其不可编辑
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);




}
