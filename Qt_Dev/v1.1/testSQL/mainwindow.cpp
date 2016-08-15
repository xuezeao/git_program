#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QSqlTableModel>
#include <QSqlRelation>
#include <QDebug>
#include <QModelIndex>
#include <QTimer>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    popupwindow = new popupPage(this);
    model = new QSqlRelationalTableModel(this);
    timer = new QTimer(this);
//    popupPage = new popupWindow(this);
    ui->setupUi(this);


    getSheetAddShow();
    connect(timer,SIGNAL(timeout()),this,SLOT(auto_AddRow()));
    connect(popupwindow,SIGNAL(backplacepage()),this,SLOT(returnBack()));
    timer->start(1000);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::on_pushButton_newRow_clicked()
//{
//     int rowNum = model->rowCount(); //获得表的行数
//     model->insertRow(rowNum); //添加一行
//     model->setData(model->index(rowNum,0),rowNum+1);
//     model->setData(model->index(rowNum,0),id);
//    id++;
//     //model->submitAll(); //可以直接提交


//}

void MainWindow::auto_AddRow()//自增行数
{
    QDateTime locationTime = QDateTime::currentDateTime();//获取当日日期
    QString str = locationTime.toString("yyyy.MM.dd");//设置日期格式

    int rowNum = model->rowCount();//获得表的行数
//    QModelIndex namevalue = model->index(rowNum,3);
//    QModelIndex namePreviousValue = model->index(rowNum-1,1);

//    qDebug()<< namevalue.data();

    QSqlQuery query;
//    int id = rowNum;
    query.exec(QString("select * from placeDurg where rowid")//从id=rownum中选中所有属性 '*' /也可指定 'name'
               );//选中表格中最后一行并执行操作exec，没有经过exec的都是没有执行

    query.last();//指向下一行表格

    QString nameNowValue = query.value(1).toString();//名字
    QString modelNowValue = query.value(5).toString();//规格
    int mlNowValue = query.value(3).toInt();//容量

    qDebug()<<nameNowValue<<"  "<<modelNowValue<<"   "<<mlNowValue;

//    int curRow = ui->tableView_showEnter->currentIndex().row();
//     qDebug()<<curRow;
    if(nameNowValue >="A"&&mlNowValue>=1&&modelNowValue>="1")//只有当名字、规格和容量都输入之后才会自动加一行
     {
        qDebug() << "OK";
        model->insertRow(rowNum); //添加一行
        model->setData(model->index(rowNum,6),str);//id 已经设为关键字段，自增一行
        model->setData(model->index(rowNum,7),"未放");//id 已经设为关键字段，自增一行
//         model->submitAll();
    }
    else
   {     qDebug()<< "NO" ;
//        model->submitAll();
}


}
void MainWindow::getSheetAddShow()
{


//    int rowNum = model->rowCount(); //获得表的行数

    model->setTable("placeDurg");
    model->setEditStrategy(QSqlTableModel::OnFieldChange);//自保持模式
    model->select(); //选取整个表的所有行
    //不显示name属性列,如果这时添加记录，则该属性的值添加不上
     model->removeColumn(2);
    ui->tableView_showEnter->setModel(model);
    //使其不可编辑
    //ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);




}

void MainWindow::on_pushButton_del_clicked()
{
    //获取选中的行
//       QSqlQuery query;
//    model->setTable("placeDurg");
//     model->removeColumn(1);
      model->setEditStrategy(QSqlTableModel::OnManualSubmit);//进入不提交不保存模式
      timer->stop();

//     model->select(); //选取整个表的所有行
       int curRow = ui->tableView_showEnter->currentIndex().row();
//        qDebug()<<curRow;
       //删除该行
        model->removeRow(curRow);

       int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定"
                                                    "删除当前行吗？"),
                                     QMessageBox::Yes,QMessageBox::No);
       if(ok == QMessageBox::No)
       {
          model->revertAll(); //如果不删除，则撤销

       }
       else{
          model->submitAll(); //否则提交，在数据库中删除该行
//           query.exec(QString("delete from placeDurg where rowid =%1").arg(curRow));

       }
          model->setEditStrategy(QSqlTableModel::OnFieldChange);//恢复原来自保持模式
          timer->start(1000);
}



void MainWindow::on_pushButton_placeChest_clicked()
{
    this->close();
    popupwindow->show();
    timer->stop();
}
void MainWindow::returnBack()
{
    popupwindow->close();
    this->show();
    model->setTable("placeDurg");
    model->removeColumn(1);
    model->select();
    timer->start();
}
