#ifndef SECOND_H
#define SECOND_H
#include <QApplication>
#include <QWidget>
#include <QLabel>
namespace Ui {
class second;
}

class second : public QWidget
{
    Q_OBJECT

public:
    explicit second(QWidget *parent = 0);
    ~second();
//    void updataTime(QString str);//更新显示时间

signals:
    void page2Exit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::second *ui;

};

#endif // SECOND_H
