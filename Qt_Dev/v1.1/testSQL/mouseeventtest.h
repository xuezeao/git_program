#ifndef MOUSEEVENTTEST_H
#define MOUSEEVENTTEST_H
#include <QSqlTableModel>
#include <QDialog>

namespace Ui {
class mouseEventTest;
}

class mouseEventTest : public QDialog
{
    Q_OBJECT

public:
    explicit mouseEventTest(QWidget *parent = 0);
    ~mouseEventTest();

private:
    Ui::mouseEventTest *ui;
    void mouseDoubleClickEvent(QMouseEvent*);
    QSqlTableModel *model;
    bool eventFilter(QObject * watched, QEvent * event);
};

#endif // MOUSEEVENTTEST_H
