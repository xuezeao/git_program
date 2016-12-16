/********************************************************************************
** Form generated from reading UI file 'returnpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNPAGE_H
#define UI_RETURNPAGE_H

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

class Ui_ReturnPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *Bt_backBefore;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QTableView *tableView_showExecuteInfo;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *Bt_execute;
    QSpacerItem *verticalSpacer_2;
    QPushButton *Bt_delete;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_getSearchInfo;
    QPushButton *Bt_searchInfo;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QTableView *tableView_showSearchInfo;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_5;
    QPushButton *Bt_add;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *ReturnPage)
    {
        if (ReturnPage->objectName().isEmpty())
            ReturnPage->setObjectName(QStringLiteral("ReturnPage"));
        ReturnPage->resize(877, 514);
        gridLayout = new QGridLayout(ReturnPage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Bt_backBefore = new QCommandLinkButton(ReturnPage);
        Bt_backBefore->setObjectName(QStringLiteral("Bt_backBefore"));

        horizontalLayout->addWidget(Bt_backBefore);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(ReturnPage);
        label_title->setObjectName(QStringLiteral("label_title"));

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);

        verticalLayout_5->addLayout(horizontalLayout);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tableView_showExecuteInfo = new QTableView(ReturnPage);
        tableView_showExecuteInfo->setObjectName(QStringLiteral("tableView_showExecuteInfo"));

        horizontalLayout_2->addWidget(tableView_showExecuteInfo);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Bt_execute = new QPushButton(ReturnPage);
        Bt_execute->setObjectName(QStringLiteral("Bt_execute"));

        verticalLayout->addWidget(Bt_execute);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        Bt_delete = new QPushButton(ReturnPage);
        Bt_delete->setObjectName(QStringLiteral("Bt_delete"));

        verticalLayout->addWidget(Bt_delete);

        verticalSpacer_3 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 4);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 1);

        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        lineEdit_getSearchInfo = new QLineEdit(ReturnPage);
        lineEdit_getSearchInfo->setObjectName(QStringLiteral("lineEdit_getSearchInfo"));
        lineEdit_getSearchInfo->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(lineEdit_getSearchInfo);

        Bt_searchInfo = new QPushButton(ReturnPage);
        Bt_searchInfo->setObjectName(QStringLiteral("Bt_searchInfo"));
        Bt_searchInfo->setMinimumSize(QSize(0, 40));

        horizontalLayout_3->addWidget(Bt_searchInfo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableView_showSearchInfo = new QTableView(ReturnPage);
        tableView_showSearchInfo->setObjectName(QStringLiteral("tableView_showSearchInfo"));

        horizontalLayout_4->addWidget(tableView_showSearchInfo);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_5);

        Bt_add = new QPushButton(ReturnPage);
        Bt_add->setObjectName(QStringLiteral("Bt_add"));

        verticalLayout_2->addWidget(Bt_add);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        verticalLayout_2->setStretch(0, 4);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 1);

        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        verticalLayout_5->addLayout(verticalLayout_4);


        gridLayout->addLayout(verticalLayout_5, 0, 0, 1, 1);


        retranslateUi(ReturnPage);

        QMetaObject::connectSlotsByName(ReturnPage);
    } // setupUi

    void retranslateUi(QWidget *ReturnPage)
    {
        ReturnPage->setWindowTitle(QApplication::translate("ReturnPage", "Form", 0));
        Bt_backBefore->setText(QApplication::translate("ReturnPage", "\350\277\224\345\233\236", 0));
        label_title->setText(QApplication::translate("ReturnPage", "TextLabel", 0));
        Bt_execute->setText(QApplication::translate("ReturnPage", "\346\211\247\350\241\214", 0));
        Bt_delete->setText(QApplication::translate("ReturnPage", "\345\210\240\351\231\244", 0));
        Bt_searchInfo->setText(QApplication::translate("ReturnPage", "\346\220\234\347\264\242", 0));
        Bt_add->setText(QApplication::translate("ReturnPage", "\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class ReturnPage: public Ui_ReturnPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNPAGE_H
