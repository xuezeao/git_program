#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "first.h"
#include "second.h"

#include <QMainWindow>


class QLabel;
class QTimer;//定时器


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
     void updatetime();//更新显示时间
     first *page1;
     second *page2;


protected:
   // void closeEvent(QCloseEvent *event);//定义关闭事件具体功能未设定

private slots:

     void page1ReturnMainUi();
     void page2ReturnMainUi();
     void on_pushButton_2_clicked();

     void on_pushButton_clicked();

signals:
    void timeout();//时间输出
private:
    Ui::MainWindow *ui;
/**********statusbar time update************************/

    QLabel *locationLabel;//系统时间文本
    QLabel *webStatusLabel;//网络状态文本
    QTimer *timer;//定时器——（系统时间重读时间间隔）
    void createStatusBar();



};

#endif // MAINWINDOW_H
