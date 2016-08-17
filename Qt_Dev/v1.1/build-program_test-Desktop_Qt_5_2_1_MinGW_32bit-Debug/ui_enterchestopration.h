/********************************************************************************
** Form generated from reading UI file 'enterchestopration.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERCHESTOPRATION_H
#define UI_ENTERCHESTOPRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_enterChestOpration
{
public:
    QLabel *label;
    QPushButton *pushButton_cancelOprationReturnChoiceUi;
    QPushButton *pushButton_sureExecute_placeReagent;

    void setupUi(QWidget *enterChestOpration)
    {
        if (enterChestOpration->objectName().isEmpty())
            enterChestOpration->setObjectName(QStringLiteral("enterChestOpration"));
        enterChestOpration->resize(808, 560);
        label = new QLabel(enterChestOpration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 341, 81));
        QFont font;
        font.setFamily(QStringLiteral("Agency FB"));
        font.setPointSize(24);
        label->setFont(font);
        pushButton_cancelOprationReturnChoiceUi = new QPushButton(enterChestOpration);
        pushButton_cancelOprationReturnChoiceUi->setObjectName(QStringLiteral("pushButton_cancelOprationReturnChoiceUi"));
        pushButton_cancelOprationReturnChoiceUi->setGeometry(QRect(210, 510, 111, 31));
        pushButton_sureExecute_placeReagent = new QPushButton(enterChestOpration);
        pushButton_sureExecute_placeReagent->setObjectName(QStringLiteral("pushButton_sureExecute_placeReagent"));
        pushButton_sureExecute_placeReagent->setGeometry(QRect(374, 510, 101, 31));

        retranslateUi(enterChestOpration);

        QMetaObject::connectSlotsByName(enterChestOpration);
    } // setupUi

    void retranslateUi(QWidget *enterChestOpration)
    {
        enterChestOpration->setWindowTitle(QApplication::translate("enterChestOpration", "Form", 0));
        label->setText(QApplication::translate("enterChestOpration", "\345\256\236\351\252\214\345\256\244\350\257\225\345\211\202\346\231\272\350\203\275\347\256\241\347\220\206\346\237\234", 0));
        pushButton_cancelOprationReturnChoiceUi->setText(QApplication::translate("enterChestOpration", "\345\217\226\346\266\210", 0));
        pushButton_sureExecute_placeReagent->setText(QApplication::translate("enterChestOpration", "\346\211\247\350\241\214", 0));
    } // retranslateUi

};

namespace Ui {
    class enterChestOpration: public Ui_enterChestOpration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERCHESTOPRATION_H
