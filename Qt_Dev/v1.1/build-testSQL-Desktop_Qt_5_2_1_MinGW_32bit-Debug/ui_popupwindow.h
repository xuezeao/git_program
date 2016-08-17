/********************************************************************************
** Form generated from reading UI file 'popupwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPWINDOW_H
#define UI_POPUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_popupWindow
{
public:
    QPushButton *pushButton_backPreviousOption;
    QPushButton *pushButton_jumpThisOption;
    QPushButton *pushButton_placedOKNext;
    QTableView *tableView;

    void setupUi(QDialog *popupWindow)
    {
        if (popupWindow->objectName().isEmpty())
            popupWindow->setObjectName(QStringLiteral("popupWindow"));
        popupWindow->resize(400, 300);
        pushButton_backPreviousOption = new QPushButton(popupWindow);
        pushButton_backPreviousOption->setObjectName(QStringLiteral("pushButton_backPreviousOption"));
        pushButton_backPreviousOption->setGeometry(QRect(40, 240, 75, 23));
        pushButton_jumpThisOption = new QPushButton(popupWindow);
        pushButton_jumpThisOption->setObjectName(QStringLiteral("pushButton_jumpThisOption"));
        pushButton_jumpThisOption->setGeometry(QRect(150, 240, 75, 23));
        pushButton_placedOKNext = new QPushButton(popupWindow);
        pushButton_placedOKNext->setObjectName(QStringLiteral("pushButton_placedOKNext"));
        pushButton_placedOKNext->setGeometry(QRect(250, 240, 111, 21));
        tableView = new QTableView(popupWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 10, 256, 192));

        retranslateUi(popupWindow);

        QMetaObject::connectSlotsByName(popupWindow);
    } // setupUi

    void retranslateUi(QDialog *popupWindow)
    {
        popupWindow->setWindowTitle(QApplication::translate("popupWindow", "Dialog", 0));
        pushButton_backPreviousOption->setText(QApplication::translate("popupWindow", "\350\277\224\345\233\236", 0));
        pushButton_jumpThisOption->setText(QApplication::translate("popupWindow", "\350\267\263\350\277\207", 0));
        pushButton_placedOKNext->setText(QApplication::translate("popupWindow", "\344\273\245\346\224\276\347\275\256\357\274\214\344\270\213\344\270\200\344\270\252", 0));
    } // retranslateUi

};

namespace Ui {
    class popupWindow: public Ui_popupWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPWINDOW_H
