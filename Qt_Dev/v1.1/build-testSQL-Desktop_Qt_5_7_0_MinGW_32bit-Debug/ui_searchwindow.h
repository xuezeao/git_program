/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchWindow
{
public:
    QTableView *tableView_showSearch;
    QPushButton *pushButton_delThisNews;
    QGroupBox *groupBox;
    QPushButton *pushButton_sureNewsApply;
    QTableView *tableView_showNeedReagent;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_searchNews;
    QLineEdit *lineEdit_search;

    void setupUi(QWidget *searchWindow)
    {
        if (searchWindow->objectName().isEmpty())
            searchWindow->setObjectName(QStringLiteral("searchWindow"));
        searchWindow->resize(943, 570);
        tableView_showSearch = new QTableView(searchWindow);
        tableView_showSearch->setObjectName(QStringLiteral("tableView_showSearch"));
        tableView_showSearch->setGeometry(QRect(80, 360, 801, 191));
        pushButton_delThisNews = new QPushButton(searchWindow);
        pushButton_delThisNews->setObjectName(QStringLiteral("pushButton_delThisNews"));
        pushButton_delThisNews->setGeometry(QRect(850, 60, 75, 23));
        groupBox = new QGroupBox(searchWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 921, 271));
        pushButton_sureNewsApply = new QPushButton(groupBox);
        pushButton_sureNewsApply->setObjectName(QStringLiteral("pushButton_sureNewsApply"));
        pushButton_sureNewsApply->setGeometry(QRect(840, 210, 75, 23));
        tableView_showNeedReagent = new QTableView(groupBox);
        tableView_showNeedReagent->setObjectName(QStringLiteral("tableView_showNeedReagent"));
        tableView_showNeedReagent->setGeometry(QRect(10, 10, 811, 191));
        groupBox_2 = new QGroupBox(searchWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 270, 921, 291));
        pushButton_searchNews = new QPushButton(groupBox_2);
        pushButton_searchNews->setObjectName(QStringLiteral("pushButton_searchNews"));
        pushButton_searchNews->setGeometry(QRect(360, 20, 181, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        pushButton_searchNews->setFont(font);
        lineEdit_search = new QLineEdit(groupBox_2);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(70, 20, 281, 51));
        lineEdit_search->setFont(font);
        groupBox->raise();
        groupBox_2->raise();
        tableView_showSearch->raise();
        pushButton_delThisNews->raise();

        retranslateUi(searchWindow);

        QMetaObject::connectSlotsByName(searchWindow);
    } // setupUi

    void retranslateUi(QWidget *searchWindow)
    {
        searchWindow->setWindowTitle(QApplication::translate("searchWindow", "Form", 0));
        pushButton_delThisNews->setText(QApplication::translate("searchWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("searchWindow", "GroupBox", 0));
        pushButton_sureNewsApply->setText(QApplication::translate("searchWindow", "\347\241\256\350\256\244\345\271\266\347\224\263\350\257\267", 0));
        groupBox_2->setTitle(QApplication::translate("searchWindow", "GroupBox", 0));
        pushButton_searchNews->setText(QApplication::translate("searchWindow", "\346\237\245\350\257\242", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_search->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_search->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_search->setInputMask(QString());
        lineEdit_search->setPlaceholderText(QApplication::translate("searchWindow", "\350\257\267\350\276\223\345\205\245\350\257\225\345\211\202\345\220\215", 0));
    } // retranslateUi

};

namespace Ui {
    class searchWindow: public Ui_searchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
