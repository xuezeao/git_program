/********************************************************************************
** Form generated from reading UI file 'dialog_checkreagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHECKREAGENT_H
#define UI_DIALOG_CHECKREAGENT_H

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

class Ui_Dialog_checkreagent
{
public:
    QPushButton *pushButton_checkOK_checkReagent;
    QLabel *label_2;
    QLabel *label;
    QTextBrowser *textBrowser_showReagentName;
    QPushButton *pushButton_checkRight_checkReagent;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser_showReagentlocation;
    QLabel *label_3;
    QTextBrowser *textBrowser_showReagentVolume;
    QPushButton *pushButton_errorGetOut_checkreagent;

    void setupUi(QDialog *Dialog_checkreagent)
    {
        if (Dialog_checkreagent->objectName().isEmpty())
            Dialog_checkreagent->setObjectName(QStringLiteral("Dialog_checkreagent"));
        Dialog_checkreagent->resize(696, 484);
        pushButton_checkOK_checkReagent = new QPushButton(Dialog_checkreagent);
        pushButton_checkOK_checkReagent->setObjectName(QStringLiteral("pushButton_checkOK_checkReagent"));
        pushButton_checkOK_checkReagent->setGeometry(QRect(310, 370, 81, 31));
        label_2 = new QLabel(Dialog_checkreagent);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(180, 150, 54, 12));
        label = new QLabel(Dialog_checkreagent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 30, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        textBrowser_showReagentName = new QTextBrowser(Dialog_checkreagent);
        textBrowser_showReagentName->setObjectName(QStringLiteral("textBrowser_showReagentName"));
        textBrowser_showReagentName->setGeometry(QRect(270, 140, 171, 31));
        pushButton_checkRight_checkReagent = new QPushButton(Dialog_checkreagent);
        pushButton_checkRight_checkReagent->setObjectName(QStringLiteral("pushButton_checkRight_checkReagent"));
        pushButton_checkRight_checkReagent->setGeometry(QRect(440, 370, 101, 31));
        label_4 = new QLabel(Dialog_checkreagent);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(180, 290, 54, 12));
        label_5 = new QLabel(Dialog_checkreagent);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(180, 220, 54, 12));
        textBrowser_showReagentlocation = new QTextBrowser(Dialog_checkreagent);
        textBrowser_showReagentlocation->setObjectName(QStringLiteral("textBrowser_showReagentlocation"));
        textBrowser_showReagentlocation->setGeometry(QRect(270, 280, 171, 31));
        label_3 = new QLabel(Dialog_checkreagent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(510, 40, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        textBrowser_showReagentVolume = new QTextBrowser(Dialog_checkreagent);
        textBrowser_showReagentVolume->setObjectName(QStringLiteral("textBrowser_showReagentVolume"));
        textBrowser_showReagentVolume->setGeometry(QRect(270, 210, 171, 31));
        pushButton_errorGetOut_checkreagent = new QPushButton(Dialog_checkreagent);
        pushButton_errorGetOut_checkreagent->setObjectName(QStringLiteral("pushButton_errorGetOut_checkreagent"));
        pushButton_errorGetOut_checkreagent->setGeometry(QRect(170, 370, 81, 31));

        retranslateUi(Dialog_checkreagent);

        QMetaObject::connectSlotsByName(Dialog_checkreagent);
    } // setupUi

    void retranslateUi(QDialog *Dialog_checkreagent)
    {
        Dialog_checkreagent->setWindowTitle(QApplication::translate("Dialog_checkreagent", "Dialog", 0));
        pushButton_checkOK_checkReagent->setText(QApplication::translate("Dialog_checkreagent", "\347\273\223\346\235\237\347\202\271\351\252\214", 0));
        label_2->setText(QApplication::translate("Dialog_checkreagent", "\350\257\225\345\211\202\345\220\215\347\247\260\357\274\232", 0));
        label->setText(QApplication::translate("Dialog_checkreagent", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_checkRight_checkReagent->setText(QApplication::translate("Dialog_checkreagent", "\346\255\243\347\241\256\357\274\214\344\270\213\344\270\200\344\270\252", 0));
        label_4->setText(QApplication::translate("Dialog_checkreagent", "\346\221\206\346\224\276\344\275\215\347\275\256\357\274\232", 0));
        label_5->setText(QApplication::translate("Dialog_checkreagent", "\350\257\225\345\211\202\345\256\271\351\207\217\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog_checkreagent", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        pushButton_errorGetOut_checkreagent->setText(QApplication::translate("Dialog_checkreagent", "\351\224\231\350\257\257\345\217\226\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_checkreagent: public Ui_Dialog_checkreagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHECKREAGENT_H
