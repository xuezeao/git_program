/********************************************************************************
** Form generated from reading UI file 'get_invalid_control.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GET_INVALID_CONTROL_H
#define UI_GET_INVALID_CONTROL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_get_invalid_control
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;

    void setupUi(QWidget *get_invalid_control)
    {
        if (get_invalid_control->objectName().isEmpty())
            get_invalid_control->setObjectName(QStringLiteral("get_invalid_control"));
        get_invalid_control->resize(691, 429);
        pushButton = new QPushButton(get_invalid_control);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(460, 370, 75, 23));
        pushButton_2 = new QPushButton(get_invalid_control);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 370, 75, 23));
        pushButton_3 = new QPushButton(get_invalid_control);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(140, 370, 75, 23));
        tableView = new QTableView(get_invalid_control);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 20, 611, 331));

        retranslateUi(get_invalid_control);

        QMetaObject::connectSlotsByName(get_invalid_control);
    } // setupUi

    void retranslateUi(QWidget *get_invalid_control)
    {
        get_invalid_control->setWindowTitle(QApplication::translate("get_invalid_control", "Form", 0));
        pushButton->setText(QApplication::translate("get_invalid_control", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("get_invalid_control", "PushButton", 0));
        pushButton_3->setText(QApplication::translate("get_invalid_control", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class get_invalid_control: public Ui_get_invalid_control {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GET_INVALID_CONTROL_H
