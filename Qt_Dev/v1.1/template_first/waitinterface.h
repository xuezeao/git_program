#ifndef WAITINTERFACE_H
#define WAITINTERFACE_H

#include <QWidget>

namespace Ui {
class waitInterface;
}

class waitInterface : public QWidget
{
    Q_OBJECT

public:
    explicit waitInterface(QWidget *parent = 0);
    ~waitInterface();
signals:
    void openLoginPage();

private:
    Ui::waitInterface *ui;
    void mousePressEvent(QMouseEvent * event);
    bool eventFilter(QObject * watched, QEvent * event);
};

#endif // WAITINTERFACE_H
