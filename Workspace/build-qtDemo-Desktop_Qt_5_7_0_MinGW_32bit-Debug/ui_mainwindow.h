/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tabUartTest;
    QTreeWidget *treeWidgetUartList;
    QGroupBox *groupBoxUartSetting;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxUartName;
    QPushButton *pushButtonUartOpen;
    QGroupBox *groupBox;
    QPushButton *pushButtonHttpGet;
    QPushButton *pushButtonHttpPost;
    QTextEdit *textEditPostText;
    QWidget *tabHttpTest;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1024, 768));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(2, 12, 780, 580));
        tabUartTest = new QWidget();
        tabUartTest->setObjectName(QStringLiteral("tabUartTest"));
        treeWidgetUartList = new QTreeWidget(tabUartTest);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidgetUartList->setHeaderItem(__qtreewidgetitem);
        treeWidgetUartList->setObjectName(QStringLiteral("treeWidgetUartList"));
        treeWidgetUartList->setGeometry(QRect(10, 100, 256, 192));
        treeWidgetUartList->setProperty("showDropIndicator", QVariant(true));
        treeWidgetUartList->setDragEnabled(false);
        treeWidgetUartList->setIconSize(QSize(32, 32));
        treeWidgetUartList->header()->setVisible(false);
        treeWidgetUartList->header()->setCascadingSectionResizes(false);
        groupBoxUartSetting = new QGroupBox(tabUartTest);
        groupBoxUartSetting->setObjectName(QStringLiteral("groupBoxUartSetting"));
        groupBoxUartSetting->setGeometry(QRect(10, 10, 251, 80));
        groupBoxUartSetting->setStyleSheet(QStringLiteral(""));
        groupBoxUartSetting->setFlat(true);
        layoutWidget = new QWidget(groupBoxUartSetting);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 214, 35));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        comboBoxUartName = new QComboBox(layoutWidget);
        comboBoxUartName->setObjectName(QStringLiteral("comboBoxUartName"));

        horizontalLayout->addWidget(comboBoxUartName);

        pushButtonUartOpen = new QPushButton(layoutWidget);
        pushButtonUartOpen->setObjectName(QStringLiteral("pushButtonUartOpen"));

        horizontalLayout->addWidget(pushButtonUartOpen);

        groupBox = new QGroupBox(tabUartTest);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(300, 10, 251, 80));
        pushButtonHttpGet = new QPushButton(groupBox);
        pushButtonHttpGet->setObjectName(QStringLiteral("pushButtonHttpGet"));
        pushButtonHttpGet->setGeometry(QRect(20, 30, 85, 33));
        pushButtonHttpPost = new QPushButton(groupBox);
        pushButtonHttpPost->setObjectName(QStringLiteral("pushButtonHttpPost"));
        pushButtonHttpPost->setGeometry(QRect(120, 30, 85, 33));
        textEditPostText = new QTextEdit(tabUartTest);
        textEditPostText->setObjectName(QStringLiteral("textEditPostText"));
        textEditPostText->setGeometry(QRect(310, 100, 341, 78));
        tabWidget->addTab(tabUartTest, QString());
        tabHttpTest = new QWidget();
        tabHttpTest->setObjectName(QStringLiteral("tabHttpTest"));
        tabWidget->addTab(tabHttpTest, QString());
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBoxUartSetting->setTitle(QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\256\276\347\275\256", 0));
        label->setText(QApplication::translate("MainWindow", "\344\270\262\345\217\243", 0));
        comboBoxUartName->clear();
        comboBoxUartName->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "COM1", 0)
         << QApplication::translate("MainWindow", "COM2", 0)
         << QApplication::translate("MainWindow", "COM3", 0)
         << QApplication::translate("MainWindow", "COM4", 0)
         << QApplication::translate("MainWindow", "COM5", 0)
         << QApplication::translate("MainWindow", "COM6", 0)
         << QApplication::translate("MainWindow", "COM7", 0)
         << QApplication::translate("MainWindow", "COM8", 0)
         << QApplication::translate("MainWindow", "COM9", 0)
         << QApplication::translate("MainWindow", "COM10", 0)
        );
        pushButtonUartOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "HTTP\346\265\213\350\257\225", 0));
        pushButtonHttpGet->setText(QApplication::translate("MainWindow", "Get", 0));
        pushButtonHttpPost->setText(QApplication::translate("MainWindow", "Post", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabUartTest), QApplication::translate("MainWindow", "    \344\270\262\345\217\243\346\265\213\350\257\225    ", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabHttpTest), QApplication::translate("MainWindow", "    HTTP\346\265\213\350\257\225    ", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
