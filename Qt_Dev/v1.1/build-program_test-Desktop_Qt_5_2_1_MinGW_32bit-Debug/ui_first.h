/********************************************************************************
** Form generated from reading UI file 'first.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIRST_H
#define UI_FIRST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_first
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;

    void setupUi(QWidget *first)
    {
        if (first->objectName().isEmpty())
            first->setObjectName(QStringLiteral("first"));
        first->resize(400, 300);
        gridLayoutWidget = new QWidget(first);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 110, 160, 80));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        retranslateUi(first);

        QMetaObject::connectSlotsByName(first);
    } // setupUi

    void retranslateUi(QWidget *first)
    {
        first->setWindowTitle(QApplication::translate("first", "Form", 0));
        pushButton->setText(QApplication::translate("first", "4343434", 0));
    } // retranslateUi

};

namespace Ui {
    class first: public Ui_first {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIRST_H
