#ifndef REAGENTPPAGE_H
#define REAGENTPPAGE_H

#include <QWidget>

namespace Ui {
class reagentPPage;
}

class reagentPPage : public QWidget
{
    Q_OBJECT

public:
    explicit reagentPPage(QWidget *parent = 0);
    ~reagentPPage();

private:
    Ui::reagentPPage *ui;
};

#endif // REAGENTPPAGE_H
