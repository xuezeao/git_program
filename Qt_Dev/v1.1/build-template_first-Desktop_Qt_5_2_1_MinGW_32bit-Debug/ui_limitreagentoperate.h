/********************************************************************************
** Form generated from reading UI file 'limitreagentoperate.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIMITREAGENTOPERATE_H
#define UI_LIMITREAGENTOPERATE_H

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

class Ui_limitReagentOperate
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QTableView *tableView;
    QPushButton *pushButton_sureRole_limitReagent;
    QPushButton *pushButton_cancelrole_limitReagent;
    QPushButton *pushButton_cancelOperate_limitReagent;

    void setupUi(QWidget *limitReagentOperate)
    {
        if (limitReagentOperate->objectName().isEmpty())
            limitReagentOperate->setObjectName(QStringLiteral("limitReagentOperate"));
        limitReagentOperate->resize(858, 562);
        label_3 = new QLabel(limitReagentOperate);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(600, 10, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label_3->setFont(font);
        label = new QLabel(limitReagentOperate);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 0, 271, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label->setFont(font1);
        label_2 = new QLabel(limitReagentOperate);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(300, 80, 171, 41));
        label_2->setFont(font1);
        tableView = new QTableView(limitReagentOperate);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(30, 150, 781, 331));
        pushButton_sureRole_limitReagent = new QPushButton(limitReagentOperate);
        pushButton_sureRole_limitReagent->setObjectName(QStringLiteral("pushButton_sureRole_limitReagent"));
        pushButton_sureRole_limitReagent->setGeometry(QRect(540, 510, 75, 23));
        pushButton_cancelrole_limitReagent = new QPushButton(limitReagentOperate);
        pushButton_cancelrole_limitReagent->setObjectName(QStringLiteral("pushButton_cancelrole_limitReagent"));
        pushButton_cancelrole_limitReagent->setGeometry(QRect(400, 510, 75, 23));
        pushButton_cancelOperate_limitReagent = new QPushButton(limitReagentOperate);
        pushButton_cancelOperate_limitReagent->setObjectName(QStringLiteral("pushButton_cancelOperate_limitReagent"));
        pushButton_cancelOperate_limitReagent->setGeometry(QRect(240, 510, 75, 23));

        retranslateUi(limitReagentOperate);

        QMetaObject::connectSlotsByName(limitReagentOperate);
    } // setupUi

    void retranslateUi(QWidget *limitReagentOperate)
    {
        limitReagentOperate->setWindowTitle(QApplication::translate("limitReagentOperate", "Form", 0));
        label_3->setText(QApplication::translate("limitReagentOperate", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        label->setText(QApplication::translate("limitReagentOperate", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_2->setText(QApplication::translate("limitReagentOperate", "\347\256\241\345\210\266\350\257\225\345\211\202\346\211\247\350\241\214", 0));
        pushButton_sureRole_limitReagent->setText(QApplication::translate("limitReagentOperate", "\346\211\247\350\241\214", 0));
        pushButton_cancelrole_limitReagent->setText(QApplication::translate("limitReagentOperate", "\344\273\273\345\212\241\344\275\234\345\272\237", 0));
        pushButton_cancelOperate_limitReagent->setText(QApplication::translate("limitReagentOperate", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class limitReagentOperate: public Ui_limitReagentOperate {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIMITREAGENTOPERATE_H
