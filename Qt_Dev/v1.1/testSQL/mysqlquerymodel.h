#ifndef MYSQLQUERYMODEL_H
#define MYSQLQUERYMODEL_H

#include <QSqlQueryModel>

class mysqlquerymodel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit mysqlquerymodel(QObject *parent = 0);
    Qt::ItemFlags flags(const QModelIndex &index) const;
     bool setData(const QModelIndex &index, const QVariant &value, int role);
     QVariant data(const QModelIndex &item, int role=Qt::DisplayRole) const;

signals:

public slots:
private:
     bool setName(int studentId, const QString &name);
         void refresh();


};

#endif // MYSQLQUERYMODEL_H
