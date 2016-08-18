#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLineEdit>
#include <QFile>
#include <QCompleter>
#include <QStringListModel>

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
    void editComplete();
private:
    Ui::MainWindow *ui;
    QLineEdit *search_line_edit;
    QStringList word_list;
    QStringListModel *string_list_model;
    QCompleter *completer;
};

#endif // MAINWINDOW_H
