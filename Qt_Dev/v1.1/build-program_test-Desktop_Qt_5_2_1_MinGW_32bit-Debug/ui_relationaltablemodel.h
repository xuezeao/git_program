/********************************************************************************
** Form generated from reading UI file 'relationaltablemodel.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RELATIONALTABLEMODEL_H
#define UI_RELATIONALTABLEMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_relationalTableModel
{
public:
    QTableView *tableView;

    void setupUi(QWidget *relationalTableModel)
    {
        if (relationalTableModel->objectName().isEmpty())
            relationalTableModel->setObjectName(QStringLiteral("relationalTableModel"));
        relationalTableModel->resize(642, 532);
        tableView = new QTableView(relationalTableModel);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(105, 90, 361, 311));

        retranslateUi(relationalTableModel);

        QMetaObject::connectSlotsByName(relationalTableModel);
    } // setupUi

    void retranslateUi(QWidget *relationalTableModel)
    {
        relationalTableModel->setWindowTitle(QApplication::translate("relationalTableModel", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class relationalTableModel: public Ui_relationalTableModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RELATIONALTABLEMODEL_H
