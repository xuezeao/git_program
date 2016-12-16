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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OperateWindow
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *Bt_backBefore;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_showExecuteInfo;
    QVBoxLayout *verticalLayout;
    QPushButton *Bt_execute;
    QPushButton *pBt_getPosition;
    QSpacerItem *verticalSpacer;
    QPushButton *Bt_changeInfo_A;
    QPushButton *Bt_delete;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_getSearchInfo;
    QPushButton *Bt_searchInfo;
    QSpacerItem *horizontalSpacer_4;
    QTableView *tableView_showSearchInfo;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QPushButton *Bt_add;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *OperateWindow)
    {
        if (OperateWindow->objectName().isEmpty())
            OperateWindow->setObjectName(QStringLiteral("OperateWindow"));
        OperateWindow->resize(829, 527);
        gridLayout = new QGridLayout(OperateWindow);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Bt_backBefore = new QCommandLinkButton(OperateWindow);
        Bt_backBefore->setObjectName(QStringLiteral("Bt_backBefore"));
        Bt_backBefore->setMinimumSize(QSize(0, 40));

        horizontalLayout->addWidget(Bt_backBefore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(OperateWindow);
        label_title->setObjectName(QStringLiteral("label_title"));

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 3);

        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView_showExecuteInfo = new QTableView(OperateWindow);
        tableView_showExecuteInfo->setObjectName(QStringLiteral("tableView_showExecuteInfo"));

        horizontalLayout_2->addWidget(tableView_showExecuteInfo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        Bt_execute = new QPushButton(OperateWindow);
        Bt_execute->setObjectName(QStringLiteral("Bt_execute"));

        verticalLayout->addWidget(Bt_execute);

        pBt_getPosition = new QPushButton(OperateWindow);
        pBt_getPosition->setObjectName(QStringLiteral("pBt_getPosition"));

        verticalLayout->addWidget(pBt_getPosition);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Bt_changeInfo_A = new QPushButton(OperateWindow);
        Bt_changeInfo_A->setObjectName(QStringLiteral("Bt_changeInfo_A"));

        verticalLayout->addWidget(Bt_changeInfo_A);

        Bt_delete = new QPushButton(OperateWindow);
        Bt_delete->setObjectName(QStringLiteral("Bt_delete"));

        verticalLayout->addWidget(Bt_delete);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(2, 3);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);
        verticalLayout->setStretch(5, 1);

        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_getSearchInfo = new QLineEdit(OperateWindow);
        lineEdit_getSearchInfo->setObjectName(QStringLiteral("lineEdit_getSearchInfo"));
        lineEdit_getSearchInfo->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(lineEdit_getSearchInfo);

        Bt_searchInfo = new QPushButton(OperateWindow);
        Bt_searchInfo->setObjectName(QStringLiteral("Bt_searchInfo"));
        Bt_searchInfo->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(Bt_searchInfo);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        tableView_showSearchInfo = new QTableView(OperateWindow);
        tableView_showSearchInfo->setObjectName(QStringLiteral("tableView_showSearchInfo"));

        verticalLayout_2->addWidget(tableView_showSearchInfo);


        horizontalLayout_4->addLayout(verticalLayout_2);

        horizontalLayout_4->setStretch(0, 1);

        horizontalLayout_5->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        Bt_add = new QPushButton(OperateWindow);
        Bt_add->setObjectName(QStringLiteral("Bt_add"));

        verticalLayout_3->addWidget(Bt_add);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        verticalLayout_3->setStretch(0, 5);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 1);

        horizontalLayout_5->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(OperateWindow);

        QMetaObject::connectSlotsByName(OperateWindow);
    } // setupUi

    void retranslateUi(QWidget *OperateWindow)
    {
        OperateWindow->setWindowTitle(QApplication::translate("OperateWindow", "Form", 0));
        Bt_backBefore->setText(QApplication::translate("OperateWindow", "\350\277\224\345\233\236", 0));
        label_title->setText(QApplication::translate("OperateWindow", "TextLabel", 0));
        Bt_execute->setText(QApplication::translate("OperateWindow", "\346\211\247\350\241\214", 0));
        pBt_getPosition->setText(QApplication::translate("OperateWindow", "\350\216\267\345\217\226\344\275\215\347\275\256", 0));
        Bt_changeInfo_A->setText(QApplication::translate("OperateWindow", "\344\277\256\346\224\271", 0));
        Bt_delete->setText(QApplication::translate("OperateWindow", "\345\210\240\351\231\244", 0));
        Bt_searchInfo->setText(QApplication::translate("OperateWindow", "\346\220\234\347\264\242", 0));
        Bt_add->setText(QApplication::translate("OperateWindow", "\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class OperateWindow: public Ui_OperateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPERATEWINDOW_H
