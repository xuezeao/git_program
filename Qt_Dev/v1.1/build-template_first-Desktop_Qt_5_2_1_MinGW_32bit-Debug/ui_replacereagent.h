/********************************************************************************
** Form generated from reading UI file 'replacereagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEREAGENT_H
#define UI_REPLACEREAGENT_H

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

class Ui_replaceReagent
{
public:
    QLabel *label;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sureOpera_replaceReagent;
    QLabel *label_3;
    QTableView *tableView;
    QTableView *tableView_2;
    QPushButton *pushButton;
    QCommandLinkButton *commandLinkButton_closePage_replaceReagent;
    QPushButton *pushButton_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *replaceReagent)
    {
        if (replaceReagent->objectName().isEmpty())
            replaceReagent->setObjectName(QStringLiteral("replaceReagent"));
        replaceReagent->resize(881, 615);
        label = new QLabel(replaceReagent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 0, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        pushButton_3 = new QPushButton(replaceReagent);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(730, 80, 91, 41));
        pushButton_sureOpera_replaceReagent = new QPushButton(replaceReagent);
        pushButton_sureOpera_replaceReagent->setObjectName(QStringLiteral("pushButton_sureOpera_replaceReagent"));
        pushButton_sureOpera_replaceReagent->setGeometry(QRect(730, 150, 91, 51));
        label_3 = new QLabel(replaceReagent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(540, 10, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        tableView = new QTableView(replaceReagent);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 80, 701, 221));
        tableView_2 = new QTableView(replaceReagent);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(10, 380, 691, 221));
        pushButton = new QPushButton(replaceReagent);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 320, 131, 41));
        pushButton->setFont(font);
        commandLinkButton_closePage_replaceReagent = new QCommandLinkButton(replaceReagent);
        commandLinkButton_closePage_replaceReagent->setObjectName(QStringLiteral("commandLinkButton_closePage_replaceReagent"));
        commandLinkButton_closePage_replaceReagent->setGeometry(QRect(10, 40, 71, 41));
        pushButton_2 = new QPushButton(replaceReagent);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(740, 420, 81, 41));
        lineEdit = new QLineEdit(replaceReagent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 320, 281, 41));

        retranslateUi(replaceReagent);

        QMetaObject::connectSlotsByName(replaceReagent);
    } // setupUi

    void retranslateUi(QWidget *replaceReagent)
    {
        replaceReagent->setWindowTitle(QApplication::translate("replaceReagent", "Form", 0));
        label->setText(QApplication::translate("replaceReagent", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_3->setText(QApplication::translate("replaceReagent", "\344\270\200\351\224\256\345\210\240\351\231\244", 0));
        pushButton_sureOpera_replaceReagent->setText(QApplication::translate("replaceReagent", "\347\241\256\350\256\244\346\211\247\350\241\214", 0));
        label_3->setText(QApplication::translate("replaceReagent", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        pushButton->setText(QApplication::translate("replaceReagent", "\346\237\245\350\257\242", 0));
        commandLinkButton_closePage_replaceReagent->setText(QApplication::translate("replaceReagent", "\350\277\224\345\233\236", 0));
        pushButton_2->setText(QApplication::translate("replaceReagent", "\344\270\200\351\224\256\346\267\273\345\212\240", 0));
        lineEdit->setPlaceholderText(QApplication::translate("replaceReagent", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\350\257\225\345\211\202\345\220\215", 0));
    } // retranslateUi

};

namespace Ui {
    class replaceReagent: public Ui_replaceReagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEREAGENT_H
