#ifndef PLACEREAGENT_H
#define PLACEREAGENT_H

#include <QWidget>

namespace Ui {
class placeReagent;
}

class placeReagent : public QWidget
{
    Q_OBJECT

public:
    explicit placeReagent(QWidget *parent = 0);
    ~placeReagent();

private:
    Ui::placeReagent *ui;
};

#endif // PLACEREAGENT_H
