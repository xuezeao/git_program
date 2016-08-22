#ifndef MAINUI_H
#define MAINUI_H

#include <QMessageBox>
#include <QUrl>
#include <QNetworkRequest>
#include <QDebug>
#include <QWidget>
#include "mainwindow.h"
#include "searchwindow.h"
#include <QNetworkAccessManager>
#include <QNetworkReply>
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
    void on_pushButton_GetHttp_clicked();

    void on_pushButton_PostHttp_clicked();
    void finished(QNetworkReply * reply);
private:
    Ui::MainUI *ui;
    searchWindow *reagentGPage;
    MainWindow *reagentPPage;
    QNetworkAccessManager *accessManager;
};
#endif // MAINUI_H
