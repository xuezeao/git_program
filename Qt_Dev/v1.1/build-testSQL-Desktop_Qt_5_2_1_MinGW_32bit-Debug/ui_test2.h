/********************************************************************************
** Form generated from reading UI file 'test2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST2_H
#define UI_TEST2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test2
{
public:
    QTableView *tableView;

    void setupUi(QWidget *test2)
    {
        if (test2->objectName().isEmpty())
            test2->setObjectName(QStringLiteral("test2"));
        test2->resize(776, 547);
        tableView = new QTableView(test2);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(95, 150, 611, 291));

        retranslateUi(test2);

        QMetaObject::connectSlotsByName(test2);
    } // setupUi

    void retranslateUi(QWidget *test2)
    {
        test2->setWindowTitle(QApplication::translate("test2", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class test2: public Ui_test2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_H
