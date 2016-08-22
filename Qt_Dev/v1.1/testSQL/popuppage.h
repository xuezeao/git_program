#ifndef POPUPPAGE_H
#define POPUPPAGE_H
#include <QSqlTableModel>
#include <QDialog>

namespace Ui {
class popupPage;
}


class popupPage : public QDialog
{
    Q_OBJECT
signals:
    void backplacepage();
    void backGPage();
public:
    explicit popupPage(QWidget *parent = 0);
    ~popupPage();
     void showReagentTableView();
     void selectModel(int num);//模式显示

private slots:
    void on_pushButton_backPreviousOption_clicked();

    void on_pushButton_placedNext_clicked();

    void on_pushButton_jumpThisOption_clicked();



private:
    Ui::popupPage *ui;
    QSqlTableModel *model;

    void showmain();
    void showNeedPlaceReagent();

};

#endif // POPUPPAGE_H
