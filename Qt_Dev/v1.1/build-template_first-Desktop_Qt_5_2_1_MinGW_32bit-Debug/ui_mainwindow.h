/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab_MainUI;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QWidget *tab_reagentOption;
    QPushButton *pushButton_reagentPlace;
    QPushButton *pushButton_reagentGet;
    QPushButton *pushButton_reagentReturn;
    QPushButton *pushButton_openReagentAbandon;
    QPushButton *pushButton_reagentReplace;
    QPushButton *pushButton_limitReagentOption;
    QPushButton *pushButton_reagentCheck;
    QWidget *tab_searchNews;
    QPushButton *pushButton_searchReagentName;
    QLineEdit *lineEdit;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(998, 560);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 0, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(770, 0, 161, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label_3->setFont(font1);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 50, 1001, 521));
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::ArrowCursor));
        tabWidget->setLayoutDirection(Qt::LeftToRight);
        tabWidget->setAutoFillBackground(true);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tab_MainUI = new QWidget();
        tab_MainUI->setObjectName(QStringLiteral("tab_MainUI"));
        textEdit = new QTextEdit(tab_MainUI);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(130, 20, 611, 201));
        textEdit_2 = new QTextEdit(tab_MainUI);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(130, 250, 611, 201));
        tabWidget->addTab(tab_MainUI, QString());
        tab_reagentOption = new QWidget();
        tab_reagentOption->setObjectName(QStringLiteral("tab_reagentOption"));
        pushButton_reagentPlace = new QPushButton(tab_reagentOption);
        pushButton_reagentPlace->setObjectName(QStringLiteral("pushButton_reagentPlace"));
        pushButton_reagentPlace->setGeometry(QRect(190, 80, 121, 61));
        pushButton_reagentGet = new QPushButton(tab_reagentOption);
        pushButton_reagentGet->setObjectName(QStringLiteral("pushButton_reagentGet"));
        pushButton_reagentGet->setGeometry(QRect(390, 80, 121, 61));
        pushButton_reagentReturn = new QPushButton(tab_reagentOption);
        pushButton_reagentReturn->setObjectName(QStringLiteral("pushButton_reagentReturn"));
        pushButton_reagentReturn->setGeometry(QRect(590, 80, 131, 61));
        pushButton_openReagentAbandon = new QPushButton(tab_reagentOption);
        pushButton_openReagentAbandon->setObjectName(QStringLiteral("pushButton_openReagentAbandon"));
        pushButton_openReagentAbandon->setGeometry(QRect(270, 170, 141, 61));
        pushButton_reagentReplace = new QPushButton(tab_reagentOption);
        pushButton_reagentReplace->setObjectName(QStringLiteral("pushButton_reagentReplace"));
        pushButton_reagentReplace->setGeometry(QRect(470, 170, 131, 61));
        pushButton_limitReagentOption = new QPushButton(tab_reagentOption);
        pushButton_limitReagentOption->setObjectName(QStringLiteral("pushButton_limitReagentOption"));
        pushButton_limitReagentOption->setGeometry(QRect(230, 260, 181, 71));
        pushButton_reagentCheck = new QPushButton(tab_reagentOption);
        pushButton_reagentCheck->setObjectName(QStringLiteral("pushButton_reagentCheck"));
        pushButton_reagentCheck->setGeometry(QRect(500, 260, 151, 71));
        tabWidget->addTab(tab_reagentOption, QString());
        tab_searchNews = new QWidget();
        tab_searchNews->setObjectName(QStringLiteral("tab_searchNews"));
        pushButton_searchReagentName = new QPushButton(tab_searchNews);
        pushButton_searchReagentName->setObjectName(QStringLiteral("pushButton_searchReagentName"));
        pushButton_searchReagentName->setGeometry(QRect(390, 20, 101, 61));
        lineEdit = new QLineEdit(tab_searchNews);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 20, 311, 61));
        tableView = new QTableView(tab_searchNews);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 140, 801, 291));
        tabWidget->addTab(tab_searchNews, QString());
        MainWindow->setCentralWidget(centralWidget);
        tabWidget->raise();
        label->raise();
        label_3->raise();

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_3->setText(QApplication::translate("MainWindow", "\347\273\204\345\210\253\357\274\232            \347\224\250\346\210\267\357\274\232", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_MainUI), QApplication::translate("MainWindow", "\344\270\273\351\241\265", 0));
        pushButton_reagentPlace->setText(QApplication::translate("MainWindow", "\345\205\245\346\237\234", 0));
        pushButton_reagentGet->setText(QApplication::translate("MainWindow", "\345\217\226\347\224\250", 0));
        pushButton_reagentReturn->setText(QApplication::translate("MainWindow", "\345\275\222\350\277\230", 0));
        pushButton_openReagentAbandon->setText(QApplication::translate("MainWindow", "\346\212\245\345\272\237", 0));
        pushButton_reagentReplace->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242", 0));
        pushButton_limitReagentOption->setText(QApplication::translate("MainWindow", "\347\256\241\345\210\266\350\257\225\345\211\202\346\223\215\344\275\234", 0));
        pushButton_reagentCheck->setText(QApplication::translate("MainWindow", "\350\257\225\345\211\202\347\202\271\351\252\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_reagentOption), QApplication::translate("MainWindow", "\350\257\225\345\211\202\346\223\215\344\275\234", 0));
        pushButton_searchReagentName->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\350\257\225\345\211\202\345\220\215", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_searchNews), QApplication::translate("MainWindow", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
