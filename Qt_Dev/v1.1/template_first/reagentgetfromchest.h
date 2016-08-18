#ifndef REAGENTGETFROMCHEST_H
#define REAGENTGETFROMCHEST_H

#include <QWidget>
#include "dialog_getoperatepage.h"
namespace Ui {
class reagentgetfromchest;
}

class reagentgetfromchest : public QWidget
{
    Q_OBJECT

public slots:
     void openThisPageCloseOperatePage();
public:
    explicit reagentgetfromchest(QWidget *parent = 0);
    ~reagentgetfromchest();
signals:
    void closeGetOperateOpenMain();
private slots:
    void on_pushButton_sureOperaGetAction_clicked();

    void on_commandLinkButton_closeGetPageOpenMain_clicked();

private:
    Ui::reagentgetfromchest *ui;
    Dialog_getoperatepage *getPage;

};

#endif // REAGENTGETFROMCHEST_H
