#ifndef MAINUI_H
#define MAINUI_H

#include <QWidget>
#include "mainwindow.h"
#include "searchwindow.h"
namespace Ui {
class MainUI;
}

class MainUI : public QWidget
{
    Q_OBJECT

public:
    explicit MainUI(QWidget *parent = 0);
    ~MainUI();

private slots:
    void on_pushButton_reagentP_clicked();

    void on_pushButton_reagentG_clicked();

    void on_pushButton_reagentB_clicked();
    void GPage_To_this();
    void PPage_To_this();
private:
    Ui::MainUI *ui;
    searchWindow *reagentGPage;
    MainWindow *reagentPPage;

};

#endif // MAINUI_H
