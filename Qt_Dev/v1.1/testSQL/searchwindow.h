#ifndef SEARCHWINDOW_H
#define SEARCHWINDOW_H

#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class searchWindow;
}

class searchWindow : public QWidget
{
    Q_OBJECT

public:
    explicit searchWindow(QWidget *parent = 0);
    ~searchWindow();

private slots:
    void on_pushButton_searchNews_clicked();

    void on_pushButton_delThisNews_clicked();

private:
    Ui::searchWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *applyNews;

    void addNewsToApplySheet();//把数据添加到执行框
    bool eventFilter(QObject * watched, QEvent * event);//设置鼠标活动
    void deleteNewsFromApplySheet();//从执行框中删除添加的信息


};

#endif // SEARCHWINDOW_H
