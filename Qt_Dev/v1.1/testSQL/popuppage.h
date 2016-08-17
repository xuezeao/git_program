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
public:
    explicit popupPage(QWidget *parent = 0);
    ~popupPage();
     void showReagentTableView();

private slots:
    void on_pushButton_backPreviousOption_clicked();

    void on_pushButton_placedNext_clicked();

    void on_pushButton_jumpThisOption_clicked();

private:
    Ui::popupPage *ui;
    QSqlTableModel *model;

    void showNeedPlaceReagent();

};

#endif // POPUPPAGE_H
