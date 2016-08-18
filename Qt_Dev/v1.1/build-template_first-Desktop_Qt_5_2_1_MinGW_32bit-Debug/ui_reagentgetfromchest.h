/********************************************************************************
** Form generated from reading UI file 'reagentgetfromchest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REAGENTGETFROMCHEST_H
#define UI_REAGENTGETFROMCHEST_H

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

class Ui_reagentgetfromchest
{
public:
    QLabel *label;
    QLabel *label_3;
    QTableView *tableView;
    QTableView *tableView_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sureOperaGetAction;
    QCommandLinkButton *commandLinkButton_closeGetPageOpenMain;

    void setupUi(QWidget *reagentgetfromchest)
    {
        if (reagentgetfromchest->objectName().isEmpty())
            reagentgetfromchest->setObjectName(QStringLiteral("reagentgetfromchest"));
        reagentgetfromchest->resize(926, 638);
        label = new QLabel(reagentgetfromchest);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 10, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_3 = new QLabel(reagentgetfromchest);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(590, 20, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        tableView = new QTableView(reagentgetfromchest);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 90, 701, 221));
        tableView_2 = new QTableView(reagentgetfromchest);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(60, 390, 691, 221));
        lineEdit = new QLineEdit(reagentgetfromchest);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 330, 281, 41));
        pushButton = new QPushButton(reagentgetfromchest);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 330, 131, 41));
        pushButton->setFont(font);
        pushButton_2 = new QPushButton(reagentgetfromchest);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(790, 430, 81, 41));
        pushButton_3 = new QPushButton(reagentgetfromchest);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(780, 90, 91, 41));
        pushButton_sureOperaGetAction = new QPushButton(reagentgetfromchest);
        pushButton_sureOperaGetAction->setObjectName(QStringLiteral("pushButton_sureOperaGetAction"));
        pushButton_sureOperaGetAction->setGeometry(QRect(780, 160, 91, 51));
        commandLinkButton_closeGetPageOpenMain = new QCommandLinkButton(reagentgetfromchest);
        commandLinkButton_closeGetPageOpenMain->setObjectName(QStringLiteral("commandLinkButton_closeGetPageOpenMain"));
        commandLinkButton_closeGetPageOpenMain->setGeometry(QRect(60, 50, 71, 41));

        retranslateUi(reagentgetfromchest);

        QMetaObject::connectSlotsByName(reagentgetfromchest);
    } // setupUi

    void retranslateUi(QWidget *reagentgetfromchest)
    {
        reagentgetfromchest->setWindowTitle(QApplication::translate("reagentgetfromchest", "Form", 0));
        label->setText(QApplication::translate("reagentgetfromchest", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_3->setText(QApplication::translate("reagentgetfromchest", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        lineEdit->setPlaceholderText(QApplication::translate("reagentgetfromchest", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\350\257\225\345\211\202\345\220\215", 0));
        pushButton->setText(QApplication::translate("reagentgetfromchest", "\346\237\245\350\257\242", 0));
        pushButton_2->setText(QApplication::translate("reagentgetfromchest", "\344\270\200\351\224\256\346\267\273\345\212\240", 0));
        pushButton_3->setText(QApplication::translate("reagentgetfromchest", "\344\270\200\351\224\256\345\210\240\351\231\244", 0));
        pushButton_sureOperaGetAction->setText(QApplication::translate("reagentgetfromchest", "\347\241\256\350\256\244\346\211\247\350\241\214", 0));
        commandLinkButton_closeGetPageOpenMain->setText(QApplication::translate("reagentgetfromchest", "\350\277\224\345\233\236", 0));
    } // retranslateUi

};

namespace Ui {
    class reagentgetfromchest: public Ui_reagentgetfromchest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REAGENTGETFROMCHEST_H
