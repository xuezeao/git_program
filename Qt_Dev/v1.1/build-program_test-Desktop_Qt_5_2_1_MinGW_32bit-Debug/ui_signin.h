/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signIn
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_acount;
    QLineEdit *lineEdit_password;
    QPushButton *pushButton_signIN;

    void setupUi(QWidget *signIn)
    {
        if (signIn->objectName().isEmpty())
            signIn->setObjectName(QStringLiteral("signIn"));
        signIn->resize(400, 300);
        groupBox = new QGroupBox(signIn);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(139, 50, 231, 151));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 54, 12));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 54, 12));
        lineEdit_acount = new QLineEdit(groupBox);
        lineEdit_acount->setObjectName(QStringLiteral("lineEdit_acount"));
        lineEdit_acount->setGeometry(QRect(90, 40, 113, 20));
        lineEdit_acount->setClearButtonEnabled(true);
        lineEdit_password = new QLineEdit(groupBox);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(90, 100, 113, 20));
        lineEdit_password->setEchoMode(QLineEdit::Password);
        lineEdit_password->setClearButtonEnabled(true);
        pushButton_signIN = new QPushButton(signIn);
        pushButton_signIN->setObjectName(QStringLiteral("pushButton_signIN"));
        pushButton_signIN->setGeometry(QRect(260, 230, 75, 23));

        retranslateUi(signIn);

        QMetaObject::connectSlotsByName(signIn);
    } // setupUi

    void retranslateUi(QWidget *signIn)
    {
        signIn->setWindowTitle(QApplication::translate("signIn", "Form", 0));
        groupBox->setTitle(QApplication::translate("signIn", "\347\231\273\345\205\245", 0));
        label->setText(QApplication::translate("signIn", "\350\264\246\345\217\267\357\274\232", 0));
        label_2->setText(QApplication::translate("signIn", "\345\257\206\347\240\201\357\274\232", 0));
        lineEdit_acount->setPlaceholderText(QApplication::translate("signIn", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267", 0));
        lineEdit_password->setPlaceholderText(QApplication::translate("signIn", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0));
        pushButton_signIN->setText(QApplication::translate("signIn", "\347\231\273\345\205\245", 0));
    } // retranslateUi

};

namespace Ui {
    class signIn: public Ui_signIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
