#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>

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
    void on_pushButtonUartOpen_clicked();

    void on_pushButtonHttpGet_clicked();

    void on_pushButtonHttpPost_clicked();

    void finished(QNetworkReply *reply);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
