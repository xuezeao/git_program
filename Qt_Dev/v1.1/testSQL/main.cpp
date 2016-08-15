#include "mainwindow.h"
#include <QApplication>
#include "connection.h"
#include "searchwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if(!createConnection())
        return 1;
//    MainWindow w;
    searchWindow w;
    w.show();

    return a.exec();
}
