#ifndef RELATIONALTABLEMODEL_H
#define RELATIONALTABLEMODEL_H

#include <QWidget>
#include <QSqlRelationalTableModel>


namespace Ui {
class relationalTableModel;
}

class relationalTableModel : public QWidget
{
    Q_OBJECT

public:
    explicit relationalTableModel(QWidget *parent = 0);
    ~relationalTableModel();

private:
    Ui::relationalTableModel *ui;
    QSqlRelationalTableModel *model;

};

#endif // RELATIONALTABLEMODEL_H
