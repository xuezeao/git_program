/********************************************************************************
** Form generated from reading UI file 'testone.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTONE_H
#define UI_TESTONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_testone
{
public:
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QDialog *testone)
    {
        if (testone->objectName().isEmpty())
            testone->setObjectName(QStringLiteral("testone"));
        testone->resize(400, 300);
        tableView = new QTableView(testone);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(50, 70, 256, 192));
        pushButton = new QPushButton(testone);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 20, 75, 23));

        retranslateUi(testone);

        QMetaObject::connectSlotsByName(testone);
    } // setupUi

    void retranslateUi(QDialog *testone)
    {
        testone->setWindowTitle(QApplication::translate("testone", "Dialog", 0));
        pushButton->setText(QApplication::translate("testone", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class testone: public Ui_testone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTONE_H
