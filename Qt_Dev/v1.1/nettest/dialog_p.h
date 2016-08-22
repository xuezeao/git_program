#ifndef DIALOG_P_H
#define DIALOG_P_H

#include <QDialog>

namespace Ui {
class dialog_P;
}

class dialog_P : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_P(QWidget *parent = 0);
    ~dialog_P();

private:
    Ui::dialog_P *ui;
};

#endif // DIALOG_P_H
