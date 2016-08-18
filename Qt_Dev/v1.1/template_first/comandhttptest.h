#ifndef COMANDHTTPTEST_H
#define COMANDHTTPTEST_H

#include <QWidget>

namespace Ui {
class comandhttptest;
}

class comandhttptest : public QWidget
{
    Q_OBJECT

public:
    explicit comandhttptest(QWidget *parent = 0);
    ~comandhttptest();

private slots:
    void on_commandLinkButton_backLoginPage_clicked();
signals:
    void backLoginPage();

private:
    Ui::comandhttptest *ui;
};

#endif // COMANDHTTPTEST_H
