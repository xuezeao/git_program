/********************************************************************************
** Form generated from reading UI file 'execut_window.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXECUT_WINDOW_H
#define UI_EXECUT_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
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
    QLineEdit *lineEdit_changeVolume;
    QLabel *label_oddDose;
    QLabel *label_changeNewAgentia;
    QComboBox *CMB_V;
    QPushButton *pBt_ignore;
    QPushButton *pushButton;

    void setupUi(QDialog *Execut_window)
    {
        if (Execut_window->objectName().isEmpty())
            Execut_window->setObjectName(QStringLiteral("Execut_window"));
        Execut_window->resize(586, 403);
        label = new QLabel(Execut_window);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(73, 70, 71, 20));
        label_2 = new QLabel(Execut_window);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 190, 51, 20));
        label_3 = new QLabel(Execut_window);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 130, 51, 20));
        pBt_cancal = new QPushButton(Execut_window);
        pBt_cancal->setObjectName(QStringLiteral("pBt_cancal"));
        pBt_cancal->setGeometry(QRect(90, 320, 75, 23));
        pBt_next = new QPushButton(Execut_window);
        pBt_next->setObjectName(QStringLiteral("pBt_next"));
        pBt_next->setGeometry(QRect(360, 320, 75, 23));
        label_title = new QLabel(Execut_window);
        label_title->setObjectName(QStringLiteral("label_title"));
        label_title->setGeometry(QRect(223, 20, 71, 21));
        lineEdit_Name = new QLineEdit(Execut_window);
        lineEdit_Name->setObjectName(QStringLiteral("lineEdit_Name"));
        lineEdit_Name->setGeometry(QRect(150, 60, 281, 31));
        lineEdit_Volume = new QLineEdit(Execut_window);
        lineEdit_Volume->setObjectName(QStringLiteral("lineEdit_Volume"));
        lineEdit_Volume->setGeometry(QRect(150, 180, 281, 31));
        lineEdit_Position = new QLineEdit(Execut_window);
        lineEdit_Position->setObjectName(QStringLiteral("lineEdit_Position"));
        lineEdit_Position->setGeometry(QRect(150, 120, 281, 31));
        label_RoleStatus = new QLabel(Execut_window);
        label_RoleStatus->setObjectName(QStringLiteral("label_RoleStatus"));
        label_RoleStatus->setGeometry(QRect(380, 20, 191, 21));
        label_RoleStatus->setFrameShape(QFrame::NoFrame);
        label_RoleStatus->setFrameShadow(QFrame::Plain);
        lineEdit_changeVolume = new QLineEdit(Execut_window);
        lineEdit_changeVolume->setObjectName(QStringLiteral("lineEdit_changeVolume"));
        lineEdit_changeVolume->setGeometry(QRect(150, 260, 281, 31));
        label_oddDose = new QLabel(Execut_window);
        label_oddDose->setObjectName(QStringLiteral("label_oddDose"));
        label_oddDose->setGeometry(QRect(60, 260, 71, 20));
        label_changeNewAgentia = new QLabel(Execut_window);
        label_changeNewAgentia->setObjectName(QStringLiteral("label_changeNewAgentia"));
        label_changeNewAgentia->setGeometry(QRect(230, 220, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(20);
        label_changeNewAgentia->setFont(font);
        CMB_V = new QComboBox(Execut_window);
        CMB_V->setObjectName(QStringLiteral("CMB_V"));
        CMB_V->setGeometry(QRect(440, 260, 61, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Arabic"));
        font1.setPointSize(20);
        CMB_V->setFont(font1);
        pBt_ignore = new QPushButton(Execut_window);
        pBt_ignore->setObjectName(QStringLiteral("pBt_ignore"));
        pBt_ignore->setGeometry(QRect(460, 320, 75, 23));
        pushButton = new QPushButton(Execut_window);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(240, 360, 75, 23));

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
        pBt_next->setText(QApplication::translate("Execut_window", "\346\224\276\347\275\256\345\256\214\346\210\220", 0));
        label_title->setText(QApplication::translate("Execut_window", "TextLabel", 0));
        label_RoleStatus->setText(QApplication::translate("Execut_window", "TextLabel", 0));
        label_oddDose->setText(QApplication::translate("Execut_window", "\345\211\251\344\275\231\345\256\271\351\207\217\357\274\232", 0));
        label_changeNewAgentia->setText(QApplication::translate("Execut_window", "\346\233\277\346\215\242\344\270\272\357\274\232", 0));
        CMB_V->clear();
        CMB_V->insertItems(0, QStringList()
         << QApplication::translate("Execut_window", "ml", 0)
         << QApplication::translate("Execut_window", "g", 0)
        );
        pBt_ignore->setText(QApplication::translate("Execut_window", "\350\267\263\350\277\207", 0));
        pushButton->setText(QApplication::translate("Execut_window", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class Execut_window: public Ui_Execut_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXECUT_WINDOW_H
