#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QTimer>

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

private slots:
    void on_pushButton_newRow_clicked();
    void auto_AddRow();//自增一行

private:
    Ui::MainWindow *ui;
    QSqlTableModel* model;
    QTimer* timer;
    void getSheetAddShow();//获取新建表格、保存和更新显示

};

#endif // MAINWINDOW_H
