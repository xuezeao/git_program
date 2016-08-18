/********************************************************************************
** Form generated from reading UI file 'comandhttptest.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMANDHTTPTEST_H
#define UI_COMANDHTTPTEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comandhttptest
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QPushButton *pushButton_3;
    QLabel *label;
    QCommandLinkButton *commandLinkButton_backLoginPage;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *comandhttptest)
    {
        if (comandhttptest->objectName().isEmpty())
            comandhttptest->setObjectName(QStringLiteral("comandhttptest"));
        comandhttptest->resize(587, 336);
        tabWidget = new QTabWidget(comandhttptest);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 601, 351));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(60, 80, 331, 221));
        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 30, 131, 21));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 30, 75, 23));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 41, 16));
        commandLinkButton_backLoginPage = new QCommandLinkButton(tab);
        commandLinkButton_backLoginPage->setObjectName(QStringLiteral("commandLinkButton_backLoginPage"));
        commandLinkButton_backLoginPage->setGeometry(QRect(500, 10, 71, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(80, 100, 371, 181));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(110, 40, 121, 31));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 40, 121, 31));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(comandhttptest);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(comandhttptest);
    } // setupUi

    void retranslateUi(QWidget *comandhttptest)
    {
        comandhttptest->setWindowTitle(QApplication::translate("comandhttptest", "Form", 0));
        pushButton_3->setText(QApplication::translate("comandhttptest", "\346\211\223\345\274\200", 0));
        label->setText(QApplication::translate("comandhttptest", "\344\270\262\345\217\243\357\274\232", 0));
        commandLinkButton_backLoginPage->setText(QApplication::translate("comandhttptest", "\350\277\224\345\233\236", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("comandhttptest", "COM", 0));
        pushButton->setText(QApplication::translate("comandhttptest", "Get", 0));
        pushButton_2->setText(QApplication::translate("comandhttptest", "post", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("comandhttptest", "HTTP", 0));
    } // retranslateUi

};

namespace Ui {
    class comandhttptest: public Ui_comandhttptest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMANDHTTPTEST_H
