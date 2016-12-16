/********************************************************************************
** Form generated from reading UI file 'execute_window.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUTE_WINDOW_H
#define UI_EXECUTE_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Execut_window
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pBt_cancal;
    QPushButton *pBt_next;
    QLabel *label_title;
    QLineEdit *lineEdit_Name;
    QLineEdit *lineEdit_Volume;
    QLineEdit *lineEdit_Position;
    QLabel *label_RoleStatus;

    void setupUi(QDialog *Execut_window)
    {
        if (Execut_window->objectName().isEmpty())
            Execut_window->setObjectName(QStringLiteral("Execut_window"));
        Execut_window->resize(586, 403);
        label = new QLabel(Execut_window);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 70, 54, 12));
        label_2 = new QLabel(Execut_window);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 130, 41, 16));
        label_3 = new QLabel(Execut_window);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 200, 41, 16));
        pBt_cancal = new QPushButton(Execut_window);
        pBt_cancal->setObjectName(QStringLiteral("pBt_cancal"));
        pBt_cancal->setGeometry(QRect(90, 310, 75, 23));
        pBt_next = new QPushButton(Execut_window);
        pBt_next->setObjectName(QStringLiteral("pBt_next"));
        pBt_next->setGeometry(QRect(410, 310, 75, 23));
        label_title = new QLabel(Execut_window);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(240, 20, 54, 12));
        lineEdit_Name = new QLineEdit(Execut_window);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(150, 60, 281, 31));
        lineEdit_Volume = new QLineEdit(Execut_window);
        lineEdit_Volume->setObjectName(QStringLiteral("lineEdit_Volume"));
        lineEdit_Volume->setGeometry(QRect(150, 120, 281, 31));
        lineEdit_Position = new QLineEdit(Execut_window);
        lineEdit_Position->setObjectName(QStringLiteral("lineEdit_Position"));
        lineEdit_Position->setGeometry(QRect(150, 190, 281, 31));
        label_RoleStatus = new QLabel(Execut_window);
        label_RoleStatus->setObjectName(QStringLiteral("label_RoleStatus"));
        label_RoleStatus->setGeometry(QRect(430, 20, 141, 21));

        retranslateUi(Execut_window);

        QMetaObject::connectSlotsByName(Execut_window);
    } // setupUi

    void retranslateUi(QDialog *Execut_window)
    {
        Execut_window->setWindowTitle(QApplication::translate("Execut_window", "Dialog", 0));
        label->setText(QApplication::translate("Execut_window", "\350\257\225\345\211\202\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("Execut_window", "\345\256\271\351\207\217\357\274\232", 0));
        label_3->setText(QApplication::translate("Execut_window", "\344\275\215\347\275\256\357\274\232", 0));
        pBt_cancal->setText(QApplication::translate("Execut_window", "\345\217\226\346\266\210", 0));
        pBt_next->setText(QApplication::translate("Execut_window", "\344\270\213\344\270\200\346\255\245", 0));
        label_title->setText(QApplication::translate("Execut_window", "TextLabel", 0));
        label_RoleStatus->setText(QApplication::translate("Execut_window", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Execut_window: public Ui_Execut_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUTE_WINDOW_H
