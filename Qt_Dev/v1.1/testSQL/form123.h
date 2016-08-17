#ifndef FORM123_H
#define FORM123_H
#include <QStandardItemModel>
#include <QSqlTableModel>
#include <QWidget>

namespace Ui {
class Form123;
}

class Form123 : public QWidget
{
    Q_OBJECT

public:
    explicit Form123(QWidget *parent = 0);
    ~Form123();
//    void mousePressEvent(QMouseEvent *event);
signals:
    void movesignal();
private:
    Ui::Form123 *ui;
    QStandardItemModel* model;
};

#endif // FORM123_H
