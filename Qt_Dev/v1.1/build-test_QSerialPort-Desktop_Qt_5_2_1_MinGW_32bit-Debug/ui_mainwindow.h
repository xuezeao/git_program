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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *openBtn;
    QPushButton *sendBtn;
    QPushButton *readBtn;
    QPushButton *SetDrawerClockBtn;
    QPushButton *getDrawerClock;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        openBtn = new QPushButton(centralWidget);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setGeometry(QRect(80, 40, 80, 23));
        sendBtn = new QPushButton(centralWidget);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(80, 80, 80, 23));
        readBtn = new QPushButton(centralWidget);
        readBtn->setObjectName(QStringLiteral("readBtn"));
        readBtn->setGeometry(QRect(80, 120, 80, 23));
        SetDrawerClockBtn = new QPushButton(centralWidget);
        SetDrawerClockBtn->setObjectName(QStringLiteral("SetDrawerClockBtn"));
        SetDrawerClockBtn->setGeometry(QRect(80, 170, 111, 23));
        getDrawerClock = new QPushButton(centralWidget);
        getDrawerClock->setObjectName(QStringLiteral("getDrawerClock"));
        getDrawerClock->setGeometry(QRect(220, 40, 121, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        openBtn->setText(QApplication::translate("MainWindow", "open", 0));
        sendBtn->setText(QApplication::translate("MainWindow", "send", 0));
        readBtn->setText(QApplication::translate("MainWindow", "read", 0));
        SetDrawerClockBtn->setText(QApplication::translate("MainWindow", "SetDrawerClock", 0));
        getDrawerClock->setText(QApplication::translate("MainWindow", "getDrawerClock", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
