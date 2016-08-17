#include "relationaltablemodel.h"
#include "ui_relationaltablemodel.h"
#include <QSqlRelationalDelegate>


relationalTableModel::relationalTableModel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::relationalTableModel)
{
    ui->setupUi(this);
    model = new QSqlRelationalTableModel(this);
    //属性变化时写入数据库

    model->setEditStrategy(QSqlTableModel::OnFieldChange);
    model->setTable("student");
    //将student表的第三个属性设为course表的id属性的外键，
    //并将其显示为course表的name属性的值
    model->setRelation(2,QSqlRelation("course","id","name"));
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Course"));
    model->select();
    ui->tableView->setModel(model);
    ui->tableView->setItemDelegate(
                    new QSqlRelationalDelegate(ui->tableView));


}

relationalTableModel::~relationalTableModel()
{
    delete ui;
}
