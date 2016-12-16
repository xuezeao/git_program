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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_test2
{
public:
    QListView *listView;
    QPushButton *pushButton;

    void setupUi(QDialog *test2)
    {
        if (test2->objectName().isEmpty())
            test2->setObjectName(QStringLiteral("test2"));
        test2->resize(400, 300);
        listView = new QListView(test2);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(200, 90, 256, 192));
        pushButton = new QPushButton(test2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(40, 70, 75, 23));

        retranslateUi(test2);

        QMetaObject::connectSlotsByName(test2);
    } // setupUi

    void retranslateUi(QDialog *test2)
    {
        test2->setWindowTitle(QApplication::translate("test2", "Dialog", 0));
        pushButton->setText(QApplication::translate("test2", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class test2: public Ui_test2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST2_H
