#ifndef TABLEHEADERVIEW_H
#define TABLEHEADERVIEW_H

#include <QHeaderView>

class TableHeaderView : public QHeaderView
{
public:
    TableHeaderView();
    bool m_bPressed;
    bool m_bChecked;
    bool m_bTristate;
    bool m_bNoChange;
    bool m_bMoving;

    void  paintSection(QPainter *painter, const QRect &rect, int logicalIndex) const;
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    bool event(QEvent *event);

signals:
    void onStateChanged();
public slots:
    void onStateChanged(int state);
};

#endif // TABLEHEADERVIEW_H
