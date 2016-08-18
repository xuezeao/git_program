#ifndef CHECKREAGENT_H
#define CHECKREAGENT_H

#include <QWidget>
#include "dialog_checkreagent.h"
namespace Ui {
class CheckReagent;
}

class CheckReagent : public QWidget
{
    Q_OBJECT

public:
    explicit CheckReagent(QWidget *parent = 0);
    ~CheckReagent();
public slots:
    void close_dialog_checkReagent_Come_here();
signals:
    void close_checkReagent_To_MainUI();
private slots:
    void on_pushButton_cancelOperate_replaceReagent_clicked();

    void on_pushButton__sureOK_replaceReagent_clicked();

private:
    Ui::CheckReagent *ui;
    Dialog_checkreagent *this_dialog_checkReagent_In_checkReagent;
};

#endif // CHECKREAGENT_H
