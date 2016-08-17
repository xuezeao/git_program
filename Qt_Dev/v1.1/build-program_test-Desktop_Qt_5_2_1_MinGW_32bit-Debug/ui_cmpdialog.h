/********************************************************************************
** Form generated from reading UI file 'cmpdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMPDIALOG_H
#define UI_CMPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_CMPDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CMPDialog)
    {
        if (CMPDialog->objectName().isEmpty())
            CMPDialog->setObjectName(QStringLiteral("CMPDialog"));
        CMPDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(CMPDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(CMPDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CMPDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CMPDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CMPDialog);
    } // setupUi

    void retranslateUi(QDialog *CMPDialog)
    {
        CMPDialog->setWindowTitle(QApplication::translate("CMPDialog", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class CMPDialog: public Ui_CMPDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMPDIALOG_H
