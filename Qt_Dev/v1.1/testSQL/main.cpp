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
#include <QPushButton>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
        return 1;
 //   MainWindow w;
 //  searchWindow w;
   // mouseEventTest w;

    Form123 w;
    w.show();


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

    return a.exec();
}
