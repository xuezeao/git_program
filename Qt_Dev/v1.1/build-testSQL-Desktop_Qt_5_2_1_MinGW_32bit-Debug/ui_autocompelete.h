/********************************************************************************
** Form generated from reading UI file 'autocompelete.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTOCOMPELETE_H
#define UI_AUTOCOMPELETE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_autocompelete
{
public:
    QLineEdit *lineEdit;

    void setupUi(QWidget *autocompelete)
    {
        if (autocompelete->objectName().isEmpty())
            autocompelete->setObjectName(QStringLiteral("autocompelete"));
        autocompelete->resize(400, 300);
        lineEdit = new QLineEdit(autocompelete);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 80, 261, 131));

        retranslateUi(autocompelete);

        QMetaObject::connectSlotsByName(autocompelete);
    } // setupUi

    void retranslateUi(QWidget *autocompelete)
    {
        autocompelete->setWindowTitle(QApplication::translate("autocompelete", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class autocompelete: public Ui_autocompelete {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTOCOMPELETE_H
