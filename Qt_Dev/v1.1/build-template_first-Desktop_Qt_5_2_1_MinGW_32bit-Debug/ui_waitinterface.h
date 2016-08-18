/********************************************************************************
** Form generated from reading UI file 'waitinterface.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WAITINTERFACE_H
#define UI_WAITINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_waitInterface
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *waitInterface)
    {
        if (waitInterface->objectName().isEmpty())
            waitInterface->setObjectName(QStringLiteral("waitInterface"));
        waitInterface->resize(876, 545);
        label = new QLabel(waitInterface);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 30, 331, 51));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        label->setFont(font);
        textBrowser = new QTextBrowser(waitInterface);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(90, 120, 691, 381));
        textBrowser->setUndoRedoEnabled(true);
        textBrowser->raise();
        label->raise();

        retranslateUi(waitInterface);

        QMetaObject::connectSlotsByName(waitInterface);
    } // setupUi

    void retranslateUi(QWidget *waitInterface)
    {
        waitInterface->setWindowTitle(QApplication::translate("waitInterface", "Form", 0));
        label->setText(QApplication::translate("waitInterface", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
    } // retranslateUi

};

namespace Ui {
    class waitInterface: public Ui_waitInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WAITINTERFACE_H
