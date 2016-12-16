#ifndef SHOWALLINFO_H
#define SHOWALLINFO_H

#include <QDialog>
#include <QSqlTableModel>

namespace Ui {
class ShowAllInfo;
}

class ShowAllInfo : public QDialog
{
    Q_OBJECT

public:
    explicit ShowAllInfo(QDialog *parent = 0);
    ~ShowAllInfo();

    void showInfo(int order);//显示试剂信息 0:入柜 1：还
signals:
    void upStatus();//更新归还操作页面的状态
private slots:
    void on_pBt_close_clicked();




private:
    Ui::ShowAllInfo *ui;

    QSqlTableModel *T_model_show;

    QString T_name;

    void saveNotPostInfo(int order);//保存未上传但是正确操作的试剂信息


};

#endif // SHOWALLINFO_H
