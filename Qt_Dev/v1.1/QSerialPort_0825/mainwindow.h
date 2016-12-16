#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "threadread.h"

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
    void on_openBtn_clicked();

    void on_sendBtn_clicked();

    void on_readBtn_clicked();

    void on_SetDrawerClockBtn_clicked();

    void on_getDrawerClock_clicked();


private:
    Ui::MainWindow *ui;

    ThreadRead threadRead;

};

void waitTaskInfo();
void SendMsg(char* data);
int IntoCabinet(int DID);

#endif // MAINWINDOW_H
