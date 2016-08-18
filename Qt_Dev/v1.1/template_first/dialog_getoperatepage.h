#ifndef DIALOG_GETOPERATEPAGE_H
#define DIALOG_GETOPERATEPAGE_H

#include <QDialog>

namespace Ui {
class Dialog_getoperatepage;
}

class Dialog_getoperatepage : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog_getoperatepage(QWidget *parent = 0);
    ~Dialog_getoperatepage();
signals:
    void closeGetOperatePageToGetInterface();
//    void operateOKBackMainUI();
private slots:
    void on_pushButton_cancelOK_clicked();

    void on_pushButton_operateOK_clicked();

private:
    Ui::Dialog_getoperatepage *ui;
};

#endif // DIALOG_GETOPERATEPAGE_H
