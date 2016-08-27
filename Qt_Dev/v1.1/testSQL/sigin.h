#ifndef SIGIN_H
#define SIGIN_H

#include <QWidget>

namespace Ui {
class sigin;
}

class sigin : public QWidget
{
    Q_OBJECT

public:
    explicit sigin(QWidget *parent = 0);
    ~sigin();

private:
    Ui::sigin *ui;
};

#endif // SIGIN_H
