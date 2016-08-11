#ifndef TESTINTERFACE_H
#define TESTINTERFACE_H

#include <QDialog>

namespace Ui {
class testinterface;
}

class testinterface : public QDialog
{
    Q_OBJECT

public:
    explicit testinterface(QWidget *parent = 0);
    ~testinterface();

private:
    Ui::testinterface *ui;
};

#endif // TESTINTERFACE_H
