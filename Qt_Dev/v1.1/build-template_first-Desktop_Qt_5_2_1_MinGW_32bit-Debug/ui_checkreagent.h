/********************************************************************************
** Form generated from reading UI file 'checkreagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKREAGENT_H
#define UI_CHECKREAGENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckReagent
{
public:
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QTableView *tableView;
    QComboBox *comboBox;
    QLineEdit *lineEdit;
    QPushButton *pushButton_search_checkReagent;
    QPushButton *pushButton_cancelOperate_replaceReagent;
    QPushButton *pushButton__sureOK_replaceReagent;

    void setupUi(QWidget *CheckReagent)
    {
        if (CheckReagent->objectName().isEmpty())
            CheckReagent->setObjectName(QStringLiteral("CheckReagent"));
        CheckReagent->resize(862, 557);
        label = new QLabel(CheckReagent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_3 = new QLabel(CheckReagent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(680, 0, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        label_2 = new QLabel(CheckReagent);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 60, 91, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(26);
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        tableView = new QTableView(CheckReagent);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 210, 751, 281));
        comboBox = new QComboBox(CheckReagent);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(530, 150, 231, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(14);
        comboBox->setFont(font3);
        lineEdit = new QLineEdit(CheckReagent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 140, 271, 41));
        lineEdit->setFont(font3);
        pushButton_search_checkReagent = new QPushButton(CheckReagent);
        pushButton_search_checkReagent->setObjectName(QStringLiteral("pushButton_search_checkReagent"));
        pushButton_search_checkReagent->setGeometry(QRect(340, 140, 91, 41));
        pushButton_search_checkReagent->setFont(font3);
        pushButton_cancelOperate_replaceReagent = new QPushButton(CheckReagent);
        pushButton_cancelOperate_replaceReagent->setObjectName(QStringLiteral("pushButton_cancelOperate_replaceReagent"));
        pushButton_cancelOperate_replaceReagent->setGeometry(QRect(280, 500, 91, 41));
        pushButton__sureOK_replaceReagent = new QPushButton(CheckReagent);
        pushButton__sureOK_replaceReagent->setObjectName(QStringLiteral("pushButton__sureOK_replaceReagent"));
        pushButton__sureOK_replaceReagent->setGeometry(QRect(540, 500, 91, 41));

        retranslateUi(CheckReagent);

        QMetaObject::connectSlotsByName(CheckReagent);
    } // setupUi

    void retranslateUi(QWidget *CheckReagent)
    {
        CheckReagent->setWindowTitle(QApplication::translate("CheckReagent", "Form", 0));
        label->setText(QApplication::translate("CheckReagent", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_3->setText(QApplication::translate("CheckReagent", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        label_2->setText(QApplication::translate("CheckReagent", "\347\202\271\351\252\214", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("CheckReagent", "\346\212\275\345\261\211 1", 0)
        );
        comboBox->setCurrentText(QApplication::translate("CheckReagent", "\346\212\275\345\261\211 1", 0));
        lineEdit->setPlaceholderText(QApplication::translate("CheckReagent", "\350\257\267\350\276\223\345\205\245\350\257\225\345\211\202\345\220\215\347\247\260", 0));
        pushButton_search_checkReagent->setText(QApplication::translate("CheckReagent", "\346\237\245\350\257\242", 0));
        pushButton_cancelOperate_replaceReagent->setText(QApplication::translate("CheckReagent", "\345\217\226\346\266\210", 0));
        pushButton__sureOK_replaceReagent->setText(QApplication::translate("CheckReagent", "\347\241\256\350\256\244\346\211\247\350\241\214", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckReagent: public Ui_CheckReagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKREAGENT_H
