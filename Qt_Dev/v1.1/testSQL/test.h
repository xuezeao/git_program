#ifndef TEST_H
#define TEST_H

#include <QItemDelegate>
#include <QTableView>
#include <QStyledItemDelegate>
class test : public QStyledItemDelegate //继承QItemDelegate这个才是关键
{
    Q_OBJECT
public:
    explicit test(QObject *parent = 0);
////    void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index)const;

    void setEditorData(QWidget *editor, const QModelIndex &index)const ;
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index)const ;

    void updateEditorGeometry(QWidget *editor,const QStyleOptionViewItem &option, const QModelIndex &index)const ;
    QTableView *tableView;
    void hope();


//      void paint(QPainter *painter, const QStyleOptionViewItem &option, const QModelIndex &index) const;
//      bool editorEvent(QEvent *event, QAbstractItemModel *model, const QStyleOptionViewItem &option, const QModelIndex &index);
signals:

public slots:

};

#endif // TEST_H
