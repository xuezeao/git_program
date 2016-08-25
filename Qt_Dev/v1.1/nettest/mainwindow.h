#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include "reagentppage.h"
#include "reagentgpage.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_reagentP_clicked();

    void on_pushButton_reagentG_clicked();

    void on_pushButton_reagentB_clicked();

    void closeThis_To_PPage();
    void closeThis_To_GPage();
    void closeThis_To_BPage();

private:
    Ui::MainWindow *ui;
    QTimer *timer;
    reagentPPage *PPage;
    reagentGPage *GPage;

};

#endif // MAINWINDOW_H
