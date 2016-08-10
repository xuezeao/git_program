#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QLabel;
class QTimer;

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
    void updateStatusBar();
signals:
    void timeout();
private:
    Ui::MainWindow *ui;
    QLabel *locationLabel;
    QLabel *formulaLabel;
    QTimer *timer;
    void createStatusBar();

};

#endif // MAINWINDOW_H
