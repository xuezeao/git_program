/********************************************************************************
** Form generated from reading UI file 'placereagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLACEREAGENT_H
#define UI_PLACEREAGENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_placeReagent
{
public:
    QPushButton *pushButton_inquire;
    QLineEdit *lineEdit;
    QTableView *tableView;
    QPushButton *pushButton_pushChange;
    QPushButton *pushButton_returnOption;
    QPushButton *pushButton_showAllSheet;
    QPushButton *pushButton_upOrder;
    QPushButton *pushButton_downOrder;
    QPushButton *pushButton_delCheckedRow;
    QPushButton *pushButton_addOption;

    void setupUi(QWidget *placeReagent)
    {
        if (placeReagent->objectName().isEmpty())
            placeReagent->setObjectName(QStringLiteral("placeReagent"));
        placeReagent->resize(595, 459);
        pushButton_inquire = new QPushButton(placeReagent);
        pushButton_inquire->setObjectName(QStringLiteral("pushButton_inquire"));
        pushButton_inquire->setGeometry(QRect(400, 30, 91, 31));
        lineEdit = new QLineEdit(placeReagent);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 20, 301, 41));
        tableView = new QTableView(placeReagent);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 100, 351, 261));
        pushButton_pushChange = new QPushButton(placeReagent);
        pushButton_pushChange->setObjectName(QStringLiteral("pushButton_pushChange"));
        pushButton_pushChange->setGeometry(QRect(420, 300, 75, 23));
        pushButton_returnOption = new QPushButton(placeReagent);
        pushButton_returnOption->setObjectName(QStringLiteral("pushButton_returnOption"));
        pushButton_returnOption->setGeometry(QRect(420, 350, 75, 23));
        pushButton_showAllSheet = new QPushButton(placeReagent);
        pushButton_showAllSheet->setObjectName(QStringLiteral("pushButton_showAllSheet"));
        pushButton_showAllSheet->setGeometry(QRect(420, 390, 75, 23));
        pushButton_upOrder = new QPushButton(placeReagent);
        pushButton_upOrder->setObjectName(QStringLiteral("pushButton_upOrder"));
        pushButton_upOrder->setGeometry(QRect(220, 390, 75, 23));
        pushButton_downOrder = new QPushButton(placeReagent);
        pushButton_downOrder->setObjectName(QStringLiteral("pushButton_downOrder"));
        pushButton_downOrder->setGeometry(QRect(310, 390, 75, 23));
        pushButton_delCheckedRow = new QPushButton(placeReagent);
        pushButton_delCheckedRow->setObjectName(QStringLiteral("pushButton_delCheckedRow"));
        pushButton_delCheckedRow->setGeometry(QRect(420, 440, 75, 23));
        pushButton_addOption = new QPushButton(placeReagent);
        pushButton_addOption->setObjectName(QStringLiteral("pushButton_addOption"));
        pushButton_addOption->setGeometry(QRect(510, 440, 75, 23));

        retranslateUi(placeReagent);

        QMetaObject::connectSlotsByName(placeReagent);
    } // setupUi

    void retranslateUi(QWidget *placeReagent)
    {
        placeReagent->setWindowTitle(QApplication::translate("placeReagent", "Form", 0));
        pushButton_inquire->setText(QApplication::translate("placeReagent", "\346\237\245\350\257\242", 0));
        pushButton_pushChange->setText(QApplication::translate("placeReagent", "\346\217\220\344\272\244\344\277\256\346\224\271", 0));
        pushButton_returnOption->setText(QApplication::translate("placeReagent", "\346\222\244\351\224\200\344\277\256\346\224\271", 0));
        pushButton_showAllSheet->setText(QApplication::translate("placeReagent", "\346\230\276\347\244\272\345\205\250\350\241\250", 0));
        pushButton_upOrder->setText(QApplication::translate("placeReagent", "\345\215\207\345\272\217", 0));
        pushButton_downOrder->setText(QApplication::translate("placeReagent", "\351\231\215\345\272\217", 0));
        pushButton_delCheckedRow->setText(QApplication::translate("placeReagent", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", 0));
        pushButton_addOption->setText(QApplication::translate("placeReagent", "\346\217\222\345\205\245\346\223\215\344\275\234", 0));
    } // retranslateUi

};

namespace Ui {
    class placeReagent: public Ui_placeReagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLACEREAGENT_H
