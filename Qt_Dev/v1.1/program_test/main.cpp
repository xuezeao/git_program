#include "mainwindow.h"
#include <QApplication>
#include "signin.h"
int main(int argc, char *argv[])
{



    QApplication a(argc, argv);

    MainWindow w;
    signIn enterMain;

    if(enterMain.exec()==QDialog::Accepted)
    {
        w.show();
        return a.exec();

    }else{

        return 0;
    }


}
