/********************************************************************************
** Form generated from reading UI file 'mainui.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINUI_H
#define UI_MAINUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainUI
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *label_usename;
    QTabWidget *tabWidget;
    QWidget *tag1;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QSpacerItem *horizontalSpacer_17;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QTextBrowser *textBrowser;
    QSpacerItem *verticalSpacer_10;
    QSpacerItem *horizontalSpacer_16;
    QWidget *tag2;
    QVBoxLayout *verticalLayout;
    QWidget *widget2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_7;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_11;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pBT_PutIn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pBt_Get;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pBt_Return;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pBt_desert;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pBt_change;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pBt_inspect;
    QSpacerItem *horizontalSpacer_10;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_12;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_6;
    QSpacerItem *verticalSpacer_12;
    QPushButton *pBt_leave;
    QSpacerItem *verticalSpacer_13;
    QSpacerItem *horizontalSpacer_18;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pBt_getTest;
    QSpacerItem *verticalSpacer_11;
    QPushButton *pBt_post;
    QWidget *tag3;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_7;
    QSpacerItem *verticalSpacer_8;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_14;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QSplitter *splitter;
    QLineEdit *lineEdit;
    QPushButton *pBt_search;
    QSpacerItem *horizontalSpacer_13;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_9;

    void setupUi(QMainWindow *MainUI)
    {
        if (MainUI->objectName().isEmpty())
            MainUI->setObjectName(QStringLiteral("MainUI"));
        MainUI->resize(807, 808);
        centralWidget = new QWidget(MainUI);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(26);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(20);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        label_usename = new QLabel(centralWidget);
        label_usename->setObjectName(QStringLiteral("label_usename"));
        label_usename->setFont(font1);

        horizontalLayout->addWidget(label_usename);

        horizontalLayout->setStretch(0, 10);
        horizontalLayout->setStretch(1, 80);
        horizontalLayout->setStretch(3, 10);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setStyleSheet(QStringLiteral(""));
        tag1 = new QWidget();
        tag1->setObjectName(QStringLiteral("tag1"));
        verticalLayout_11 = new QVBoxLayout(tag1);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_17);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(40);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(tag1);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(28);
        label_4->setFont(font2);

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        textBrowser = new QTextBrowser(tag1);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMinimumSize(QSize(600, 400));
        textBrowser->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_2->addWidget(textBrowser);


        verticalLayout_10->addLayout(verticalLayout_2);

        verticalSpacer_10 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_10);

        verticalLayout_10->setStretch(0, 1);
        verticalLayout_10->setStretch(1, 5);
        verticalLayout_10->setStretch(2, 1);

        horizontalLayout_9->addLayout(verticalLayout_10);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_16);

        horizontalLayout_9->setStretch(0, 1);
        horizontalLayout_9->setStretch(1, 5);
        horizontalLayout_9->setStretch(2, 1);

        verticalLayout_11->addLayout(horizontalLayout_9);

        tabWidget->addTab(tag1, QString());
        tag2 = new QWidget();
        tag2->setObjectName(QStringLiteral("tag2"));
        verticalLayout = new QVBoxLayout(tag2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget2 = new QWidget(tag2);
        widget2->setObjectName(QStringLiteral("widget2"));
        gridLayout = new QGridLayout(widget2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_11);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        pBT_PutIn = new QPushButton(widget2);
        pBT_PutIn->setObjectName(QStringLiteral("pBT_PutIn"));
        pBT_PutIn->setMinimumSize(QSize(100, 50));
        pBT_PutIn->setMaximumSize(QSize(100, 50));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(24);
        pBT_PutIn->setFont(font3);

        horizontalLayout_3->addWidget(pBT_PutIn);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        pBt_Get = new QPushButton(widget2);
        pBt_Get->setObjectName(QStringLiteral("pBt_Get"));
        pBt_Get->setMinimumSize(QSize(100, 50));
        pBt_Get->setMaximumSize(QSize(100, 50));
        pBt_Get->setFont(font3);

        horizontalLayout_3->addWidget(pBt_Get);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pBt_Return = new QPushButton(widget2);
        pBt_Return->setObjectName(QStringLiteral("pBt_Return"));
        pBt_Return->setMinimumSize(QSize(100, 50));
        pBt_Return->setMaximumSize(QSize(100, 50));
        pBt_Return->setFont(font3);

        horizontalLayout_3->addWidget(pBt_Return);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);
        horizontalLayout_3->setStretch(3, 1);
        horizontalLayout_3->setStretch(4, 1);

        verticalLayout_4->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pBt_desert = new QPushButton(widget2);
        pBt_desert->setObjectName(QStringLiteral("pBt_desert"));
        pBt_desert->setMinimumSize(QSize(100, 50));
        pBt_desert->setMaximumSize(QSize(100, 50));
        pBt_desert->setFont(font3);

        horizontalLayout_4->addWidget(pBt_desert);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        pBt_change = new QPushButton(widget2);
        pBt_change->setObjectName(QStringLiteral("pBt_change"));
        pBt_change->setMinimumSize(QSize(100, 50));
        pBt_change->setMaximumSize(QSize(100, 50));
        pBt_change->setFont(font3);

        horizontalLayout_4->addWidget(pBt_change);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);
        horizontalLayout_4->setStretch(3, 1);
        horizontalLayout_4->setStretch(4, 1);

        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pBt_inspect = new QPushButton(widget2);
        pBt_inspect->setObjectName(QStringLiteral("pBt_inspect"));
        pBt_inspect->setMinimumSize(QSize(100, 50));
        pBt_inspect->setMaximumSize(QSize(100, 50));
        pBt_inspect->setFont(font3);

        horizontalLayout_5->addWidget(pBt_inspect);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_10);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_5);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);


        horizontalLayout_6->addLayout(verticalLayout_4);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_12);

        horizontalLayout_6->setStretch(0, 1);
        horizontalLayout_6->setStretch(1, 1);
        horizontalLayout_6->setStretch(2, 1);

        verticalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalSpacer_12 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_12);

        pBt_leave = new QPushButton(widget2);
        pBt_leave->setObjectName(QStringLiteral("pBt_leave"));

        verticalLayout_6->addWidget(pBt_leave);

        verticalSpacer_13 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_13);

        verticalLayout_6->setStretch(0, 1);
        verticalLayout_6->setStretch(1, 2);
        verticalLayout_6->setStretch(2, 1);

        horizontalLayout_10->addLayout(verticalLayout_6);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_18);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pBt_getTest = new QPushButton(widget2);
        pBt_getTest->setObjectName(QStringLiteral("pBt_getTest"));

        verticalLayout_5->addWidget(pBt_getTest);

        verticalSpacer_11 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_11);

        pBt_post = new QPushButton(widget2);
        pBt_post->setObjectName(QStringLiteral("pBt_post"));

        verticalLayout_5->addWidget(pBt_post);

        verticalLayout_5->setStretch(0, 2);
        verticalLayout_5->setStretch(1, 1);
        verticalLayout_5->setStretch(2, 2);

        horizontalLayout_10->addLayout(verticalLayout_5);


        verticalLayout_8->addLayout(horizontalLayout_10);


        gridLayout->addLayout(verticalLayout_8, 0, 0, 1, 1);


        verticalLayout->addWidget(widget2);

        tabWidget->addTab(tag2, QString());
        tag3 = new QWidget();
        tag3->setObjectName(QStringLiteral("tag3"));
        verticalLayout_9 = new QVBoxLayout(tag3);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_14);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(10);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        splitter = new QSplitter(tag3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        lineEdit = new QLineEdit(splitter);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(300, 60));
        lineEdit->setMaximumSize(QSize(16777215, 16777215));
        lineEdit->setFont(font1);
        lineEdit->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(lineEdit);
        pBt_search = new QPushButton(splitter);
        pBt_search->setObjectName(QStringLiteral("pBt_search"));
        pBt_search->setMinimumSize(QSize(100, 60));
        pBt_search->setMaximumSize(QSize(16777215, 16777215));
        QFont font4;
        font4.setFamily(QStringLiteral("Agency FB"));
        font4.setPointSize(26);
        pBt_search->setFont(font4);
        pBt_search->setStyleSheet(QStringLiteral(""));
        splitter->addWidget(pBt_search);

        horizontalLayout_7->addWidget(splitter);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_13);


        verticalLayout_3->addLayout(horizontalLayout_7);

        tableView = new QTableView(tag3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setMinimumSize(QSize(660, 450));
        tableView->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_3->addWidget(tableView);


        horizontalLayout_8->addLayout(verticalLayout_3);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_15);

        horizontalLayout_8->setStretch(0, 1);
        horizontalLayout_8->setStretch(1, 5);
        horizontalLayout_8->setStretch(2, 1);

        verticalLayout_7->addLayout(horizontalLayout_8);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_9);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 5);
        verticalLayout_7->setStretch(2, 1);

        verticalLayout_9->addLayout(verticalLayout_7);

        tabWidget->addTab(tag3, QString());

        gridLayout_2->addWidget(tabWidget, 1, 0, 1, 1);

        MainUI->setCentralWidget(centralWidget);

        retranslateUi(MainUI);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainUI);
    } // setupUi

    void retranslateUi(QMainWindow *MainUI)
    {
        MainUI->setWindowTitle(QApplication::translate("MainUI", "MainUI", 0));
        label->setText(QApplication::translate("MainUI", "\350\257\225\345\211\202\346\237\234", 0));
        label_3->setText(QApplication::translate("MainUI", "USE:", 0));
        label_usename->setText(QApplication::translate("MainUI", "admin", 0));
        label_4->setText(QApplication::translate("MainUI", "\345\205\254\345\221\212\346\240\217", 0));
        tabWidget->setTabText(tabWidget->indexOf(tag1), QApplication::translate("MainUI", "\344\270\273\351\241\265", 0));
        pBT_PutIn->setText(QApplication::translate("MainUI", "\345\205\245\346\237\234", 0));
        pBt_Get->setText(QApplication::translate("MainUI", "\345\217\226\347\224\250", 0));
        pBt_Return->setText(QApplication::translate("MainUI", "\345\275\222\350\277\230", 0));
        pBt_desert->setText(QApplication::translate("MainUI", "\346\212\245\345\272\237", 0));
        pBt_change->setText(QApplication::translate("MainUI", "\346\233\277\346\215\242", 0));
        pBt_inspect->setText(QApplication::translate("MainUI", "\347\202\271\351\252\214", 0));
        pBt_leave->setText(QApplication::translate("MainUI", "\351\200\200\345\207\272", 0));
        pBt_getTest->setText(QApplication::translate("MainUI", "get  test", 0));
        pBt_post->setText(QApplication::translate("MainUI", "post  test", 0));
        tabWidget->setTabText(tabWidget->indexOf(tag2), QApplication::translate("MainUI", "\350\257\225\345\211\202\346\223\215\344\275\234", 0));
        lineEdit->setPlaceholderText(QApplication::translate("MainUI", "\350\257\267\350\276\223\345\205\245\350\257\225\345\211\202\345\220\215", 0));
        pBt_search->setText(QApplication::translate("MainUI", "\346\237\245\350\257\242", 0));
        tabWidget->setTabText(tabWidget->indexOf(tag3), QApplication::translate("MainUI", "\346\237\245\350\257\242", 0));
    } // retranslateUi

};

namespace Ui {
    class MainUI: public Ui_MainUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINUI_H
