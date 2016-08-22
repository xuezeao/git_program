#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include "searchwindow.h"
#include "mouseeventtest.h"
#include "test.h"
#include <QHeaderView>
#include <QStandardItemModel>
#include <QTableView>
#include "form123.h"
#include "autocompelete.h"
#include <QPushButton>
#include "mainui.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
        return 1;
//   MainWindow w;
//   searchWindow w;
    MainUI w;
    // mouseEventTest w;
//autocompelete w;
//    Form123 w;
    w.show();
    return a.exec();


//    QStandardItemModel model(4, 2);
//    QTableView tableView;
//    tableView.setModel(&model);

//    test delegate;
//    tableView.setItemDelegate(&delegate);
////! [0]

//    tableView.horizontalHeader()->setStretchLastSection(true);

////! [1]
//    for (int row = 0; row < 4; ++row) {
//        for (int column = 0; column < 2; ++column) {
//            QModelIndex index = model.index(row, column, QModelIndex());
//            model.setData(index, QVariant((row + 1) * (column + 1)));
//        }
////! [1] //! [2]
//    }
////! [2]

////! [3]
//    tableView.setWindowTitle(QObject::tr("Spin Box Delegate"));
////    QPushButton * viewButton = new QPushButton("View");
////    tableView.setIndexWidget(model.index(0,1),viewButton);
//    tableView.show();

/**********************************************/
//        QStandardItemModel model(4, 2);
//        QTableView tableView;
//        tableView.setModel(&model);

//        test delegate;
//        tableView.setItemDelegate(&delegate);

//        tableView.horizontalHeader()->setStretchLastSection(true);
//        tableView.show();


//      QApplication a(argc, argv);

//         VIPModel *model = new  VIPModel(5, 5);
//        QTableView *tableView = new QTableView;

//        //把表格的背景调成黄蓝相间
//        //这种方法是在网上看到的，用起来还真方便啊
//        tableView->setAlternatingRowColors(true);
//        tableView->setStyleSheet("QTableView{background-color: rgb(250, 250, 115);"
//            "alternate-background-color: rgb(141, 163, 215);}");

//        tableView->setWindowTitle("VIP List");
//        tableView->resize(700, 400);
//        tableView->setModel(model);
//        QStringList headerList;
//        headerList << "No." << "ID" << "Name" << "Age" << "Sex" << "Show";
//        model->setHorizontalHeaderLabels(headerList);
//        tableView->verticalHeader()->setVisible(false);
//        tableView->horizontalHeader()->setStretchLastSection(true);

//        //为每一列加载委托
//        ReadOnlyDelegate readOnlyDelegate;
//        tableView->setItemDelegateForColumn(0, &readOnlyDelegate);
//        UserIDDelegate userIDDelegate;
//        tableView->setItemDelegateForColumn(1, &userIDDelegate);
//        AgeDelegate spinBoxDelegate;
//        tableView->setItemDelegateForColumn(3, &spinBoxDelegate);
//        SexDelegate comboBoxDelegate;
//        tableView->setItemDelegateForColumn(4, &comboBoxDelegate);
//        IconDelegate iconDelegate;
//        tableView->setItemDelegateForColumn(5, &iconDelegate);

//        for(int i=0; i<10; i++)
//        {
//            QModelIndex index = model->index(1, 0, QModelIndex());
//            model->setData(index, 1);
//        }

//        tableView->show();


}
