/********************************************************************************
** Form generated from reading UI file 'reagentppage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REAGENTPPAGE_H
#define UI_REAGENTPPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reagentPPage
{
public:
    QTableView *tableView_reagentP;
    QCommandLinkButton *commandLinkButton_B;
    QPushButton *pushButton_Preagent;
    QPushButton *pushButton_Dreagent;

    void setupUi(QWidget *reagentPPage)
    {
        if (reagentPPage->objectName().isEmpty())
            reagentPPage->setObjectName(QStringLiteral("reagentPPage"));
        reagentPPage->resize(841, 477);
        tableView_reagentP = new QTableView(reagentPPage);
        tableView_reagentP->setObjectName(QStringLiteral("tableView_reagentP"));
        tableView_reagentP->setGeometry(QRect(10, 120, 681, 231));
        commandLinkButton_B = new QCommandLinkButton(reagentPPage);
        commandLinkButton_B->setObjectName(QStringLiteral("commandLinkButton_B"));
        commandLinkButton_B->setGeometry(QRect(20, 60, 172, 41));
        pushButton_Preagent = new QPushButton(reagentPPage);
        pushButton_Preagent->setObjectName(QStringLiteral("pushButton_Preagent"));
        pushButton_Preagent->setGeometry(QRect(710, 130, 75, 23));
        pushButton_Dreagent = new QPushButton(reagentPPage);
        pushButton_Dreagent->setObjectName(QStringLiteral("pushButton_Dreagent"));
        pushButton_Dreagent->setGeometry(QRect(710, 280, 75, 23));

        retranslateUi(reagentPPage);

        QMetaObject::connectSlotsByName(reagentPPage);
    } // setupUi

    void retranslateUi(QWidget *reagentPPage)
    {
        reagentPPage->setWindowTitle(QApplication::translate("reagentPPage", "Form", 0));
        commandLinkButton_B->setText(QApplication::translate("reagentPPage", "\350\277\224\345\233\236", 0));
        pushButton_Preagent->setText(QApplication::translate("reagentPPage", "\346\211\247\350\241\214", 0));
        pushButton_Dreagent->setText(QApplication::translate("reagentPPage", "\345\210\240\351\231\244", 0));
    } // retranslateUi

};

namespace Ui {
    class reagentPPage: public Ui_reagentPPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REAGENTPPAGE_H
