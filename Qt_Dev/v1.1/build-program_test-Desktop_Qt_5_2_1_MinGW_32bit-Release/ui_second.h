/********************************************************************************
** Form generated from reading UI file 'second.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECOND_H
#define UI_SECOND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_second
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QWidget *widget;

    void setupUi(QWidget *second)
    {
        if (second->objectName().isEmpty())
            second->setObjectName(QStringLiteral("second"));
        second->resize(400, 300);
        horizontalLayoutWidget = new QWidget(second);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 180, 160, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(horizontalLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        widget = new QWidget(second);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(second);

        QMetaObject::connectSlotsByName(second);
    } // setupUi

    void retranslateUi(QWidget *second)
    {
        second->setWindowTitle(QApplication::translate("second", "Form", 0));
        pushButton->setText(QApplication::translate("second", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class second: public Ui_second {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECOND_H
