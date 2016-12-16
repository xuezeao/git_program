/********************************************************************************
** Form generated from reading UI file 'reagentgpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REAGENTGPAGE_H
#define UI_REAGENTGPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reagentGPage
{
public:
    QCommandLinkButton *commandLinkButton;
    QTableView *tableView_showNeedReagent;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView__showSearch;
    QPushButton *pushButton_searchNews;
    QLineEdit *lineEdit_search;

    void setupUi(QWidget *reagentGPage)
    {
        if (reagentGPage->objectName().isEmpty())
            reagentGPage->setObjectName(QStringLiteral("reagentGPage"));
        reagentGPage->resize(746, 474);
        commandLinkButton = new QCommandLinkButton(reagentGPage);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 10, 71, 41));
        tableView_showNeedReagent = new QTableView(reagentGPage);
        tableView_showNeedReagent->setObjectName(QStringLiteral("tableView_showNeedReagent"));
        tableView_showNeedReagent->setGeometry(QRect(10, 50, 591, 191));
        pushButton = new QPushButton(reagentGPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 70, 75, 23));
        pushButton_2 = new QPushButton(reagentGPage);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 140, 75, 23));
        tableView__showSearch = new QTableView(reagentGPage);
        tableView__showSearch->setObjectName(QStringLiteral("tableView__showSearch"));
        tableView__showSearch->setGeometry(QRect(10, 310, 571, 161));
        pushButton_searchNews = new QPushButton(reagentGPage);
        pushButton_searchNews->setObjectName(QStringLiteral("pushButton_searchNews"));
        pushButton_searchNews->setGeometry(QRect(260, 260, 91, 31));
        lineEdit_search = new QLineEdit(reagentGPage);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(30, 260, 221, 31));

        retranslateUi(reagentGPage);

        QMetaObject::connectSlotsByName(reagentGPage);
    } // setupUi

    void retranslateUi(QWidget *reagentGPage)
    {
        reagentGPage->setWindowTitle(QApplication::translate("reagentGPage", "Form", 0));
        commandLinkButton->setText(QApplication::translate("reagentGPage", "\350\277\224\345\233\236", 0));
        pushButton->setText(QApplication::translate("reagentGPage", "\345\210\240\351\231\244", 0));
        pushButton_2->setText(QApplication::translate("reagentGPage", "\346\211\247\350\241\214", 0));
        pushButton_searchNews->setText(QApplication::translate("reagentGPage", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class reagentGPage: public Ui_reagentGPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REAGENTGPAGE_H
