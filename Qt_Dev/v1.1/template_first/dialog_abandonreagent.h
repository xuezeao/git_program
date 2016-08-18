#ifndef DIALOG_ABANDONREAGENT_H
#define DIALOG_ABANDONREAGENT_H

#include <QWidget>

namespace Ui {
class dialog_abandonReagent;
}

class dialog_abandonReagent : public QWidget
{
    Q_OBJECT

public:
    explicit dialog_abandonReagent(QWidget *parent = 0);
    ~dialog_abandonReagent();
signals:
    void close_dialog_abandonReagentPage();
private slots:
    void on_pushButton_cancelOK_abandonReagent_clicked();

    void on_pushButton_operateOK_abandonReagent_clicked();

private:
    Ui::dialog_abandonReagent *ui;
};

#endif // DIALOG_ABANDONREAGENT_H
