#ifndef DIALOG_RETURNREAGENT_H
#define DIALOG_RETURNREAGENT_H

#include <QDialog>

namespace Ui {
class Dialog_returnReagent;
}

class Dialog_returnReagent : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_returnReagent(QWidget *parent = 0);
    ~Dialog_returnReagent();
signals:
    void close_dialog_returnReagent();
private slots:
    void on_pushButton_closeReturnReagentPage_clicked();

private:
    Ui::Dialog_returnReagent *ui;
};

#endif // DIALOG_RETURNREAGENT_H
