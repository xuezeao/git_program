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

    void on_pushButton_addChoiceReagent_clicked();

private:
    Ui::searchWindow *ui;
    QSqlTableModel *model;
    QSqlTableModel *applyNews;

};

#endif // SEARCHWINDOW_H
