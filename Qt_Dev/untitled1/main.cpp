#include "mainwindow.h"
#include <QApplication>
#include <QFrame>
#include <QPixmap>
#include <QBitmap>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;


   w.show();
//    QFrame *frame = new QFrame;
//    frame->resize(600,490);
//    QPixmap pixmap("background.png");
//    QPalette palette;
//    palette.setBrush(frame->backgroundRole(),QBrush(pixmap));
//    frame->setPalette(palette);
//    frame->setMask(pixmap.mask());
//    frame->setAutoFillBackground(true);
//    frame->show();

    return a.exec();
}
