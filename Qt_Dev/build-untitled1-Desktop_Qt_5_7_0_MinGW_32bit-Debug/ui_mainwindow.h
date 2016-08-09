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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_account;
    QLabel *label_password;
    QLabel *label_accout;
    QLineEdit *lineEdit_password;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_maintitle;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_data;
    QLabel *label_status;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QMenuBar *menuBar;
    QMenu *menu;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(600, 490);
        MainWindow->setMinimumSize(QSize(600, 490));
        MainWindow->setMaximumSize(QSize(600, 490));
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QStringLiteral(""));
        MainWindow->setIconSize(QSize(24, 22));
        MainWindow->setAnimated(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(140, 210, 261, 81));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_account = new QLineEdit(gridLayoutWidget);
        lineEdit_account->setObjectName(QStringLiteral("lineEdit_account"));
        lineEdit_account->setMaximumSize(QSize(150, 35));

        gridLayout->addWidget(lineEdit_account, 0, 1, 1, 1);

        label_password = new QLabel(gridLayoutWidget);
        label_password->setObjectName(QStringLiteral("label_password"));

        gridLayout->addWidget(label_password, 2, 0, 1, 1);

        label_accout = new QLabel(gridLayoutWidget);
        label_accout->setObjectName(QStringLiteral("label_accout"));
        label_accout->setMaximumSize(QSize(60, 50));
        label_accout->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_accout, 0, 0, 1, 1);

        lineEdit_password = new QLineEdit(gridLayoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setMaximumSize(QSize(150, 35));

        gridLayout->addWidget(lineEdit_password, 2, 1, 1, 1);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 40, 431, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_maintitle = new QLabel(horizontalLayoutWidget);
        label_maintitle->setObjectName(QStringLiteral("label_maintitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(30);
        font.setBold(true);
        font.setWeight(75);
        label_maintitle->setFont(font);
        label_maintitle->setStyleSheet(QStringLiteral(""));
        label_maintitle->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_maintitle);

        verticalWidget = new QWidget(centralWidget);
        verticalWidget->setObjectName(QStringLiteral("verticalWidget"));
        verticalWidget->setGeometry(QRect(0, 0, 2, 2));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(-1, -20, 601, 461));
        graphicsView->setMaximumSize(QSize(610, 500));
        graphicsView->setStyleSheet(QStringLiteral("background-image: url(:/background.png);"));
        gridLayoutWidget_2 = new QWidget(centralWidget);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(0, 400, 601, 41));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_data = new QLabel(gridLayoutWidget_2);
        label_data->setObjectName(QStringLiteral("label_data"));
        label_data->setMaximumSize(QSize(16777215, 30));
        label_data->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_data, 1, 2, 1, 1);

        label_status = new QLabel(gridLayoutWidget_2);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setMaximumSize(QSize(16777215, 30));

        gridLayout_2->addWidget(label_status, 1, 0, 1, 1);

        line = new QFrame(gridLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 1, 1, 1, 1);

        line_2 = new QFrame(gridLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_2, 0, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 0, 1, 1, 1);

        line_4 = new QFrame(gridLayoutWidget_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        graphicsView->raise();
        gridLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        verticalWidget->raise();
        gridLayoutWidget_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(actionAbout);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "P1 \347\231\273\345\205\245\350\276\223\345\205\245", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        label_password->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", 0));
        label_accout->setText(QApplication::translate("MainWindow", "\347\231\273\345\205\245\350\264\246\345\217\267\357\274\232", 0));
        label_maintitle->setText(QApplication::translate("MainWindow", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        label_data->setText(QApplication::translate("MainWindow", "Time:  ", 0));
        label_status->setText(QApplication::translate("MainWindow", "  Status:", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
