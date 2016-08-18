/********************************************************************************
** Form generated from reading UI file 'dialog_abandonreagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_ABANDONREAGENT_H
#define UI_DIALOG_ABANDONREAGENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_abandonReagent
{
public:
    QLabel *label_2;
    QTableView *tableView;
    QLabel *label;
    QPushButton *pushButton_operateOK_abandonReagent;
    QPushButton *pushButton_cancelOK_abandonReagent;
    QLabel *label_3;

    void setupUi(QWidget *dialog_abandonReagent)
    {
        if (dialog_abandonReagent->objectName().isEmpty())
            dialog_abandonReagent->setObjectName(QStringLiteral("dialog_abandonReagent"));
        dialog_abandonReagent->resize(835, 522);
        label_2 = new QLabel(dialog_abandonReagent);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(360, 80, 61, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        label_2->setFont(font);
        tableView = new QTableView(dialog_abandonReagent);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 140, 701, 291));
        label = new QLabel(dialog_abandonReagent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 10, 271, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label->setFont(font1);
        pushButton_operateOK_abandonReagent = new QPushButton(dialog_abandonReagent);
        pushButton_operateOK_abandonReagent->setObjectName(QStringLiteral("pushButton_operateOK_abandonReagent"));
        pushButton_operateOK_abandonReagent->setGeometry(QRect(430, 470, 101, 31));
        pushButton_cancelOK_abandonReagent = new QPushButton(dialog_abandonReagent);
        pushButton_cancelOK_abandonReagent->setObjectName(QStringLiteral("pushButton_cancelOK_abandonReagent"));
        pushButton_cancelOK_abandonReagent->setGeometry(QRect(250, 470, 81, 31));
        label_3 = new QLabel(dialog_abandonReagent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(580, 20, 161, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(12);
        label_3->setFont(font2);

        retranslateUi(dialog_abandonReagent);

        QMetaObject::connectSlotsByName(dialog_abandonReagent);
    } // setupUi

    void retranslateUi(QWidget *dialog_abandonReagent)
    {
        dialog_abandonReagent->setWindowTitle(QApplication::translate("dialog_abandonReagent", "Form", 0));
        label_2->setText(QApplication::translate("dialog_abandonReagent", "\346\212\245\345\272\237", 0));
        label->setText(QApplication::translate("dialog_abandonReagent", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_operateOK_abandonReagent->setText(QApplication::translate("dialog_abandonReagent", "\346\211\247\350\241\214\345\256\214\346\257\225", 0));
        pushButton_cancelOK_abandonReagent->setText(QApplication::translate("dialog_abandonReagent", "\345\217\226\346\266\210", 0));
        label_3->setText(QApplication::translate("dialog_abandonReagent", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_abandonReagent: public Ui_dialog_abandonReagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_ABANDONREAGENT_H
