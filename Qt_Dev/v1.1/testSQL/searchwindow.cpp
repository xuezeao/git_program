#include "searchwindow.h"
#include "ui_searchwindow.h"
#include <QSqlRecord>
#include <QDebug>
#include <QSqlTableModel>
#include <QSqlQuery>
searchWindow::searchWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchWindow)
{
    ui->setupUi(this);
    model = new QSqlTableModel(this);

    model->setTable("placeDurg");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView_showSearch->setModel(model);
    ui->tableView_showSearch->setEditTriggers(QAbstractItemView::NoEditTriggers);//窗口不可编辑


    applyNews = new QSqlTableModel(this);//关联数据库，设置为自动保存，窗口不可编辑
    applyNews->setTable("choiceReagent");
    applyNews->setEditStrategy(QSqlTableModel::OnManualSubmit);
    applyNews->select();
    ui->tableView_showNeedReagent->setModel(applyNews);
    ui->tableView_showNeedReagent->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

searchWindow::~searchWindow()
{
    delete ui;
}


void searchWindow::on_pushButton_searchNews_clicked()
{
    QString reagentName = ui->lineEdit_search->text();//获取搜索框内容
    model->setFilter(QString("试剂名称 = '%1'").arg(reagentName));//筛选结果
    model->select();//显示

}

void searchWindow::on_pushButton_addChoiceReagent_clicked()
{
     int curRow = ui->tableView_showSearch->currentIndex().row();
     QSqlRecord record = model->record(curRow);//获取指定行的记录
    qDebug()<<record;
    QSqlQuery query;
    query.exec(QString("insert into choiceReagent select * from placeDurg where rowid='%1'").arg(curRow+1));//将A表向b添加选中记录
//    query.next();
//    QSqlRecord record1 = applyNews->record(1);
//    qDebug()<<"12312312"<<record1;
//    QSqlRecord record21 = applyNews->record(0);
//    qDebug()<<"12312312"<<record21;
    applyNews->setTable("choiceReagent");
    applyNews->select();

   //  int getRowNum = applyNews->rowCount();//获得行数
 //    applyNews->insertRow(getRowNum);
//     applyNews->setData(applyNews->index(getRowNum),record);

}

