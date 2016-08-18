/********************************************************************************
** Form generated from reading UI file 'mouseeventtest.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOUSEEVENTTEST_H
#define UI_MOUSEEVENTTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_mouseEventTest
{
public:
    QTableView *tableView;

    void setupUi(QDialog *mouseEventTest)
    {
        if (mouseEventTest->objectName().isEmpty())
            mouseEventTest->setObjectName(QStringLiteral("mouseEventTest"));
        mouseEventTest->resize(400, 300);
        tableView = new QTableView(mouseEventTest);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 40, 256, 192));

        retranslateUi(mouseEventTest);

        QMetaObject::connectSlotsByName(mouseEventTest);
    } // setupUi

    void retranslateUi(QDialog *mouseEventTest)
    {
        mouseEventTest->setWindowTitle(QApplication::translate("mouseEventTest", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class mouseEventTest: public Ui_mouseEventTest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOUSEEVENTTEST_H
