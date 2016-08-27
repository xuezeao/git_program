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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
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
    QGroupBox *groupBox;
    QPushButton *pushButton_sureNewsApply;
    QTableView *tableView_showNeedReagent;
    QCommandLinkButton *commandLinkButton;
    QPushButton *pushButton_delThisNews;
    QLabel *label_title;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_searchNews;
    QLineEdit *lineEdit_search;
    QPushButton *pushButton_delThisNews_2;
    QTableView *tableView_showSearch;
    QFrame *frame;

    void setupUi(QWidget *searchWindow)
    {
        if (searchWindow->objectName().isEmpty())
            searchWindow->setObjectName(QStringLiteral("searchWindow"));
        searchWindow->resize(943, 570);
        groupBox = new QGroupBox(searchWindow);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 941, 261));
        pushButton_sureNewsApply = new QPushButton(groupBox);
        pushButton_sureNewsApply->setObjectName(QStringLiteral("pushButton_sureNewsApply"));
        pushButton_sureNewsApply->setGeometry(QRect(830, 50, 111, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(16);
        pushButton_sureNewsApply->setFont(font);
        tableView_showNeedReagent = new QTableView(groupBox);
        tableView_showNeedReagent->setObjectName(QStringLiteral("tableView_showNeedReagent"));
        tableView_showNeedReagent->setGeometry(QRect(10, 50, 811, 191));
        commandLinkButton = new QCommandLinkButton(groupBox);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 10, 172, 41));
        pushButton_delThisNews = new QPushButton(groupBox);
        pushButton_delThisNews->setObjectName(QStringLiteral("pushButton_delThisNews"));
        pushButton_delThisNews->setGeometry(QRect(830, 200, 111, 41));
        pushButton_delThisNews->setFont(font);
        label_title = new QLabel(groupBox);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(370, 0, 81, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label_title->setFont(font1);
        groupBox_2 = new QGroupBox(searchWindow);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 270, 941, 301));
        pushButton_searchNews = new QPushButton(groupBox_2);
        pushButton_searchNews->setObjectName(QStringLiteral("pushButton_searchNews"));
        pushButton_searchNews->setGeometry(QRect(290, 20, 101, 51));
        pushButton_searchNews->setFont(font1);
        lineEdit_search = new QLineEdit(groupBox_2);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(10, 20, 381, 51));
        lineEdit_search->setFont(font1);
        pushButton_delThisNews_2 = new QPushButton(groupBox_2);
        pushButton_delThisNews_2->setObjectName(QStringLiteral("pushButton_delThisNews_2"));
        pushButton_delThisNews_2->setGeometry(QRect(840, 80, 101, 41));
        pushButton_delThisNews_2->setFont(font);
        tableView_showSearch = new QTableView(groupBox_2);
        tableView_showSearch->setObjectName(QStringLiteral("tableView_showSearch"));
        tableView_showSearch->setGeometry(QRect(10, 80, 821, 211));
        lineEdit_search->raise();
        pushButton_searchNews->raise();
        pushButton_delThisNews_2->raise();
        tableView_showSearch->raise();
        frame = new QFrame(searchWindow);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 941, 571));
        frame->setStyleSheet(QStringLiteral("background-image: url(:/image/background1.jpg);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        groupBox->raise();
        groupBox->raise();
        frame->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(searchWindow);

        QMetaObject::connectSlotsByName(searchWindow);
    } // setupUi

    void retranslateUi(QWidget *searchWindow)
    {
        searchWindow->setWindowTitle(QApplication::translate("searchWindow", "Form", 0));
        groupBox->setTitle(QApplication::translate("searchWindow", "\346\211\247\350\241\214\346\241\206", 0));
        pushButton_sureNewsApply->setText(QApplication::translate("searchWindow", "\347\241\256\350\256\244", 0));
        commandLinkButton->setText(QApplication::translate("searchWindow", "\350\277\224\345\233\236", 0));
        pushButton_delThisNews->setText(QApplication::translate("searchWindow", "\344\270\200\351\224\256\345\210\240\351\231\244", 0));
        label_title->setText(QApplication::translate("searchWindow", "TextLabel", 0));
        groupBox_2->setTitle(QApplication::translate("searchWindow", "\346\243\200\347\264\242\346\241\206", 0));
        pushButton_searchNews->setText(QApplication::translate("searchWindow", "\346\237\245\350\257\242", 0));
#ifndef QT_NO_STATUSTIP
        lineEdit_search->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_ACCESSIBILITY
        lineEdit_search->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        lineEdit_search->setInputMask(QString());
        lineEdit_search->setPlaceholderText(QApplication::translate("searchWindow", "\350\257\267\350\276\223\345\205\245\350\257\225\345\211\202\345\220\215", 0));
        pushButton_delThisNews_2->setText(QApplication::translate("searchWindow", "\344\270\200\351\224\256\346\267\273\345\212\240", 0));
    } // retranslateUi

};

namespace Ui {
    class searchWindow: public Ui_searchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
