/********************************************************************************
** Form generated from reading UI file 'logininterface.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGININTERFACE_H
#define UI_LOGININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginInterface
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_accountEmail;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_LoginInterface;
    QPushButton *pushButton_openTestPage;

    void setupUi(QWidget *LoginInterface)
    {
        if (LoginInterface->objectName().isEmpty())
            LoginInterface->setObjectName(QStringLiteral("LoginInterface"));
        LoginInterface->resize(873, 532);
        label = new QLabel(LoginInterface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 170, 71, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(LoginInterface);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(170, 290, 71, 31));
        label_2->setFont(font);
        lineEdit_accountEmail = new QLineEdit(LoginInterface);
        lineEdit_accountEmail->setObjectName(QStringLiteral("lineEdit_accountEmail"));
        lineEdit_accountEmail->setGeometry(QRect(280, 170, 281, 51));
        lineEdit_accountEmail->setFont(font);
        lineEdit_accountEmail->setClearButtonEnabled(true);
        lineEdit_password = new QLineEdit(LoginInterface);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(280, 280, 281, 51));
        lineEdit_password->setFont(font);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setClearButtonEnabled(true);
        pushButton_LoginInterface = new QPushButton(LoginInterface);
        pushButton_LoginInterface->setObjectName(QStringLiteral("pushButton_LoginInterface"));
        pushButton_LoginInterface->setGeometry(QRect(450, 370, 161, 51));
        pushButton_LoginInterface->setFont(font);
        pushButton_openTestPage = new QPushButton(LoginInterface);
        pushButton_openTestPage->setObjectName(QStringLiteral("pushButton_openTestPage"));
        pushButton_openTestPage->setGeometry(QRect(730, 490, 131, 31));

        retranslateUi(LoginInterface);

        QMetaObject::connectSlotsByName(LoginInterface);
    } // setupUi

    void retranslateUi(QWidget *LoginInterface)
    {
        LoginInterface->setWindowTitle(QApplication::translate("LoginInterface", "Form", 0));
        label->setText(QApplication::translate("LoginInterface", "\350\264\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("LoginInterface", "\345\257\206\347\240\201\357\274\232", 0));
        lineEdit_accountEmail->setPlaceholderText(QApplication::translate("LoginInterface", "\350\257\267\350\276\223\345\205\245\351\202\256\347\256\261", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_password->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit_password->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        lineEdit_password->setInputMask(QString());
        lineEdit_password->setText(QString());
        lineEdit_password->setPlaceholderText(QApplication::translate("LoginInterface", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        pushButton_LoginInterface->setText(QApplication::translate("LoginInterface", "\347\231\273\345\205\245", 0));
        pushButton_openTestPage->setText(QApplication::translate("LoginInterface", "\346\265\213\350\257\225\351\241\265\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class LoginInterface: public Ui_LoginInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGININTERFACE_H
