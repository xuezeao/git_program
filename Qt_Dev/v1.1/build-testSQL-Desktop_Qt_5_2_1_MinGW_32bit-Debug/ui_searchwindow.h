/********************************************************************************
** Form generated from reading UI file 'searchwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchWindow
{
public:
    QTableView *tableView_showSearch;
    QLineEdit *lineEdit_search;
    QLabel *label;
    QTableView *tableView_showNeedReagent;
    QPushButton *pushButton_delThisNews;
    QGroupBox *groupBox;
    QPushButton *pushButton_sureNewsApply;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_addChoiceReagent;
    QPushButton *pushButton_searchNews;

    void setupUi(QWidget *searchWindow)
    {
        if (searchWindow->objectName().isEmpty())
            searchWindow->setObjectName(QStringLiteral("searchWindow"));
        searchWindow->resize(943, 570);
        tableView_showSearch = new QTableView(searchWindow);
        tableView_showSearch->setObjectName(QStringLiteral("tableView_showSearch"));
        tableView_showSearch->setGeometry(QRect(80, 360, 801, 191));
        lineEdit_search = new QLineEdit(searchWindow);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(160, 290, 281, 51));
        label = new QLabel(searchWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 290, 71, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label->setFont(font);
        tableView_showNeedReagent = new QTableView(searchWindow);
        tableView_showNeedReagent->setObjectName(QStringLiteral("tableView_showNeedReagent"));
        tableView_showNeedReagent->setGeometry(QRect(20, 20, 811, 221));
        pushButton_delThisNews = new QPushButton(searchWindow);
        pushButton_delThisNews->setObjectName(QStringLiteral("pushButton_delThisNews"));
        pushButton_delThisNews->setGeometry(QRect(850, 60, 75, 23));
        groupBox = new QGroupBox(searchWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 921, 271));
        pushButton_sureNewsApply = new QPushButton(groupBox);
        pushButton_sureNewsApply->setObjectName(QStringLiteral("pushButton_sureNewsApply"));
        pushButton_sureNewsApply->setGeometry(QRect(840, 210, 75, 23));
        groupBox_2 = new QGroupBox(searchWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 270, 921, 291));
        pushButton_addChoiceReagent = new QPushButton(groupBox_2);
        pushButton_addChoiceReagent->setObjectName(QStringLiteral("pushButton_addChoiceReagent"));
        pushButton_addChoiceReagent->setGeometry(QRect(660, 20, 181, 51));
        pushButton_addChoiceReagent->setFont(font);
        pushButton_searchNews = new QPushButton(groupBox_2);
        pushButton_searchNews->setObjectName(QStringLiteral("pushButton_searchNews"));
        pushButton_searchNews->setGeometry(QRect(460, 20, 181, 51));
        pushButton_searchNews->setFont(font);
        groupBox->raise();
        groupBox_2->raise();
        tableView_showSearch->raise();
        lineEdit_search->raise();
        label->raise();
        tableView_showNeedReagent->raise();
        pushButton_delThisNews->raise();

        retranslateUi(searchWindow);

        QMetaObject::connectSlotsByName(searchWindow);
    } // setupUi

    void retranslateUi(QWidget *searchWindow)
    {
        searchWindow->setWindowTitle(QApplication::translate("searchWindow", "Form", 0));
        label->setText(QApplication::translate("searchWindow", "\346\237\245\350\257\242:", 0));
        pushButton_delThisNews->setText(QApplication::translate("searchWindow", "\345\210\240\351\231\244\351\200\211\344\270\255\344\277\241\346\201\257", 0));
        groupBox->setTitle(QApplication::translate("searchWindow", "GroupBox", 0));
        pushButton_sureNewsApply->setText(QApplication::translate("searchWindow", "\347\241\256\350\256\244\345\271\266\347\224\263\350\257\267", 0));
        groupBox_2->setTitle(QApplication::translate("searchWindow", "GroupBox", 0));
        pushButton_addChoiceReagent->setText(QApplication::translate("searchWindow", "\346\267\273\345\212\240\351\200\211\344\270\255\344\277\241\346\201\257", 0));
        pushButton_searchNews->setText(QApplication::translate("searchWindow", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class searchWindow: public Ui_searchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
