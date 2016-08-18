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
    test1();
//    model=new QStandardItemModel(4,2);//构建一个4*2的表格

//    ui->tableView->setModel(model);
////    QStandardItemModel model(4, 2);
////    QTableView tableView;

//    ui->tableView->setItemDelegate(new test);/*
//    test delegate;
//    tableView.setItemDelegate(&delegate);*/
//    ui->tableView->horizontalHeader()->setStretchLastSection(true);
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
void Form123::test1()
{
//        model=new QStandardItemModel(5, 5);//构建一个4*2的表格

//     //  VIPModel *model = new  VIPModel(5, 5);
//   //   QTableView *tableView = new QTableView;

////      //把表格的背景调成黄蓝相间
////      //这种方法是在网上看到的，用起来还真方便啊
////      tableView->setAlternatingRowColors(true);
////      tableView->setStyleSheet("QTableView{background-color: rgb(250, 250, 115);"
////          "alternate-background-color: rgb(141, 163, 215);}");

////      tableView->setWindowTitle("VIP List");
////      tableView->resize(700, 400);
//        ui->tableView->setModel(model);
////      tableView->setModel(model);
//      QStringList headerList;
//      headerList << "No." << "ID" << "Name" << "Age" << "Sex" << "Show";
//      model->setHorizontalHeaderLabels(headerList);
////      tableView->verticalHeader()->setVisible(false);
////      tableView->horizontalHeader()->setStretchLastSection(true);
//    ui->tableView->verticalHeader()->setVisible(false);
//    ui->tableView->horizontalHeader()->setStretchLastSection(true);
//      //为每一列加载委托
////      ReadOnlyDelegate readOnlyDelegate;
//     ui->tableView->setItemDelegateForColumn(0, new ReadOnlyDelegate);
////      UserIDDelegate userIDDelegate;
//      ui->tableView->setItemDelegateForColumn(1, new UserIDDelegate);
////      AgeDelegate spinBoxDelegate;
//     ui-> tableView->setItemDelegateForColumn(3, new AgeDelegate);
// //     SexDelegate comboBoxDelegate;
//     ui-> tableView->setItemDelegateForColumn(4, new SexDelegate);
////      IconDelegate iconDelegate;
//     ui-> tableView->setItemDelegateForColumn(5, new addpushbotton);

//      for(int i=0; i<10; i++)
//      {
//          QModelIndex index = model->index(i, 0, QModelIndex());
//          model->setData(index, i);
//      }

////      tableView->show();

}

Form123::~Form123()
{
    delete ui;
}
//void Form123::mousePressEvent(QMouseEvent *event)
//{
//  emit movesignal();
//}
