#include "mainwindow.h"
#include <QApplication>
#include "signin.h"
#include "connection.h"
#include "placereagent.h"
#include <QTextCodec>
#include "relationaltablemodel.h"

int main(int argc, char *argv[])
{

    QApplication a(argc,argv);



    if(!createConnection())
        return 1;
//    placeReagent w;
    //MainWindow w;
  relationalTableModel w;
    w.show();
    return a.exec();
//    QApplication a(argc, argv);

//    MainWindow w;
//    signIn enterMain;



//    if(enterMain.exec()==QDialog::Accepted)
//    {
//        w.show();
//        return a.exec();

//    }else{

//        return 0;
//    }


}
