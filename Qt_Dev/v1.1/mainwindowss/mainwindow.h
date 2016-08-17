#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAciton;
class QLabel;
class FindDiglog;
class Spreadsheet;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
protected:
//    void closeEvent(QCloseEvent *event);
private:
    Ui::MainWindow *ui;
    void createStatusBars();
    void createToolsBars();
    QLabel *locationLabel;

private slots:
    void updateStatusBar();
};

#endif // MAINWINDOW_H
