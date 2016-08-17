/********************************************************************************
** Form generated from reading UI file 'mdichild.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDICHILD_H
#define UI_MDICHILD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mdichild
{
public:

    void setupUi(QDialog *mdichild)
    {
        if (mdichild->objectName().isEmpty())
            mdichild->setObjectName(QStringLiteral("mdichild"));
        mdichild->resize(400, 300);

        retranslateUi(mdichild);

        QMetaObject::connectSlotsByName(mdichild);
    } // setupUi

    void retranslateUi(QDialog *mdichild)
    {
        mdichild->setWindowTitle(QApplication::translate("mdichild", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class mdichild: public Ui_mdichild {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDICHILD_H
