/********************************************************************************
** Form generated from reading UI file 'viewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWWINDOW_H
#define UI_VIEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewWindow
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ViewWindow)
    {
        if (ViewWindow->objectName().isEmpty())
            ViewWindow->setObjectName(QStringLiteral("ViewWindow"));
        ViewWindow->resize(400, 300);
        menuBar = new QMenuBar(ViewWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        ViewWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ViewWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ViewWindow->addToolBar(mainToolBar);
        centralWidget = new QWidget(ViewWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ViewWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ViewWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ViewWindow->setStatusBar(statusBar);

        retranslateUi(ViewWindow);

        QMetaObject::connectSlotsByName(ViewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ViewWindow)
    {
        ViewWindow->setWindowTitle(QApplication::translate("ViewWindow", "ViewWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewWindow: public Ui_ViewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWWINDOW_H
