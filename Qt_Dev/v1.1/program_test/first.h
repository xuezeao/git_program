#ifndef FIRST_H
#define FIRST_H
#include <QApplication>
#include <QWidget>

namespace Ui {
class first;
}


class first : public QWidget
{
    Q_OBJECT

signals:
    void page1Exit();
public:
    explicit first(QWidget *parent = 0);
    ~first();

private slots:
    void on_pushButton_clicked();

private:
    Ui::first *ui;
};

#endif // FIRST_H
