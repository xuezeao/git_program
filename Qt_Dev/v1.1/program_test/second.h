#ifndef SECOND_H
#define SECOND_H
#include <QApplication>
#include <QWidget>

namespace Ui {
class second;
}

class second : public QWidget
{
    Q_OBJECT

public:
    explicit second(QWidget *parent = 0);
    ~second();


signals:
    void page2Exit();
private slots:
    void on_pushButton_clicked();

private:
    Ui::second *ui;
};

#endif // SECOND_H
