/********************************************************************************
** Form generated from reading UI file 'showallinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWALLINFO_H
#define UI_SHOWALLINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShowAllInfo
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTableView *tableView_showInfo;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pBt_close;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *ShowAllInfo)
    {
        if (ShowAllInfo->objectName().isEmpty())
            ShowAllInfo->setObjectName(QStringLiteral("ShowAllInfo"));
        ShowAllInfo->resize(803, 462);
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(14);
        ShowAllInfo->setFont(font);
        gridLayout = new QGridLayout(ShowAllInfo);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView_showInfo = new QTableView(ShowAllInfo);
        tableView_showInfo->setObjectName(QStringLiteral("tableView_showInfo"));

        verticalLayout->addWidget(tableView_showInfo);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pBt_close = new QPushButton(ShowAllInfo);
        pBt_close->setObjectName(QStringLiteral("pBt_close"));
        pBt_close->setMinimumSize(QSize(40, 40));
        pBt_close->setFont(font);

        horizontalLayout->addWidget(pBt_close);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ShowAllInfo);

        QMetaObject::connectSlotsByName(ShowAllInfo);
    } // setupUi

    void retranslateUi(QWidget *ShowAllInfo)
    {
        ShowAllInfo->setWindowTitle(QApplication::translate("ShowAllInfo", "Form", 0));
        pBt_close->setText(QApplication::translate("ShowAllInfo", "\345\205\263\351\227\255", 0));
    } // retranslateUi

};

namespace Ui {
    class ShowAllInfo: public Ui_ShowAllInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWALLINFO_H
