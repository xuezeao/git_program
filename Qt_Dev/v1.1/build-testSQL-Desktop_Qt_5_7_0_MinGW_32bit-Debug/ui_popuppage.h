/********************************************************************************
** Form generated from reading UI file 'popuppage.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POPUPPAGE_H
#define UI_POPUPPAGE_H

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

class Ui_popupPage
{
public:
    QPushButton *pushButton_placedNext;
    QPushButton *pushButton_jumpThisOption;
    QPushButton *pushButton_backPreviousOption;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextBrowser *textBrowser_showReagentName;
    QTextBrowser *textBrowser_showReagentVolume;
    QTextBrowser *textBrowser_showReagentlocation;
    QPushButton *pushButton;

    void setupUi(QDialog *popupPage)
    {
        if (popupPage->objectName().isEmpty())
            popupPage->setObjectName(QStringLiteral("popupPage"));
        popupPage->resize(508, 357);
        pushButton_placedNext = new QPushButton(popupPage);
        pushButton_placedNext->setObjectName(QStringLiteral("pushButton_placedNext"));
        pushButton_placedNext->setGeometry(QRect(280, 260, 101, 31));
        pushButton_jumpThisOption = new QPushButton(popupPage);
        pushButton_jumpThisOption->setObjectName(QStringLiteral("pushButton_jumpThisOption"));
        pushButton_jumpThisOption->setGeometry(QRect(180, 260, 81, 31));
        pushButton_backPreviousOption = new QPushButton(popupPage);
        pushButton_backPreviousOption->setObjectName(QStringLiteral("pushButton_backPreviousOption"));
        pushButton_backPreviousOption->setGeometry(QRect(80, 260, 81, 31));
        label = new QLabel(popupPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 121, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(popupPage);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 131, 41));
        label_2->setFont(font);
        label_3 = new QLabel(popupPage);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 170, 121, 41));
        label_3->setFont(font);
        textBrowser_showReagentName = new QTextBrowser(popupPage);
        textBrowser_showReagentName->setObjectName(QStringLiteral("textBrowser_showReagentName"));
        textBrowser_showReagentName->setGeometry(QRect(190, 30, 251, 51));
        textBrowser_showReagentVolume = new QTextBrowser(popupPage);
        textBrowser_showReagentVolume->setObjectName(QStringLiteral("textBrowser_showReagentVolume"));
        textBrowser_showReagentVolume->setGeometry(QRect(190, 100, 251, 51));
        textBrowser_showReagentlocation = new QTextBrowser(popupPage);
        textBrowser_showReagentlocation->setObjectName(QStringLiteral("textBrowser_showReagentlocation"));
        textBrowser_showReagentlocation->setGeometry(QRect(190, 170, 251, 61));
        pushButton = new QPushButton(popupPage);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(410, 300, 75, 23));

        retranslateUi(popupPage);

        QMetaObject::connectSlotsByName(popupPage);
    } // setupUi

    void retranslateUi(QDialog *popupPage)
    {
        popupPage->setWindowTitle(QApplication::translate("popupPage", "Dialog", 0));
        pushButton_placedNext->setText(QApplication::translate("popupPage", "\345\267\262\346\224\276\357\274\214\344\270\213\344\270\200\344\270\252", 0));
        pushButton_jumpThisOption->setText(QApplication::translate("popupPage", "\350\267\263\350\277\207", 0));
        pushButton_backPreviousOption->setText(QApplication::translate("popupPage", "\350\277\224\345\233\236", 0));
        label->setText(QApplication::translate("popupPage", "\350\257\225\345\211\202\345\220\215\347\247\260\357\274\232", 0));
        label_2->setText(QApplication::translate("popupPage", "\350\257\225\345\211\202\345\256\271\351\207\217\357\274\232", 0));
        label_3->setText(QApplication::translate("popupPage", "\346\221\206\346\224\276\344\275\215\347\275\256\357\274\232", 0));
        pushButton->setText(QApplication::translate("popupPage", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class popupPage: public Ui_popupPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POPUPPAGE_H
