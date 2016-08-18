#ifndef DIALOG_PLACEOPERATEPAGE_H
#define DIALOG_PLACEOPERATEPAGE_H

#include <QDialog>

namespace Ui {
class Dialog_placeoperatepage;
}

class Dialog_placeoperatepage : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_placeoperatepage(QWidget *parent = 0);
    ~Dialog_placeoperatepage();

signals:
    void closePlaceOperatePageBackPlaceEditPage();
private slots:
    void on_pushButton_backPreviousOption_clicked();

private:
    Ui::Dialog_placeoperatepage *ui;
};

#endif // DIALOG_PLACEOPERATEPAGE_H
