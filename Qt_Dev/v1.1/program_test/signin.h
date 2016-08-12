#ifndef SIGNIN_H
#define SIGNIN_H


#include <QDialog>
#include <QLabel>

namespace Ui {
class signIn;
}


class signIn : public QDialog
{
    Q_OBJECT

public:
    explicit signIn(QDialog *parent = 0);
    ~signIn();


signals:


private slots:

    void on_pushButton_signIN_clicked();



private:
    Ui::signIn *ui;
};

#endif // SIGNIN_H
