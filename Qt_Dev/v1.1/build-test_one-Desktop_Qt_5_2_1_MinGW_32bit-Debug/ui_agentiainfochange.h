/********************************************************************************
** Form generated from reading UI file 'agentiainfochange.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGENTIAINFOCHANGE_H
#define UI_AGENTIAINFOCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AgentiaInfoChange
{
public:
    QPushButton *pBt_nextOperate;
    QPushButton *pBt_previousOperate;
    QCommandLinkButton *pBt_returnPrevious;
    QComboBox *comboBox_drawerSize;
    QLabel *label;
    QLabel *label_dose;
    QLabel *label_3;
    QLabel *label_agentiaName;
    QLabel *label_4;
    QLabel *label_agentiaID;
    QLabel *label_chemicalFormula;
    QLabel *label_5;
    QLineEdit *lineEdit_dose;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_attribute;
    QLabel *label_8;
    QLabel *label_factory;
    QLabel *label_9;
    QLabel *label_itemNo;
    QLabel *label_bottle;
    QLineEdit *lineEdit_bottleCapacity;
    QLabel *label_11;
    QTextBrowser *textBrowser_specification;
    QComboBox *CMB_dose;
    QComboBox *CMB_bottleCapacity;
    QDateEdit *dateEdit_expireDate;
    QLineEdit *lineEdit_newdose;
    QLabel *label_newdose;
    QComboBox *CMB_newdose;

    void setupUi(QWidget *AgentiaInfoChange)
    {
        if (AgentiaInfoChange->objectName().isEmpty())
            AgentiaInfoChange->setObjectName(QStringLiteral("AgentiaInfoChange"));
        AgentiaInfoChange->resize(704, 481);
        pBt_nextOperate = new QPushButton(AgentiaInfoChange);
        pBt_nextOperate->setObjectName(QStringLiteral("pBt_nextOperate"));
        pBt_nextOperate->setGeometry(QRect(550, 350, 121, 41));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(14);
        pBt_nextOperate->setFont(font);
        pBt_previousOperate = new QPushButton(AgentiaInfoChange);
        pBt_previousOperate->setObjectName(QStringLiteral("pBt_previousOperate"));
        pBt_previousOperate->setGeometry(QRect(550, 420, 121, 41));
        pBt_previousOperate->setFont(font);
        pBt_returnPrevious = new QCommandLinkButton(AgentiaInfoChange);
        pBt_returnPrevious->setObjectName(QStringLiteral("pBt_returnPrevious"));
        pBt_returnPrevious->setGeometry(QRect(0, 0, 111, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        font1.setPointSize(14);
        pBt_returnPrevious->setFont(font1);
        comboBox_drawerSize = new QComboBox(AgentiaInfoChange);
        comboBox_drawerSize->setObjectName(QStringLiteral("comboBox_drawerSize"));
        comboBox_drawerSize->setGeometry(QRect(120, 200, 151, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Agency FB"));
        font2.setPointSize(16);
        comboBox_drawerSize->setFont(font2);
        label = new QLabel(AgentiaInfoChange);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 200, 111, 21));
        label->setFont(font);
        label_dose = new QLabel(AgentiaInfoChange);
        label_dose->setObjectName(QStringLiteral("label_dose"));
        label_dose->setGeometry(QRect(360, 220, 111, 21));
        label_dose->setFont(font);
        label_3 = new QLabel(AgentiaInfoChange);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 70, 91, 41));
        label_3->setFont(font);
        label_agentiaName = new QLabel(AgentiaInfoChange);
        label_agentiaName->setObjectName(QStringLiteral("label_agentiaName"));
        label_agentiaName->setGeometry(QRect(120, 80, 511, 21));
        label_agentiaName->setFont(font);
        label_4 = new QLabel(AgentiaInfoChange);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 100, 91, 41));
        label_4->setFont(font);
        label_agentiaID = new QLabel(AgentiaInfoChange);
        label_agentiaID->setObjectName(QStringLiteral("label_agentiaID"));
        label_agentiaID->setGeometry(QRect(120, 110, 521, 21));
        label_agentiaID->setFont(font);
        label_chemicalFormula = new QLabel(AgentiaInfoChange);
        label_chemicalFormula->setObjectName(QStringLiteral("label_chemicalFormula"));
        label_chemicalFormula->setGeometry(QRect(120, 140, 531, 21));
        label_chemicalFormula->setFont(font);
        label_5 = new QLabel(AgentiaInfoChange);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 130, 91, 41));
        label_5->setFont(font);
        lineEdit_dose = new QLineEdit(AgentiaInfoChange);
        lineEdit_dose->setObjectName(QStringLiteral("lineEdit_dose"));
        lineEdit_dose->setGeometry(QRect(470, 210, 111, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Agency FB"));
        font3.setPointSize(20);
        lineEdit_dose->setFont(font3);
        label_6 = new QLabel(AgentiaInfoChange);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 250, 101, 21));
        label_6->setFont(font);
        label_7 = new QLabel(AgentiaInfoChange);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(450, 10, 61, 21));
        label_7->setFont(font);
        label_attribute = new QLabel(AgentiaInfoChange);
        label_attribute->setObjectName(QStringLiteral("label_attribute"));
        label_attribute->setGeometry(QRect(510, 10, 141, 21));
        label_attribute->setFont(font);
        label_8 = new QLabel(AgentiaInfoChange);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 440, 71, 21));
        label_8->setFont(font);
        label_factory = new QLabel(AgentiaInfoChange);
        label_factory->setObjectName(QStringLiteral("label_factory"));
        label_factory->setGeometry(QRect(100, 440, 421, 21));
        label_factory->setFont(font);
        label_9 = new QLabel(AgentiaInfoChange);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(410, 40, 91, 21));
        label_9->setFont(font);
        label_itemNo = new QLabel(AgentiaInfoChange);
        label_itemNo->setObjectName(QStringLiteral("label_itemNo"));
        label_itemNo->setGeometry(QRect(510, 40, 171, 21));
        label_itemNo->setFont(font);
        label_bottle = new QLabel(AgentiaInfoChange);
        label_bottle->setObjectName(QStringLiteral("label_bottle"));
        label_bottle->setGeometry(QRect(360, 260, 111, 21));
        label_bottle->setFont(font);
        lineEdit_bottleCapacity = new QLineEdit(AgentiaInfoChange);
        lineEdit_bottleCapacity->setObjectName(QStringLiteral("lineEdit_bottleCapacity"));
        lineEdit_bottleCapacity->setGeometry(QRect(470, 250, 111, 31));
        lineEdit_bottleCapacity->setFont(font3);
        label_11 = new QLabel(AgentiaInfoChange);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 290, 101, 21));
        label_11->setFont(font);
        textBrowser_specification = new QTextBrowser(AgentiaInfoChange);
        textBrowser_specification->setObjectName(QStringLiteral("textBrowser_specification"));
        textBrowser_specification->setGeometry(QRect(120, 290, 411, 131));
        CMB_dose = new QComboBox(AgentiaInfoChange);
        CMB_dose->setObjectName(QStringLiteral("CMB_dose"));
        CMB_dose->setGeometry(QRect(590, 210, 51, 31));
        CMB_dose->setFont(font2);
        CMB_bottleCapacity = new QComboBox(AgentiaInfoChange);
        CMB_bottleCapacity->setObjectName(QStringLiteral("CMB_bottleCapacity"));
        CMB_bottleCapacity->setGeometry(QRect(590, 250, 51, 31));
        CMB_bottleCapacity->setFont(font2);
        dateEdit_expireDate = new QDateEdit(AgentiaInfoChange);
        dateEdit_expireDate->setObjectName(QStringLiteral("dateEdit_expireDate"));
        dateEdit_expireDate->setGeometry(QRect(120, 250, 151, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Adobe Arabic"));
        font4.setPointSize(26);
        dateEdit_expireDate->setFont(font4);
        lineEdit_newdose = new QLineEdit(AgentiaInfoChange);
        lineEdit_newdose->setObjectName(QStringLiteral("lineEdit_newdose"));
        lineEdit_newdose->setGeometry(QRect(470, 170, 111, 31));
        lineEdit_newdose->setFont(font3);
        label_newdose = new QLabel(AgentiaInfoChange);
        label_newdose->setObjectName(QStringLiteral("label_newdose"));
        label_newdose->setGeometry(QRect(360, 180, 111, 21));
        label_newdose->setFont(font);
        CMB_newdose = new QComboBox(AgentiaInfoChange);
        CMB_newdose->setObjectName(QStringLiteral("CMB_newdose"));
        CMB_newdose->setGeometry(QRect(590, 170, 51, 31));
        CMB_newdose->setFont(font2);

        retranslateUi(AgentiaInfoChange);

        QMetaObject::connectSlotsByName(AgentiaInfoChange);
    } // setupUi

    void retranslateUi(QWidget *AgentiaInfoChange)
    {
        AgentiaInfoChange->setWindowTitle(QApplication::translate("AgentiaInfoChange", "Form", 0));
        pBt_nextOperate->setText(QApplication::translate("AgentiaInfoChange", "\344\270\213\344\270\200\346\235\241", 0));
        pBt_previousOperate->setText(QApplication::translate("AgentiaInfoChange", "\344\270\212\344\270\200\346\235\241", 0));
        pBt_returnPrevious->setText(QApplication::translate("AgentiaInfoChange", "\350\277\224\345\233\236", 0));
        comboBox_drawerSize->clear();
        comboBox_drawerSize->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AgentiaInfoChange", "10*10*10", 0)
         << QApplication::translate("AgentiaInfoChange", "10*10*20", 0)
         << QApplication::translate("AgentiaInfoChange", "20*20*20", 0)
        );
        label->setText(QApplication::translate("AgentiaInfoChange", "\350\257\225\345\211\202\347\223\266\345\260\272\345\257\270\357\274\232", 0));
        label_dose->setText(QApplication::translate("AgentiaInfoChange", "\345\256\236\351\231\205\345\255\230\351\207\217  \357\274\232", 0));
        label_3->setText(QApplication::translate("AgentiaInfoChange", "\350\257\225\345\211\202\345\220\215\347\247\260\357\274\232", 0));
        label_agentiaName->setText(QApplication::translate("AgentiaInfoChange", "\346\232\202\346\227\240", 0));
        label_4->setText(QApplication::translate("AgentiaInfoChange", "\350\257\225\345\211\202  ID    \357\274\232", 0));
        label_agentiaID->setText(QApplication::translate("AgentiaInfoChange", "\346\232\202\346\227\240", 0));
        label_chemicalFormula->setText(QApplication::translate("AgentiaInfoChange", "\346\232\202\346\227\240", 0));
        label_5->setText(QApplication::translate("AgentiaInfoChange", "\345\214\226\345\255\246\345\274\217    \357\274\232", 0));
        label_6->setText(QApplication::translate("AgentiaInfoChange", "\345\244\261\346\225\210\346\227\245\346\234\237  \357\274\232", 0));
        label_7->setText(QApplication::translate("AgentiaInfoChange", "\347\261\273\345\210\253\357\274\232", 0));
        label_attribute->setText(QApplication::translate("AgentiaInfoChange", "\346\232\202\346\227\240", 0));
        label_8->setText(QApplication::translate("AgentiaInfoChange", "\345\216\202\345\256\266      \357\274\232", 0));
        label_factory->setText(QApplication::translate("AgentiaInfoChange", "\346\232\202\346\227\240", 0));
        label_9->setText(QApplication::translate("AgentiaInfoChange", "\351\241\271\347\233\256\347\274\226\345\217\267\357\274\232", 0));
        label_itemNo->setText(QApplication::translate("AgentiaInfoChange", "\346\232\202\346\227\240", 0));
        label_bottle->setText(QApplication::translate("AgentiaInfoChange", "\351\242\235\345\256\232\345\256\271\351\207\217 \357\274\232", 0));
        label_11->setText(QApplication::translate("AgentiaInfoChange", "\350\257\246\347\273\206\344\273\213\347\273\215 \357\274\232", 0));
        textBrowser_specification->setHtml(QApplication::translate("AgentiaInfoChange", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\232\202\346\227\240</p></body></html>", 0));
        CMB_dose->clear();
        CMB_dose->insertItems(0, QStringList()
         << QApplication::translate("AgentiaInfoChange", "ml", 0)
         << QApplication::translate("AgentiaInfoChange", "g", 0)
        );
        CMB_bottleCapacity->clear();
        CMB_bottleCapacity->insertItems(0, QStringList()
         << QApplication::translate("AgentiaInfoChange", "ml", 0)
         << QApplication::translate("AgentiaInfoChange", "g", 0)
        );
        label_newdose->setText(QApplication::translate("AgentiaInfoChange", "\346\233\277\346\215\242\345\255\230\351\207\217  \357\274\232", 0));
        CMB_newdose->clear();
        CMB_newdose->insertItems(0, QStringList()
         << QApplication::translate("AgentiaInfoChange", "ml", 0)
         << QApplication::translate("AgentiaInfoChange", "g", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AgentiaInfoChange: public Ui_AgentiaInfoChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGENTIAINFOCHANGE_H
