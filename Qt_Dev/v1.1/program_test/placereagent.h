#ifndef PLACEREAGENT_H
#define PLACEREAGENT_H

#include <QWidget>
#include <QModelIndex>
#include <QSqlTableModel>


namespace Ui {
class placeReagent;
}

class placeReagent : public QWidget
{
    Q_OBJECT

public:
    explicit placeReagent(QWidget *parent = 0);
    ~placeReagent();

private slots:
    void on_pushButton_inquire_clicked();

    void on_pushButton_pushChange_clicked();

    void on_pushButton_returnOption_clicked();

    void on_pushButton_showAllSheet_clicked();

    void on_pushButton_upOrder_clicked();

    void on_pushButton_downOrder_clicked();

    void on_pushButton_delCheckedRow_clicked();

    void on_pushButton_addOption_clicked();

private:
    Ui::placeReagent *ui;
   QSqlTableModel* model;
};

#endif // PLACEREAGENT_H
