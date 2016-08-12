#ifndef MYSQLQUERYMODEL_H
#define MYSQLQUERYMODEL_H

#include <QSqlQueryModel>

class mysqlquerymodel : public QSqlQueryModel
{
    Q_OBJECT
public:
    explicit mysqlquerymodel(QObject *parent = 0);

signals:

public slots:

};

#endif // MYSQLQUERYMODEL_H
