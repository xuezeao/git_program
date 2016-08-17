/********************************************************************************
** Form generated from reading UI file 'testcomandhttp.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTCOMANDHTTP_H
#define UI_TESTCOMANDHTTP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testComAndHttp
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTabWidget *test;
    QWidget *com;
    QComboBox *comboBox_ChoiceCom;
    QLabel *label;
    QPushButton *pushButton_OpenCom;
    QPushButton *pushButton_BackMainUi;
    QListWidget *listWidget_Com;
    QWidget *http;
    QGroupBox *groupBox_2;
    QPushButton *pushButton_httpGet;
    QPushButton *pushButton_httpPost;
    QTextEdit *textEditPostText;

    void setupUi(QWidget *testComAndHttp)
    {
        if (testComAndHttp->objectName().isEmpty())
            testComAndHttp->setObjectName(QStringLiteral("testComAndHttp"));
        testComAndHttp->resize(741, 448);
        gridLayoutWidget = new QWidget(testComAndHttp);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 741, 451));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        test = new QTabWidget(gridLayoutWidget);
        test->setObjectName(QStringLiteral("test"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(test->sizePolicy().hasHeightForWidth());
        test->setSizePolicy(sizePolicy);
        com = new QWidget();
        com->setObjectName(QStringLiteral("com"));
        comboBox_ChoiceCom = new QComboBox(com);
        comboBox_ChoiceCom->setObjectName(QStringLiteral("comboBox_ChoiceCom"));
        comboBox_ChoiceCom->setGeometry(QRect(140, 50, 161, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(14);
        comboBox_ChoiceCom->setFont(font);
        label = new QLabel(com);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 50, 41, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Agency FB"));
        font1.setPointSize(12);
        label->setFont(font1);
        pushButton_OpenCom = new QPushButton(com);
        pushButton_OpenCom->setObjectName(QStringLiteral("pushButton_OpenCom"));
        pushButton_OpenCom->setGeometry(QRect(320, 50, 150, 31));
        pushButton_OpenCom->setMaximumSize(QSize(150, 100));
        pushButton_BackMainUi = new QPushButton(com);
        pushButton_BackMainUi->setObjectName(QStringLiteral("pushButton_BackMainUi"));
        pushButton_BackMainUi->setGeometry(QRect(580, 20, 75, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(14);
        pushButton_BackMainUi->setFont(font2);
        listWidget_Com = new QListWidget(com);
        listWidget_Com->setObjectName(QStringLiteral("listWidget_Com"));
        listWidget_Com->setGeometry(QRect(50, 100, 439, 269));
        test->addTab(com, QString());
        http = new QWidget();
        http->setObjectName(QStringLiteral("http"));
        groupBox_2 = new QGroupBox(http);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 30, 271, 81));
        pushButton_httpGet = new QPushButton(groupBox_2);
        pushButton_httpGet->setObjectName(QStringLiteral("pushButton_httpGet"));
        pushButton_httpGet->setGeometry(QRect(20, 30, 111, 31));
        pushButton_httpGet->setMaximumSize(QSize(200, 100));
        pushButton_httpPost = new QPushButton(groupBox_2);
        pushButton_httpPost->setObjectName(QStringLiteral("pushButton_httpPost"));
        pushButton_httpPost->setGeometry(QRect(150, 30, 111, 31));
        pushButton_httpPost->setMaximumSize(QSize(200, 100));
        textEditPostText = new QTextEdit(http);
        textEditPostText->setObjectName(QStringLiteral("textEditPostText"));
        textEditPostText->setGeometry(QRect(70, 130, 289, 209));
        test->addTab(http, QString());

        gridLayout->addWidget(test, 0, 1, 1, 1);


        retranslateUi(testComAndHttp);

        test->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(testComAndHttp);
    } // setupUi

    void retranslateUi(QWidget *testComAndHttp)
    {
        testComAndHttp->setWindowTitle(QApplication::translate("testComAndHttp", "Form", 0));
        comboBox_ChoiceCom->clear();
        comboBox_ChoiceCom->insertItems(0, QStringList()
         << QApplication::translate("testComAndHttp", "COM1", 0)
         << QApplication::translate("testComAndHttp", "COM2", 0)
         << QApplication::translate("testComAndHttp", "COM3", 0)
         << QApplication::translate("testComAndHttp", "COM4", 0)
         << QApplication::translate("testComAndHttp", "COM5", 0)
         << QApplication::translate("testComAndHttp", "COM6", 0)
         << QApplication::translate("testComAndHttp", "COM7", 0)
         << QApplication::translate("testComAndHttp", "COM8", 0)
         << QApplication::translate("testComAndHttp", "COM9", 0)
         << QApplication::translate("testComAndHttp", "COM10", 0)
        );
        label->setText(QApplication::translate("testComAndHttp", "\344\270\262\345\217\243:", 0));
        pushButton_OpenCom->setText(QApplication::translate("testComAndHttp", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        pushButton_BackMainUi->setText(QApplication::translate("testComAndHttp", "\350\277\224\345\233\236", 0));
        test->setTabText(test->indexOf(com), QApplication::translate("testComAndHttp", "com", 0));
        groupBox_2->setTitle(QApplication::translate("testComAndHttp", "HTTP", 0));
        pushButton_httpGet->setText(QApplication::translate("testComAndHttp", "Get", 0));
        pushButton_httpPost->setText(QApplication::translate("testComAndHttp", "Post", 0));
        test->setTabText(test->indexOf(http), QApplication::translate("testComAndHttp", "http", 0));
    } // retranslateUi

};

namespace Ui {
    class testComAndHttp: public Ui_testComAndHttp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTCOMANDHTTP_H
