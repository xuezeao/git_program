/********************************************************************************
** Form generated from reading UI file 'dialog_getoperatepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_GETOPERATEPAGE_H
#define UI_DIALOG_GETOPERATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Dialog_getoperatepage
{
public:
    QPushButton *pushButton_cancelOK;
    QLabel *label;
    QPushButton *pushButton_operateOK;
    QLabel *label_3;
    QTableView *tableView;
    QLabel *label_2;

    void setupUi(QDialog *Dialog_getoperatepage)
    {
        if (Dialog_getoperatepage->objectName().isEmpty())
            Dialog_getoperatepage->setObjectName(QStringLiteral("Dialog_getoperatepage"));
        Dialog_getoperatepage->resize(946, 713);
        pushButton_cancelOK = new QPushButton(Dialog_getoperatepage);
        pushButton_cancelOK->setObjectName(QStringLiteral("pushButton_cancelOK"));
        pushButton_cancelOK->setGeometry(QRect(280, 490, 81, 31));
        label = new QLabel(Dialog_getoperatepage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        pushButton_operateOK = new QPushButton(Dialog_getoperatepage);
        pushButton_operateOK->setObjectName(QStringLiteral("pushButton_operateOK"));
        pushButton_operateOK->setGeometry(QRect(390, 490, 101, 31));
        label_3 = new QLabel(Dialog_getoperatepage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(540, 40, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        tableView = new QTableView(Dialog_getoperatepage);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(40, 160, 701, 291));
        label_2 = new QLabel(Dialog_getoperatepage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(320, 100, 61, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(24);
        label_2->setFont(font2);

        retranslateUi(Dialog_getoperatepage);

        QMetaObject::connectSlotsByName(Dialog_getoperatepage);
    } // setupUi

    void retranslateUi(QDialog *Dialog_getoperatepage)
    {
        Dialog_getoperatepage->setWindowTitle(QApplication::translate("Dialog_getoperatepage", "Dialog", 0));
        pushButton_cancelOK->setText(QApplication::translate("Dialog_getoperatepage", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("Dialog_getoperatepage", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_operateOK->setText(QApplication::translate("Dialog_getoperatepage", "\346\211\247\350\241\214\345\256\214\346\257\225", 0));
        label_3->setText(QApplication::translate("Dialog_getoperatepage", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        label_2->setText(QApplication::translate("Dialog_getoperatepage", "\345\217\226\347\224\250", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_getoperatepage: public Ui_Dialog_getoperatepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_GETOPERATEPAGE_H
