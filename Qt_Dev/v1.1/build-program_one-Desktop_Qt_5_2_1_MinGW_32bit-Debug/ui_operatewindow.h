/********************************************************************************
** Form generated from reading UI file 'operatewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPERATEWINDOW_H
#define UI_OPERATEWINDOW_H

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

class Ui_OperateWindow
{
public:
    QPushButton *Bt_delete;
    QPushButton *Bt_add;
    QPushButton *Bt_execute;
    QLabel *label_title;
    QLineEdit *lineEdit_getSearchInfo;
    QPushButton *Bt_searchInfo;
    QCommandLinkButton *Bt_backBefore;
    QTableView *tableView_showexecuteInfo;
    QTableView *tableView_showSearchInfo;

    void setupUi(QWidget *OperateWindow)
    {
        if (OperateWindow->objectName().isEmpty())
            OperateWindow->setObjectName(QStringLiteral("OperateWindow"));
        OperateWindow->resize(829, 527);
        Bt_delete = new QPushButton(OperateWindow);
        Bt_delete->setObjectName(QStringLiteral("Bt_delete"));
        Bt_delete->setGeometry(QRect(750, 190, 75, 23));
        Bt_add = new QPushButton(OperateWindow);
        Bt_add->setObjectName(QStringLiteral("Bt_add"));
        Bt_add->setGeometry(QRect(750, 430, 75, 23));
        Bt_execute = new QPushButton(OperateWindow);
        Bt_execute->setObjectName(QStringLiteral("Bt_execute"));
        Bt_execute->setGeometry(QRect(720, 20, 75, 23));
        label_title = new QLabel(OperateWindow);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(410, 20, 54, 12));
        lineEdit_getSearchInfo = new QLineEdit(OperateWindow);
        lineEdit_getSearchInfo->setObjectName(QStringLiteral("lineEdit_getSearchInfo"));
        lineEdit_getSearchInfo->setGeometry(QRect(10, 260, 301, 31));
        Bt_searchInfo = new QPushButton(OperateWindow);
        Bt_searchInfo->setObjectName(QStringLiteral("Bt_searchInfo"));
        Bt_searchInfo->setGeometry(QRect(320, 260, 71, 31));
        Bt_backBefore = new QCommandLinkButton(OperateWindow);
        Bt_backBefore->setObjectName(QStringLiteral("Bt_backBefore"));
        Bt_backBefore->setGeometry(QRect(10, 0, 71, 41));
        tableView_showexecuteInfo = new QTableView(OperateWindow);
        tableView_showexecuteInfo->setObjectName(QStringLiteral("tableView_showexecuteInfo"));
        tableView_showexecuteInfo->setGeometry(QRect(10, 40, 731, 211));
        tableView_showSearchInfo = new QTableView(OperateWindow);
        tableView_showSearchInfo->setObjectName(QStringLiteral("tableView_showSearchInfo"));
        tableView_showSearchInfo->setGeometry(QRect(10, 300, 731, 221));

        retranslateUi(OperateWindow);

        QMetaObject::connectSlotsByName(OperateWindow);
    } // setupUi

    void retranslateUi(QWidget *OperateWindow)
    {
        OperateWindow->setWindowTitle(QApplication::translate("OperateWindow", "Form", 0));
        Bt_delete->setText(QApplication::translate("OperateWindow", "\345\210\240\351\231\244", 0));
        Bt_add->setText(QApplication::translate("OperateWindow", "\346\267\273\345\212\240", 0));
        Bt_execute->setText(QApplication::translate("OperateWindow", "\346\211\247\350\241\214", 0));
        label_title->setText(QApplication::translate("OperateWindow", "TextLabel", 0));
        Bt_searchInfo->setText(QApplication::translate("OperateWindow", "\346\220\234\347\264\242", 0));
        Bt_backBefore->setText(QApplication::translate("OperateWindow", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class OperateWindow: public Ui_OperateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATEWINDOW_H
