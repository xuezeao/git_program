#ifndef LOGININTERFACE_H
#define LOGININTERFACE_H

#include <QWidget>

#include "comandhttptest.h"
namespace Ui {
class LoginInterface;
}

class LoginInterface : public QWidget
{
    Q_OBJECT
public slots:

    void openLoginInterface();

public:
    explicit LoginInterface(QWidget *parent = 0);
    ~LoginInterface();
signals:
    void openChoicMainInterface();


private slots:
    void on_pushButton_LoginInterface_clicked();
    void on_pushButton_openTestPage_clicked();

private:
    Ui::LoginInterface *ui;

    comandhttptest *comAndHttpTestPage;
};

#endif // LOGININTERFACE_H
