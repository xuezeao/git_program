#ifndef ABANDONREAGENT_H
#define ABANDONREAGENT_H

#include <QWidget>
#include "dialog_abandonreagent.h"
namespace Ui {
class abandonReagent;
}

class abandonReagent : public QWidget
{
    Q_OBJECT

public:
    explicit abandonReagent(QWidget *parent = 0);
    ~abandonReagent();


signals:
    void close_abandonReagentPage_To_MainUI();
public slots:
    void open_dialog_dabandonReagentPage();


private slots:
    void on_pushButton_sureOpera_abandonReagent_clicked();

    void on_commandLinkButton_closePage_abandonReagent_clicked();

private:
    Ui::abandonReagent *ui;
    dialog_abandonReagent *dialog_abandonReagent_Page;
    void open_dialog_dabandonReagent_page();
};

#endif // ABANDONREAGENT_H
