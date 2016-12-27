#ifndef RETURNPAGE_H
#define RETURNPAGE_H

#include "global_Vailable.h"
#include <QWidget>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQuery>

#include <QCheckBox>
#include <QPushButton>


#include "execut_window.h"
#include "myqheaderview.h"
#include "checkboxdelegate.h"
#include "pbtdelegate.h"
#include "showallinfo.h"




namespace Ui {
class ReturnPage;
}

class ReturnPage : public QWidget
{
    Q_OBJECT

public:
    explicit ReturnPage(QWidget *parent = 0);
    ~ReturnPage();

    void ModelSelect(int num);//1-入柜

signals:
    void returnPage_To_MainUi();

    void sendInfo_To_AgentiaInfoChange(int status, int OK_Push, int sheetOrder);
    //发送信息到修改处 status 1：单个模式 0：集体模式 OK_Push 2:集体模式 1：单个模式 sheetorder 传递目标列

    void stateUp_ReturnPage(int state);//更改头状态


private slots:
    void on_Bt_backBefore_clicked();

    void on_Bt_searchInfo_clicked();

    void on_Bt_execute_clicked();

    void on_Bt_delete_clicked();

    void on_Bt_add_clicked();

    void onState(int state);

    void receiveAddNew(int option);

    void upSheet_PutInWindow();



    void closePage();


private:
    Ui::ReturnPage *ui;
    Execut_window *Operate_execut_Page;
    ShowAllInfo *show_Info_Page;


    QSqlTableModel *T_model_Other_Search;
    QSqlTableModel *T_model_Other_Execut;

    QSqlQuery *query;

    MyQHeaderView *pHeader;
    ExecuteSheet_R *RHeader;
    CheckBoxDelegate *checkBoxDelegate;
    ReturnAgentiaCheckBoxDelegate* returnAgentiaChechBoxDelegate;

    AddNew *add_NewOperate;
    DelNew *del_NewOperate;
    ChangeNew *change_NewOperate;


    void tableInit(char modelOption);//初始化表格 1:入柜 2：取 3：还
    void addInfo_Search_To_Execute(int i,int rowNum);
    void delInfo_Execute(int i);
    void writeStatus(int order,int num,QString setInfo);//更改表格
    void scanStatus();//写入试剂状态
    void updateNo(int order);//更新编号



    struct T_Table{
        QString T_search_RelationTable;//搜索框关联表格
        QString T_execut_RelationTable;//执行框关联表格
        int     dialog_model;//区分模式
    }T_TABLE;

    struct T_Table *T_table;
};

#endif // OPERATEWINDOW_H
