#ifndef REAGENTGPAGE_H
#define REAGENTGPAGE_H

#include <QWidget>

namespace Ui {
class reagentGPage;
}

class reagentGPage : public QWidget
{
    Q_OBJECT

public:
    explicit reagentGPage(QWidget *parent = 0);
    ~reagentGPage();

private:
    Ui::reagentGPage *ui;
};

#endif // REAGENTGPAGE_H
