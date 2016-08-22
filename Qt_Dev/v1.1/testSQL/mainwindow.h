#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QTimer>
#include <popuppage.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void timeout();//试剂列有字段自增一行
    void toMainChoice();
private slots:

    void auto_AddRow();//自增一行

    void on_pushButton_del_clicked();


    void on_pushButton_placeChest_clicked();
    void returnBack();

    void on_commandLinkButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlRelationalTableModel* model;
    QTimer* timer;
    popupPage* popupwindow;
    void getSheetAddShow();//获取新建表格、保存和更新显示

};

#endif // MAINWINDOW_H
