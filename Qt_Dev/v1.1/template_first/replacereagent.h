#ifndef REPLACEREAGENT_H
#define REPLACEREAGENT_H

#include <QWidget>
#include "dialog_replacereagent.h"
namespace Ui {
class replaceReagent;
}

class replaceReagent : public QWidget
{
    Q_OBJECT

public:
    explicit replaceReagent(QWidget *parent = 0);
    ~replaceReagent();
public slots:
      void close_dialog_replaceReagentPage_IN_this();
signals:
    void close_replaceReagent_Page_To_MainUI();
private slots:
    void on_pushButton_sureOpera_replaceReagent_clicked();

    void on_commandLinkButton_closePage_replaceReagent_clicked();

private:
    Ui::replaceReagent *ui;
    Dialog_replaceReagent *Dialog_replaceReagent_In_repalceReagent;

};

#endif // REPLACEREAGENT_H
