/********************************************************************************
** Form generated from reading UI file 'reagentplace.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REAGENTPLACE_H
#define UI_REAGENTPLACE_H

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

class Ui_reagentPlace
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton_deletReagentPlace;
    QPushButton *pushButton_sureOperate;
    QCommandLinkButton *commandLinkButton_fromPlaceToChoicePage;
    QTableView *tableView_operateWindow;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;
    QTableView *tableView_searchWindow;

    void setupUi(QWidget *reagentPlace)
    {
        if (reagentPlace->objectName().isEmpty())
            reagentPlace->setObjectName(QStringLiteral("reagentPlace"));
        reagentPlace->resize(823, 541);
        label = new QLabel(reagentPlace);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 281, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(reagentPlace);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 20, 141, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_3 = new QLabel(reagentPlace);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 40, 61, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(22);
        label_3->setFont(font2);
        pushButton_deletReagentPlace = new QPushButton(reagentPlace);
        pushButton_deletReagentPlace->setObjectName(QStringLiteral("pushButton_deletReagentPlace"));
        pushButton_deletReagentPlace->setGeometry(QRect(710, 200, 75, 23));
        pushButton_sureOperate = new QPushButton(reagentPlace);
        pushButton_sureOperate->setObjectName(QStringLiteral("pushButton_sureOperate"));
        pushButton_sureOperate->setGeometry(QRect(710, 140, 75, 23));
        commandLinkButton_fromPlaceToChoicePage = new QCommandLinkButton(reagentPlace);
        commandLinkButton_fromPlaceToChoicePage->setObjectName(QStringLiteral("commandLinkButton_fromPlaceToChoicePage"));
        commandLinkButton_fromPlaceToChoicePage->setGeometry(QRect(10, 60, 81, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Segoe UI"));
        font3.setPointSize(14);
        commandLinkButton_fromPlaceToChoicePage->setFont(font3);
        tableView_operateWindow = new QTableView(reagentPlace);
        tableView_operateWindow->setObjectName(QStringLiteral("tableView_operateWindow"));
        tableView_operateWindow->setGeometry(QRect(20, 100, 681, 201));
        lineEdit = new QLineEdit(reagentPlace);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 310, 231, 41));
        pushButton_3 = new QPushButton(reagentPlace);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 310, 71, 41));
        tableView_searchWindow = new QTableView(reagentPlace);
        tableView_searchWindow->setObjectName(QStringLiteral("tableView_searchWindow"));
        tableView_searchWindow->setGeometry(QRect(20, 370, 681, 151));

        retranslateUi(reagentPlace);

        QMetaObject::connectSlotsByName(reagentPlace);
    } // setupUi

    void retranslateUi(QWidget *reagentPlace)
    {
        reagentPlace->setWindowTitle(QApplication::translate("reagentPlace", "Form", 0));
        label->setText(QApplication::translate("reagentPlace", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_2->setText(QApplication::translate("reagentPlace", "\347\273\204\345\210\253\357\274\232     \347\224\250\346\210\267\357\274\232", 0));
        label_3->setText(QApplication::translate("reagentPlace", "\345\205\245\346\237\234", 0));
        pushButton_deletReagentPlace->setText(QApplication::translate("reagentPlace", "\345\210\240\351\231\244", 0));
        pushButton_sureOperate->setText(QApplication::translate("reagentPlace", "\347\241\256\350\256\244\346\211\247\350\241\214", 0));
        commandLinkButton_fromPlaceToChoicePage->setText(QApplication::translate("reagentPlace", "\350\277\224\345\233\236", 0));
        pushButton_3->setText(QApplication::translate("reagentPlace", "\346\243\200\347\264\242", 0));
    } // retranslateUi

};

namespace Ui {
    class reagentPlace: public Ui_reagentPlace {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REAGENTPLACE_H
