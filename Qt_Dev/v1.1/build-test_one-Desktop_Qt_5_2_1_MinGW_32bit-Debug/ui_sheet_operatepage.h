/********************************************************************************
** Form generated from reading UI file 'sheet_operatepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHEET_OPERATEPAGE_H
#define UI_SHEET_OPERATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sheet_OperatePage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_current;
    QSpacerItem *horizontalSpacer;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_allCount;
    QTableView *tableView_Execute;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pBt_return;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pBt_OK;
    QPushButton *pBt_ignore;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QWidget *Sheet_OperatePage)
    {
        if (Sheet_OperatePage->objectName().isEmpty())
            Sheet_OperatePage->setObjectName(QStringLiteral("Sheet_OperatePage"));
        Sheet_OperatePage->resize(735, 428);
        gridLayout = new QGridLayout(Sheet_OperatePage);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_current = new QLabel(Sheet_OperatePage);
        label_current->setObjectName(QStringLiteral("label_current"));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(14);
        label_current->setFont(font);

        horizontalLayout->addWidget(label_current);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_title = new QLabel(Sheet_OperatePage);
        label_title->setObjectName(QStringLiteral("label_title"));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        font1.setPointSize(18);
        label_title->setFont(font1);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_allCount = new QLabel(Sheet_OperatePage);
        label_allCount->setObjectName(QStringLiteral("label_allCount"));
        label_allCount->setFont(font);

        horizontalLayout->addWidget(label_allCount);

        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 2);
        horizontalLayout->setStretch(4, 1);

        verticalLayout->addLayout(horizontalLayout);

        tableView_Execute = new QTableView(Sheet_OperatePage);
        tableView_Execute->setObjectName(QStringLiteral("tableView_Execute"));

        verticalLayout->addWidget(tableView_Execute);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pBt_return = new QPushButton(Sheet_OperatePage);
        pBt_return->setObjectName(QStringLiteral("pBt_return"));
        pBt_return->setMinimumSize(QSize(0, 40));
        pBt_return->setFont(font);

        horizontalLayout_2->addWidget(pBt_return);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pBt_OK = new QPushButton(Sheet_OperatePage);
        pBt_OK->setObjectName(QStringLiteral("pBt_OK"));
        pBt_OK->setMinimumSize(QSize(0, 40));
        pBt_OK->setFont(font);

        horizontalLayout_2->addWidget(pBt_OK);

        pBt_ignore = new QPushButton(Sheet_OperatePage);
        pBt_ignore->setObjectName(QStringLiteral("pBt_ignore"));
        pBt_ignore->setMinimumSize(QSize(0, 40));
        pBt_ignore->setFont(font);

        horizontalLayout_2->addWidget(pBt_ignore);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 5);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(5, 3);

        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(Sheet_OperatePage);

        QMetaObject::connectSlotsByName(Sheet_OperatePage);
    } // setupUi

    void retranslateUi(QWidget *Sheet_OperatePage)
    {
        Sheet_OperatePage->setWindowTitle(QApplication::translate("Sheet_OperatePage", "Form", 0));
        label_current->setText(QApplication::translate("Sheet_OperatePage", "\347\254\254         \344\270\252\344\273\273\345\212\241", 0));
        label_title->setText(QApplication::translate("Sheet_OperatePage", "\345\217\226\346\223\215\344\275\234", 0));
        label_allCount->setText(QApplication::translate("Sheet_OperatePage", "\345\205\261\346\234\211         \344\270\252\344\273\273\345\212\241", 0));
        pBt_return->setText(QApplication::translate("Sheet_OperatePage", "\350\277\224\345\233\236", 0));
        pBt_OK->setText(QApplication::translate("Sheet_OperatePage", "\346\224\276\347\275\256\345\256\214\346\210\220", 0));
        pBt_ignore->setText(QApplication::translate("Sheet_OperatePage", "\350\267\263\350\277\207", 0));
    } // retranslateUi

};

namespace Ui {
    class Sheet_OperatePage: public Ui_Sheet_OperatePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHEET_OPERATEPAGE_H
