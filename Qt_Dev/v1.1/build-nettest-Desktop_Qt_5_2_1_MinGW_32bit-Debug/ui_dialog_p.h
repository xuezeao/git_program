/********************************************************************************
** Form generated from reading UI file 'dialog_p.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_P_H
#define UI_DIALOG_P_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_dialog_P
{
public:
    QPushButton *pushButton_backPreviousOption;
    QPushButton *pushButton_jumpThisOption;
    QPushButton *pushButton_placedNext;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_showReagentName;
    QLineEdit *lineEdit_showReagentlocation;
    QLineEdit *lineEdit_showReagentVolume;

    void setupUi(QDialog *dialog_P)
    {
        if (dialog_P->objectName().isEmpty())
            dialog_P->setObjectName(QStringLiteral("dialog_P"));
        dialog_P->resize(638, 450);
        pushButton_backPreviousOption = new QPushButton(dialog_P);
        pushButton_backPreviousOption->setObjectName(QStringLiteral("pushButton_backPreviousOption"));
        pushButton_backPreviousOption->setGeometry(QRect(120, 350, 75, 23));
        pushButton_jumpThisOption = new QPushButton(dialog_P);
        pushButton_jumpThisOption->setObjectName(QStringLiteral("pushButton_jumpThisOption"));
        pushButton_jumpThisOption->setGeometry(QRect(220, 350, 75, 23));
        pushButton_placedNext = new QPushButton(dialog_P);
        pushButton_placedNext->setObjectName(QStringLiteral("pushButton_placedNext"));
        pushButton_placedNext->setGeometry(QRect(330, 350, 101, 31));
        label = new QLabel(dialog_P);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 110, 54, 12));
        label_2 = new QLabel(dialog_P);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 180, 54, 12));
        label_3 = new QLabel(dialog_P);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(120, 250, 54, 12));
        lineEdit_showReagentName = new QLineEdit(dialog_P);
        lineEdit_showReagentName->setObjectName(QStringLiteral("lineEdit_showReagentName"));
        lineEdit_showReagentName->setGeometry(QRect(210, 100, 221, 31));
        lineEdit_showReagentlocation = new QLineEdit(dialog_P);
        lineEdit_showReagentlocation->setObjectName(QStringLiteral("lineEdit_showReagentlocation"));
        lineEdit_showReagentlocation->setGeometry(QRect(210, 240, 221, 31));
        lineEdit_showReagentVolume = new QLineEdit(dialog_P);
        lineEdit_showReagentVolume->setObjectName(QStringLiteral("lineEdit_showReagentVolume"));
        lineEdit_showReagentVolume->setGeometry(QRect(210, 170, 221, 31));

        retranslateUi(dialog_P);

        QMetaObject::connectSlotsByName(dialog_P);
    } // setupUi

    void retranslateUi(QDialog *dialog_P)
    {
        dialog_P->setWindowTitle(QApplication::translate("dialog_P", "Dialog", 0));
        pushButton_backPreviousOption->setText(QApplication::translate("dialog_P", "\350\277\224\345\233\236", 0));
        pushButton_jumpThisOption->setText(QApplication::translate("dialog_P", "\350\267\263\350\277\207", 0));
        pushButton_placedNext->setText(QApplication::translate("dialog_P", "\345\267\262\346\224\276\357\274\214\344\270\213\344\270\200\344\270\252", 0));
        label->setText(QApplication::translate("dialog_P", "\350\257\225\345\211\202\345\220\215\347\247\260", 0));
        label_2->setText(QApplication::translate("dialog_P", "\350\257\225\345\211\202\345\256\271\351\207\217", 0));
        label_3->setText(QApplication::translate("dialog_P", "\346\221\206\346\224\276\344\275\215\347\275\256", 0));
    } // retranslateUi

};

namespace Ui {
    class dialog_P: public Ui_dialog_P {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_P_H
