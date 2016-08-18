#ifndef REAGENTPLACE_H
#define REAGENTPLACE_H

#include <QWidget>
#include "dialog_placeoperatepage.h"
namespace Ui {
class reagentPlace;
}

class reagentPlace : public QWidget
{
    Q_OBJECT

public:
    explicit reagentPlace(QWidget *parent = 0);
    ~reagentPlace();
public slots:
    void openPlacePage();

private slots:
    void on_commandLinkButton_fromPlaceToChoicePage_clicked();

    void on_pushButton_sureOperate_clicked();

signals:
    void closePlacePageOpenChoice();
private:
    Ui::reagentPlace *ui;
    Dialog_placeoperatepage *placeOperatePage;

};

#endif // REAGENTPLACE_H
