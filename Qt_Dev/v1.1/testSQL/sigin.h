#ifndef SIGIN_H
#define SIGIN_H

#include <QWidget>
#include "mainui.h"
namespace Ui {
class sigin;
}

class sigin : public QWidget
{
    Q_OBJECT

public:
    explicit sigin(QWidget *parent = 0);
    ~sigin();
signals:
//    void open_Option();
private slots:
    void on_pushButton_sigin_clicked();

private:
    Ui::sigin *ui;
    MainUI *MainUI_page;
};

#endif // SIGIN_H
