#ifndef RETURNREAGENTTOCHEST_H
#define RETURNREAGENTTOCHEST_H

#include <QWidget>
#include "dialog_returnreagent.h"
namespace Ui {
class returnreagenttochest;
}

class returnreagenttochest : public QWidget
{
    Q_OBJECT

public:
    explicit returnreagenttochest(QWidget *parent = 0);
    ~returnreagenttochest();
public slots:
    void close_dialog_returnReagentPage();
private slots:
    void on_pushButton_closeReturnReagentPage_clicked();

    void on_pushButton_sureOperaReturnOperate_clicked();
signals:
    void closeReturnReagentPageToMainUI();
private:
    Ui::returnreagenttochest *ui;
    Dialog_returnReagent *returnReagentPage;
};

#endif // RETURNREAGENTTOCHEST_H
