#ifndef REAGENTPLACE_H
#define REAGENTPLACE_H

#include <QWidget>
#include "dialog_placeoperatepage.h"
#include <QtSql/QSqlRelationalTableModel>
#include <QTimer>
#include <QtSql/QSqlTableModel>
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
signals:
     void timeout();//试剂列有字段自增一行
private slots:
    void on_commandLinkButton_fromPlaceToChoicePage_clicked();

    void on_pushButton_sureOperate_clicked();
    void auto_AddRow();//自增一行


    void on_pushButton_deletReagentPlace_clicked();

signals:
    void closePlacePageOpenChoice();
private:
    Ui::reagentPlace *ui;
    Dialog_placeoperatepage *placeOperatePage;//弹窗
    QSqlRelationalTableModel* model;
    QTimer* timer;

    void getSheetAddShow();//获取新建表格、保存和更新显示

};

#endif // REAGENTPLACE_H
