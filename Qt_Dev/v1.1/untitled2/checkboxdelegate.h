#ifndef CHECKBOXDELEGATE_H
#define CHECKBOXDELEGATE_H
#include <QMouseEvent>
#include <QStyledItemDelegate>

class CheckBoxDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit CheckBoxDelegate(QObject *parent = 0);
    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
signals:

public slots:

};

#endif // CHECKBOXDELEGATE_H
