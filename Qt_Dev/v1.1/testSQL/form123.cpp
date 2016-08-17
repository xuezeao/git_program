#include "form123.h"
#include "ui_form123.h"
#include <QSqlTableModel>
#include <QStandardItemModel>
#include <QTableView>
#include <QHeaderView>
#include <QPushButton>
#include <QApplication>
#include "test.h"

Form123::Form123(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form123)
{
    ui->setupUi(this);
    model=new QStandardItemModel(4,2);//构建一个4*2的表格

    ui->tableView->setModel(model);
//    QStandardItemModel model(4, 2);
//    QTableView tableView;

    ui->tableView->setItemDelegate(new test);/*
    test delegate;
    tableView.setItemDelegate(&delegate);*/
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
//    tableView.horizontalHeader()->setStretchLastSection(true);
//    tableView.show();
//    model = new QSqlTableModel(this);

//    model->setTable("placeDurg");
//    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
//    model->select();
//    ui->tableView_showSearch->setModel(model);
//    ui->tableView->setItemDelegate(new test);
//    ui->tableView->horizontalHeader()->setStretchLastSection(true);


//    for (int row = 0; row < 4; ++row) {
//        for (int column = 0; column < 2; ++column) {
//            QModelIndex index = model->index(row, column, QModelIndex());
//            model->setData(index, QVariant((row + 1) * (column + 1)));
//        }
//    }

}

Form123::~Form123()
{
    delete ui;
}
//void Form123::mousePressEvent(QMouseEvent *event)
//{
//  emit movesignal();
//}
