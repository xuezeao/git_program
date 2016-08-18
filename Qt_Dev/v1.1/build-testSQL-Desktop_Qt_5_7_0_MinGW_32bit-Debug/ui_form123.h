/********************************************************************************
** Form generated from reading UI file 'form123.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM123_H
#define UI_FORM123_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form123
{
public:
    QTableView *tableView;

    void setupUi(QWidget *Form123)
    {
        if (Form123->objectName().isEmpty())
            Form123->setObjectName(QStringLiteral("Form123"));
        Form123->resize(400, 300);
        tableView = new QTableView(Form123);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 40, 256, 192));

        retranslateUi(Form123);

        QMetaObject::connectSlotsByName(Form123);
    } // setupUi

    void retranslateUi(QWidget *Form123)
    {
        Form123->setWindowTitle(QApplication::translate("Form123", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Form123: public Ui_Form123 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM123_H
