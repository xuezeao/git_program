/********************************************************************************
** Form generated from reading UI file 'comconsition.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMCONSITION_H
#define UI_COMCONSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comConsition
{
public:
    QPushButton *openBtn;
    QPushButton *sendBtn;
    QPushButton *readBtn;
    QPushButton *SetDrawerClockBtn;
    QPushButton *getDrawerClock;

    void setupUi(QWidget *comConsition)
    {
        if (comConsition->objectName().isEmpty())
            comConsition->setObjectName(QStringLiteral("comConsition"));
        comConsition->resize(400, 300);
        openBtn = new QPushButton(comConsition);
        openBtn->setObjectName(QStringLiteral("openBtn"));
        openBtn->setGeometry(QRect(60, 40, 75, 23));
        sendBtn = new QPushButton(comConsition);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(60, 90, 75, 23));
        readBtn = new QPushButton(comConsition);
        readBtn->setObjectName(QStringLiteral("readBtn"));
        readBtn->setGeometry(QRect(60, 160, 75, 23));
        SetDrawerClockBtn = new QPushButton(comConsition);
        SetDrawerClockBtn->setObjectName(QStringLiteral("SetDrawerClockBtn"));
        SetDrawerClockBtn->setGeometry(QRect(40, 220, 121, 31));
        getDrawerClock = new QPushButton(comConsition);
        getDrawerClock->setObjectName(QStringLiteral("getDrawerClock"));
        getDrawerClock->setGeometry(QRect(210, 40, 121, 51));

        retranslateUi(comConsition);

        QMetaObject::connectSlotsByName(comConsition);
    } // setupUi

    void retranslateUi(QWidget *comConsition)
    {
        comConsition->setWindowTitle(QApplication::translate("comConsition", "Form", 0));
        openBtn->setText(QApplication::translate("comConsition", "open", 0));
        sendBtn->setText(QApplication::translate("comConsition", "send", 0));
        readBtn->setText(QApplication::translate("comConsition", "read", 0));
        SetDrawerClockBtn->setText(QApplication::translate("comConsition", "setDrawerClock", 0));
        getDrawerClock->setText(QApplication::translate("comConsition", "getDrawerClock", 0));
    } // retranslateUi

};

namespace Ui {
    class comConsition: public Ui_comConsition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMCONSITION_H
