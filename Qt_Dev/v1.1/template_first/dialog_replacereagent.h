#ifndef DIALOG_REPLACEREAGENT_H
#define DIALOG_REPLACEREAGENT_H

#include <QDialog>

namespace Ui {
class Dialog_replaceReagent;
}

class Dialog_replaceReagent : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_replaceReagent(QWidget *parent = 0);
    ~Dialog_replaceReagent();
signals:
    void close_dialog_replaceReagen_To_replaceReagent();
private slots:
    void on_pushButton_backPreviousOption_replaceReagent_clicked();

private:
    Ui::Dialog_replaceReagent *ui;
};

#endif // DIALOG_REPLACEREAGENT_H
