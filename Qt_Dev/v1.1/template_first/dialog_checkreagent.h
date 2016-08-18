#ifndef DIALOG_CHECKREAGENT_H
#define DIALOG_CHECKREAGENT_H

#include <QDialog>

namespace Ui {
class Dialog_checkreagent;
}

class Dialog_checkreagent : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_checkreagent(QWidget *parent = 0);
    ~Dialog_checkreagent();
signals:
    void close_dialog_checkReagentPage_To_checkReagent();
private slots:
    void on_pushButton_checkOK_checkReagent_clicked();

private:
    Ui::Dialog_checkreagent *ui;
};

#endif // DIALOG_CHECKREAGENT_H
