#include "reagentplace.h"
#include "ui_reagentplace.h"
#include <QtSql/QSqlRelationalTableModel>
#include <QDebug>
#include <QModelIndex>
#include <QMessageBox>
#include <QtSql/QSqlRelation>
#include <QDateTime>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRelationalDelegate>
reagentPlace::reagentPlace(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::reagentPlace)
{
    ui->setupUi(this);
    placeOperatePage = new Dialog_placeoperatepage;
    model = new QSqlRelationalTableModel(this);
    timer = new QTimer(this);

    getSheetAddShow();

    connect(timer,SIGNAL(timeout()),this,SLOT(auto_AddRow()));//自增
    connect(placeOperatePage,SIGNAL(closePlaceOperatePageBackPlaceEditPage()),this,SLOT(openPlacePage()));


    timer->start(1000);
}

reagentPlace::~reagentPlace()
{
    delete ui;
}
/**********************功能区*****************************************/
void reagentPlace::auto_AddRow()
{
    QDateTime locationTime = QDateTime::currentDateTime();//获取当日日期
    QString str = locationTime.toString("yyyy.MM.dd");//设置日期格式

    int rowNum = model->rowCount();//获得表的行数
    QSqlQuery query;
    query.exec(QString("select * from placeDurg where rowid")//从id=rownum中选中所有属性 '*' /也可指定 'name'
               );//选中表格中最后一行并执行操作exec，没有经过exec的都是没有执行

    query.next();//指向最后表格

    QString nameNowValue = query.value(1).toString();//名字
    QString modelNowValue = query.value(5).toString();//规格
    int mlNowValue = query.value(3).toInt();//容量
    qDebug()<<nameNowValue<<"  "<<modelNowValue<<"   "<<mlNowValue;

    if(nameNowValue >="A"&&mlNowValue>=1&&modelNowValue>="1")//只有当名字、规格和容量都输入之后才会自动加一行
     {
        qDebug() << "OK";
        model->insertRow(rowNum); //添加一行
        model->setData(model->index(rowNum,6),str);//id 已经设为关键字段，自增一行
        model->setData(model->index(rowNum,7),"未放");//id 已经设为关键字段，自增一行

    }
    else
    {
        qDebug()<< "NO" ;
    }

}

void reagentPlace::getSheetAddShow()
{

    model->setEditStrategy(QSqlTableModel::OnFieldChange);//自保持模式
    model->setTable("placeDurg");
    model->setRelation(4,QSqlRelation("reagentType","id","id"));
    model->setRelation(5,QSqlRelation("reagentModel","id","id"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("试剂规格"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("容量 ml"));
    model->removeColumn(2);
    model->select();
    ui->tableView_operateWindow->setModel(model);
    ui->tableView_operateWindow->setItemDelegate(new QSqlRelationalDelegate(ui->tableView_operateWindow));
}


/************************窗口切换*****************************************/
void reagentPlace::on_commandLinkButton_fromPlaceToChoicePage_clicked()
{
    emit closePlacePageOpenChoice();
}

void reagentPlace::openPlacePage()
{
    placeOperatePage->close();
    this->show();
    model->setTable("placeDurg");
    model->removeColumn(1);
    model->select();
    timer->start();
}



void reagentPlace::on_pushButton_sureOperate_clicked()
{
//    this->close();
    placeOperatePage->show();
}

void reagentPlace::on_pushButton_deletReagentPlace_clicked()//点击删除
{
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);//进入不提交不保存模式
    timer->stop();
    int curRow = ui->tableView_operateWindow->currentIndex().row();
    model->removeRow(curRow);
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定删除当前行吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No)
    {
      model->revertAll(); //如果不删除，则撤销
    }
    else{
      model->submitAll(); //否则提交，在数据库中删除该行
    }
      model->setEditStrategy(QSqlTableModel::OnFieldChange);//恢复原来自保持模式
      timer->start();
}


