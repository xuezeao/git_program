/********************************************************************************
** Form generated from reading UI file 'dialog_placeoperatepage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_PLACEOPERATEPAGE_H
#define UI_DIALOG_PLACEOPERATEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Dialog_placeoperatepage
{
public:
    QLabel *label_3;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QTextBrowser *textBrowser_showReagentName;
    QTextBrowser *textBrowser_showReagentVolume;
    QTextBrowser *textBrowser_showReagentlocation;
    QLabel *label_5;
    QPushButton *pushButton_placedNext;
    QPushButton *pushButton_jumpThisOption;
    QPushButton *pushButton_backPreviousOption;

    void setupUi(QDialog *Dialog_placeoperatepage)
    {
        if (Dialog_placeoperatepage->objectName().isEmpty())
            Dialog_placeoperatepage->setObjectName(QStringLiteral("Dialog_placeoperatepage"));
        Dialog_placeoperatepage->resize(706, 435);
        label_3 = new QLabel(Dialog_placeoperatepage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 20, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(12);
        label_3->setFont(font);
        label = new QLabel(Dialog_placeoperatepage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 271, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label->setFont(font1);
        label_4 = new QLabel(Dialog_placeoperatepage);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 270, 54, 12));
        label_2 = new QLabel(Dialog_placeoperatepage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 130, 54, 12));
        textBrowser_showReagentName = new QTextBrowser(Dialog_placeoperatepage);
        textBrowser_showReagentName->setObjectName(QStringLiteral("textBrowser_showReagentName"));
        textBrowser_showReagentName->setGeometry(QRect(280, 120, 171, 31));
        textBrowser_showReagentVolume = new QTextBrowser(Dialog_placeoperatepage);
        textBrowser_showReagentVolume->setObjectName(QStringLiteral("textBrowser_showReagentVolume"));
        textBrowser_showReagentVolume->setGeometry(QRect(280, 190, 171, 31));
        textBrowser_showReagentlocation = new QTextBrowser(Dialog_placeoperatepage);
        textBrowser_showReagentlocation->setObjectName(QStringLiteral("textBrowser_showReagentlocation"));
        textBrowser_showReagentlocation->setGeometry(QRect(280, 260, 171, 31));
        label_5 = new QLabel(Dialog_placeoperatepage);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 200, 54, 12));
        pushButton_placedNext = new QPushButton(Dialog_placeoperatepage);
        pushButton_placedNext->setObjectName(QStringLiteral("pushButton_placedNext"));
        pushButton_placedNext->setGeometry(QRect(450, 350, 101, 31));
        pushButton_jumpThisOption = new QPushButton(Dialog_placeoperatepage);
        pushButton_jumpThisOption->setObjectName(QStringLiteral("pushButton_jumpThisOption"));
        pushButton_jumpThisOption->setGeometry(QRect(220, 350, 81, 31));
        pushButton_backPreviousOption = new QPushButton(Dialog_placeoperatepage);
        pushButton_backPreviousOption->setObjectName(QStringLiteral("pushButton_backPreviousOption"));
        pushButton_backPreviousOption->setGeometry(QRect(340, 350, 81, 31));

        retranslateUi(Dialog_placeoperatepage);

        QMetaObject::connectSlotsByName(Dialog_placeoperatepage);
    } // setupUi

    void retranslateUi(QDialog *Dialog_placeoperatepage)
    {
        Dialog_placeoperatepage->setWindowTitle(QApplication::translate("Dialog_placeoperatepage", "Dialog", 0));
        label_3->setText(QApplication::translate("Dialog_placeoperatepage", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        label->setText(QApplication::translate("Dialog_placeoperatepage", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_4->setText(QApplication::translate("Dialog_placeoperatepage", "\346\221\206\346\224\276\344\275\215\347\275\256\357\274\232", 0));
        label_2->setText(QApplication::translate("Dialog_placeoperatepage", "\350\257\225\345\211\202\345\220\215\347\247\260\357\274\232", 0));
        label_5->setText(QApplication::translate("Dialog_placeoperatepage", "\350\257\225\345\211\202\345\256\271\351\207\217\357\274\232", 0));
        pushButton_placedNext->setText(QApplication::translate("Dialog_placeoperatepage", "\345\267\262\346\224\276\357\274\214\344\270\213\344\270\200\344\270\252", 0));
        pushButton_jumpThisOption->setText(QApplication::translate("Dialog_placeoperatepage", "\350\267\263\350\277\207", 0));
        pushButton_backPreviousOption->setText(QApplication::translate("Dialog_placeoperatepage", "\347\273\223\346\235\237", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_placeoperatepage: public Ui_Dialog_placeoperatepage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_PLACEOPERATEPAGE_H
