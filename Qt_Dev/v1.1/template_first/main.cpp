#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "waitinterface.h"
#include "logininterface.h"

int main(int argc, char *argv[])
{
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QTextCodec::setCodecForLocale(codec);

    QApplication a(argc, argv);
    MainWindow w;

//    waitInterface w;
 //   LoginInterface w;
  //  w.show();

    return a.exec();
}
