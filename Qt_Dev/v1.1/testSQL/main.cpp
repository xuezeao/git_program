#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include "searchwindow.h"
#include "mouseeventtest.h"
#include "test.h"
#include <QHeaderView>
#include <QStandardItemModel>
#include <QTableView>


#include <QPushButton>
#include "mainui.h"
#include <QDebug>
#include <QCoreApplication>

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

//    QDomDocument doc;//新建对象
//    QFile file("my.xml");//建立指向  文件的对象
//    if(!file.open(QIODevice::ReadOnly))return 0;//只读
//    if(!doc.setContent(&file))//读取到doc中
//    {
//        file.close();
//        return 0;
//    }
//    file.close();
//    QDomNode firstNode = doc.firstChild();//获取一个doc节点，即XML说明
//    qDebug()<<qPrintable(firstNode.nodeName())
//           <<qPrintable(firstNode.nodeValue());


//    QDomElement docElem = doc.documentElement();//返回根元素
//    QDomNode n= docElem.firstChild();//返回根节点的第一个子节点

//    //如果节点不为空
//    while(!n.isNull())
//    {
//        if (n.isElement())  //如果节点是元素
//        {
//            QDomElement e = n.toElement();
//            qDebug() << qPrintable(e.tagName())
//                     << qPrintable(e.attribute("id"));
//            // 获得元素e的所有子节点的列表
//            QDomNodeList list = e.childNodes();
//            // 遍历该列表
//            for(int i=0; i<list.count(); i++)
//            {
//                QDomNode node = list.at(i);
//                if(node.isElement())
//                    qDebug() << "   " << qPrintable(node.toElement().tagName())
//                                     <<qPrintable(node.toElement().text());
//            }
//        }

//        n = n.nextSibling();
//    }






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
