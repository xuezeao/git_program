/********************************************************************************
** Form generated from reading UI file 'returnreagenttochest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNREAGENTTOCHEST_H
#define UI_RETURNREAGENTTOCHEST_H

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

class Ui_returnreagenttochest
{
public:
    QLabel *label_3;
    QPushButton *pushButton_closeReturnReagentPage;
    QLabel *label;
    QPushButton *pushButton_sureOperaReturnOperate;
    QTableView *tableView;
    QLabel *label_2;

    void setupUi(QWidget *returnreagenttochest)
    {
        if (returnreagenttochest->objectName().isEmpty())
            returnreagenttochest->setObjectName(QStringLiteral("returnreagenttochest"));
        returnreagenttochest->resize(805, 556);
        label_3 = new QLabel(returnreagenttochest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(620, 20, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label_3->setFont(font);
        pushButton_closeReturnReagentPage = new QPushButton(returnreagenttochest);
        pushButton_closeReturnReagentPage->setObjectName(QStringLiteral("pushButton_closeReturnReagentPage"));
        pushButton_closeReturnReagentPage->setGeometry(QRect(210, 490, 91, 41));
        label = new QLabel(returnreagenttochest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 10, 271, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label->setFont(font1);
        pushButton_sureOperaReturnOperate = new QPushButton(returnreagenttochest);
        pushButton_sureOperaReturnOperate->setObjectName(QStringLiteral("pushButton_sureOperaReturnOperate"));
        pushButton_sureOperaReturnOperate->setGeometry(QRect(420, 490, 91, 41));
        tableView = new QTableView(returnreagenttochest);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 130, 701, 291));
        label_2 = new QLabel(returnreagenttochest);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 70, 71, 31));
        label_2->setFont(font1);

        retranslateUi(returnreagenttochest);

        QMetaObject::connectSlotsByName(returnreagenttochest);
    } // setupUi

    void retranslateUi(QWidget *returnreagenttochest)
    {
        returnreagenttochest->setWindowTitle(QApplication::translate("returnreagenttochest", "Form", 0));
        label_3->setText(QApplication::translate("returnreagenttochest", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        pushButton_closeReturnReagentPage->setText(QApplication::translate("returnreagenttochest", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("returnreagenttochest", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_sureOperaReturnOperate->setText(QApplication::translate("returnreagenttochest", "\347\241\256\350\256\244\346\211\247\350\241\214", 0));
        label_2->setText(QApplication::translate("returnreagenttochest", "\345\275\222\350\277\230", 0));
    } // retranslateUi

};

namespace Ui {
    class returnreagenttochest: public Ui_returnreagenttochest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNREAGENTTOCHEST_H
