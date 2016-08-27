/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableView *tableView_showEnter;
    QLabel *label;
    QCommandLinkButton *commandLinkButton;
    QLineEdit *lineEdit;
    QTableView *tableView_searchWin;
    QPushButton *pushButton;
    QFrame *frame;
    QPushButton *pushButton_del;
    QPushButton *pushButton_placeChest;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(982, 615);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView_showEnter = new QTableView(centralWidget);
        tableView_showEnter->setObjectName(QStringLiteral("tableView_showEnter"));
        tableView_showEnter->setGeometry(QRect(10, 70, 861, 231));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 0, 61, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(0, 30, 81, 41));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 310, 381, 41));
        tableView_searchWin = new QTableView(centralWidget);
        tableView_searchWin->setObjectName(QStringLiteral("tableView_searchWin"));
        tableView_searchWin->setGeometry(QRect(10, 360, 861, 231));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 310, 81, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(24);
        pushButton->setFont(font1);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(-20, 0, 1011, 621));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/image/background1.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton_del = new QPushButton(frame);
        pushButton_del->setObjectName(QStringLiteral("pushButton_del"));
        pushButton_del->setGeometry(QRect(920, 250, 75, 23));
        pushButton_placeChest = new QPushButton(frame);
        pushButton_placeChest->setObjectName(QStringLiteral("pushButton_placeChest"));
        pushButton_placeChest->setGeometry(QRect(920, 130, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        frame->raise();
        tableView_showEnter->raise();
        label->raise();
        commandLinkButton->raise();
        lineEdit->raise();
        tableView_searchWin->raise();
        pushButton->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\345\205\245\346\237\234", 0));
        commandLinkButton->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        pushButton_del->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244", 0));
        pushButton_placeChest->setText(QApplication::translate("MainWindow", "\345\205\245\346\237\234", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
