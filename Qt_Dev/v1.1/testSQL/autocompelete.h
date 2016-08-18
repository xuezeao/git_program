#ifndef AUTOCOMPELETE_H
#define AUTOCOMPELETE_H

#include <QWidget>

namespace Ui {
class autocompelete;
}

class autocompelete : public QWidget
{
    Q_OBJECT

public:
    explicit autocompelete(QWidget *parent = 0);
    ~autocompelete();

private:
    Ui::autocompelete *ui;
};

#endif // AUTOCOMPELETE_H
