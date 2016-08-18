/********************************************************************************
** Form generated from reading UI file 'abandonreagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABANDONREAGENT_H
#define UI_ABANDONREAGENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_abandonReagent
{
public:
    QCommandLinkButton *commandLinkButton_closePage_abandonReagent;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QLabel *label;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QPushButton *pushButton_sureOpera_abandonReagent;
    QTableView *tableView;

    void setupUi(QWidget *abandonReagent)
    {
        if (abandonReagent->objectName().isEmpty())
            abandonReagent->setObjectName(QStringLiteral("abandonReagent"));
        abandonReagent->resize(890, 636);
        commandLinkButton_closePage_abandonReagent = new QCommandLinkButton(abandonReagent);
        commandLinkButton_closePage_abandonReagent->setObjectName(QStringLiteral("commandLinkButton_closePage_abandonReagent"));
        commandLinkButton_closePage_abandonReagent->setGeometry(QRect(20, 30, 71, 41));
        label_3 = new QLabel(abandonReagent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(550, 0, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label_3->setFont(font);
        pushButton_3 = new QPushButton(abandonReagent);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 70, 91, 41));
        pushButton_2 = new QPushButton(abandonReagent);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(750, 410, 81, 41));
        label = new QLabel(abandonReagent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, -10, 271, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label->setFont(font1);
        tableView_2 = new QTableView(abandonReagent);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(20, 370, 691, 221));
        pushButton = new QPushButton(abandonReagent);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(320, 310, 131, 41));
        pushButton->setFont(font1);
        lineEdit = new QLineEdit(abandonReagent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 310, 281, 41));
        pushButton_sureOpera_abandonReagent = new QPushButton(abandonReagent);
        pushButton_sureOpera_abandonReagent->setObjectName(QStringLiteral("pushButton_sureOpera_abandonReagent"));
        pushButton_sureOpera_abandonReagent->setGeometry(QRect(740, 140, 91, 51));
        tableView = new QTableView(abandonReagent);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 70, 701, 221));

        retranslateUi(abandonReagent);

        QMetaObject::connectSlotsByName(abandonReagent);
    } // setupUi

    void retranslateUi(QWidget *abandonReagent)
    {
        abandonReagent->setWindowTitle(QApplication::translate("abandonReagent", "Form", 0));
        commandLinkButton_closePage_abandonReagent->setText(QApplication::translate("abandonReagent", "\350\277\224\345\233\236", 0));
        label_3->setText(QApplication::translate("abandonReagent", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        pushButton_3->setText(QApplication::translate("abandonReagent", "\344\270\200\351\224\256\345\210\240\351\231\244", 0));
        pushButton_2->setText(QApplication::translate("abandonReagent", "\344\270\200\351\224\256\346\267\273\345\212\240", 0));
        label->setText(QApplication::translate("abandonReagent", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton->setText(QApplication::translate("abandonReagent", "\346\237\245\350\257\242", 0));
        lineEdit->setPlaceholderText(QApplication::translate("abandonReagent", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\350\257\225\345\211\202\345\220\215", 0));
        pushButton_sureOpera_abandonReagent->setText(QApplication::translate("abandonReagent", "\347\241\256\350\256\244\346\211\247\350\241\214", 0));
    } // retranslateUi

};

namespace Ui {
    class abandonReagent: public Ui_abandonReagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABANDONREAGENT_H
