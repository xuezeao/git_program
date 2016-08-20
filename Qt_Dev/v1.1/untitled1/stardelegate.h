#ifndef STARDELEGATE_H
#define STARDELEGATE_H

#include <QStyledItemDelegate>

class stardelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit stardelegate(QObject *parent = 0);

signals:

public slots:

};

#endif // STARDELEGATE_H
