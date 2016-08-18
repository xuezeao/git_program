/********************************************************************************
** Form generated from reading UI file 'dialog_returnreagent.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_RETURNREAGENT_H
#define UI_DIALOG_RETURNREAGENT_H

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

class Ui_Dialog_returnReagent
{
public:
    QPushButton *pushButton_closeReturnReagentPage;
    QLabel *label_2;
    QLabel *label;
    QTextBrowser *textBrowser_showReagentName;
    QPushButton *pushButton_placedNext;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser_showReagentlocation;
    QLabel *label_3;
    QTextBrowser *textBrowser_showReagentVolume;
    QPushButton *pushButton_jumpThisOperate_returnReagent;

    void setupUi(QDialog *Dialog_returnReagent)
    {
        if (Dialog_returnReagent->objectName().isEmpty())
            Dialog_returnReagent->setObjectName(QStringLiteral("Dialog_returnReagent"));
        Dialog_returnReagent->resize(693, 468);
        pushButton_closeReturnReagentPage = new QPushButton(Dialog_returnReagent);
        pushButton_closeReturnReagentPage->setObjectName(QStringLiteral("pushButton_closeReturnReagentPage"));
        pushButton_closeReturnReagentPage->setGeometry(QRect(280, 360, 81, 31));
        label_2 = new QLabel(Dialog_returnReagent);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 140, 54, 12));
        label = new QLabel(Dialog_returnReagent);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        textBrowser_showReagentName = new QTextBrowser(Dialog_returnReagent);
        textBrowser_showReagentName->setObjectName(QStringLiteral("textBrowser_showReagentName"));
        textBrowser_showReagentName->setGeometry(QRect(280, 130, 171, 31));
        pushButton_placedNext = new QPushButton(Dialog_returnReagent);
        pushButton_placedNext->setObjectName(QStringLiteral("pushButton_placedNext"));
        pushButton_placedNext->setGeometry(QRect(390, 360, 101, 31));
        label_4 = new QLabel(Dialog_returnReagent);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 280, 54, 12));
        label_5 = new QLabel(Dialog_returnReagent);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(190, 210, 54, 12));
        textBrowser_showReagentlocation = new QTextBrowser(Dialog_returnReagent);
        textBrowser_showReagentlocation->setObjectName(QStringLiteral("textBrowser_showReagentlocation"));
        textBrowser_showReagentlocation->setGeometry(QRect(280, 270, 171, 31));
        label_3 = new QLabel(Dialog_returnReagent);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(520, 30, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        textBrowser_showReagentVolume = new QTextBrowser(Dialog_returnReagent);
        textBrowser_showReagentVolume->setObjectName(QStringLiteral("textBrowser_showReagentVolume"));
        textBrowser_showReagentVolume->setGeometry(QRect(280, 200, 171, 31));
        pushButton_jumpThisOperate_returnReagent = new QPushButton(Dialog_returnReagent);
        pushButton_jumpThisOperate_returnReagent->setObjectName(QStringLiteral("pushButton_jumpThisOperate_returnReagent"));
        pushButton_jumpThisOperate_returnReagent->setGeometry(QRect(160, 360, 81, 31));

        retranslateUi(Dialog_returnReagent);

        QMetaObject::connectSlotsByName(Dialog_returnReagent);
    } // setupUi

    void retranslateUi(QDialog *Dialog_returnReagent)
    {
        Dialog_returnReagent->setWindowTitle(QApplication::translate("Dialog_returnReagent", "Dialog", 0));
        pushButton_closeReturnReagentPage->setText(QApplication::translate("Dialog_returnReagent", "\347\273\223\346\235\237", 0));
        label_2->setText(QApplication::translate("Dialog_returnReagent", "\350\257\225\345\211\202\345\220\215\347\247\260\357\274\232", 0));
        label->setText(QApplication::translate("Dialog_returnReagent", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_placedNext->setText(QApplication::translate("Dialog_returnReagent", "\345\267\262\346\224\276\357\274\214\344\270\213\344\270\200\344\270\252", 0));
        label_4->setText(QApplication::translate("Dialog_returnReagent", "\346\221\206\346\224\276\344\275\215\347\275\256\357\274\232", 0));
        label_5->setText(QApplication::translate("Dialog_returnReagent", "\350\257\225\345\211\202\345\256\271\351\207\217\357\274\232", 0));
        label_3->setText(QApplication::translate("Dialog_returnReagent", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        pushButton_jumpThisOperate_returnReagent->setText(QApplication::translate("Dialog_returnReagent", "\350\267\263\350\277\207", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog_returnReagent: public Ui_Dialog_returnReagent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_RETURNREAGENT_H
