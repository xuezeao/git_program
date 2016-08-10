#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QLabel;


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

private:
    Ui::MainWindow *ui;
    QLabel *locationLabel;
    QLabel *formulaLabel;
    void createStatusBar();
};

#endif // MAINWINDOW_H
