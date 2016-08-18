#ifndef LIMITREAGENTOPERATE_H
#define LIMITREAGENTOPERATE_H

#include <QWidget>

namespace Ui {
class limitReagentOperate;
}

class limitReagentOperate : public QWidget
{
    Q_OBJECT

public:
    explicit limitReagentOperate(QWidget *parent = 0);
    ~limitReagentOperate();
signals:
    void close_limitReagent_To_limitReagent();
private slots:
    void on_pushButton_cancelOperate_limitReagent_clicked();

    void on_pushButton_cancelrole_limitReagent_clicked();

    void on_pushButton_sureRole_limitReagent_clicked();

private:
    Ui::limitReagentOperate *ui;
};

#endif // LIMITREAGENTOPERATE_H
