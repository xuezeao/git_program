#include "returnpage.h"
#include "ui_returnpage.h"
#include <QSqlRelationalDelegate>

ReturnPage::ReturnPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReturnPage)
{
    ui->setupUi(this);
    T_table = &T_TABLE;

    query                = new QSqlQuery;
    T_model_Other_Execut = new QSqlTableModel;
    T_model_Other_Search = new QSqlTableModel;


    Operate_execut_Page  = new Execut_window;
    show_Info_Page       = new ShowAllInfo;



    pHeader = new MyQHeaderView(Qt::Horizontal,this);
    RHeader = new ExecuteSheet_R(Qt::Horizontal,this);
    checkBoxDelegate = new CheckBoxDelegate(this);
    returnAgentiaChechBoxDelegate = new ReturnAgentiaCheckBoxDelegate(this);

    add_NewOperate = new AddNew(this);
    del_NewOperate = new DelNew(this);
    change_NewOperate = new ChangeNew(this);


    ui->tableView_showSearchInfo->setHorizontalHeader(pHeader);
    ui->tableView_showSearchInfo->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->tableView_showSearchInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);//窗口不可编辑




    ui->tableView_showExecuteInfo->setHorizontalHeader(RHeader);


    ui->tableView_showExecuteInfo->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);

    ui->tableView_showExecuteInfo->setEditTriggers(QAbstractItemView::NoEditTriggers);//窗口不可编辑





    connect(pHeader,SIGNAL(stateUP(int)),this,SLOT(onState(int)));//头改子列
    connect(RHeader,SIGNAL(stateUP_R(int)),this,SLOT(onState(int)));

    connect(checkBoxDelegate,SIGNAL(headUP(int)),pHeader,SLOT(SetHeaderBox(int)));//子改头列
    connect(checkBoxDelegate,SIGNAL(headUP(int)),RHeader,SLOT(SetHeaderBox(int)));
    connect(returnAgentiaChechBoxDelegate,SIGNAL(headUP_R(int)),RHeader,SLOT(SetHeaderBox(int)));

    connect(this,SIGNAL(stateUp_ReturnPage(int)),pHeader,SLOT(SetHeaderBox(int)));//子改头列
    connect(this,SIGNAL(stateUp_ReturnPage(int)),RHeader,SLOT(SetHeaderBox(int)));

    connect(add_NewOperate,SIGNAL(sendNewFromPBT(int)),this,SLOT(receiveAddNew(int)));//添加信息
    connect(del_NewOperate,SIGNAL(sendNewFromPBT(int)),this,SLOT(receiveAddNew(int)));//删除信息




    connect(Operate_execut_Page,SIGNAL(upSheet_From_Execute()),this,SLOT(upSheet_PutInWindow()));//执行界面更新表格
    connect(Operate_execut_Page,SIGNAL(upSheet_From_Execute()),this,SIGNAL(returnPage_To_MainUi()));//返回主界面



}



void ReturnPage::onState(int state)
{
    QString setInfo;

    if((state == 1) || (state == 0))
    {

        if(state == 1)
        {
            setInfo = "选择";

        }else{

            setInfo = "未选择";

        }

        writeStatus(1,1,setInfo);

    }else if((state == 2) || (state == 3))
    {

        if(state == 3)
        {
            setInfo = "选择";

        }else{

            setInfo = "未选择";

        }

        writeStatus(2,1,setInfo);

    }else if((state == 4)||(state == 5)||(state == 6)||(state == 7)||
             (state == 8)||(state == 9))
    {

        if(state == 4)
        {
            setInfo = "归还";
            writeStatus(2,6,setInfo);
        }
        else if(state == 5)
        {
            setInfo = "替换";
            writeStatus(2,7,setInfo);
        }
        else if(state == 6)
        {
            setInfo = "报废";
            writeStatus(2,8,setInfo);
        }
        else if(state == 7)
        {
            setInfo = "未";
            writeStatus(2,6,setInfo);
        }
        else if(state == 8)
        {
            setInfo = "未";
            writeStatus(2,7,setInfo);
        }
        else if(state == 9)
        {
            setInfo = "未";
            writeStatus(2,8,setInfo);
        }


    }
}

void ReturnPage::writeStatus(int order, int num,QString setInfo)//order 0:search 1:execute
{
    int countRow ;
    if(order == 1)
    {
        countRow = T_model_Other_Search->rowCount();
        for(int i = 0; i < countRow; i++)
        {
            T_model_Other_Search->setData(T_model_Other_Search->index(i,num),QString("%1").arg(setInfo));
        }
    }
    else if(order == 2)
    {
        countRow = T_model_Other_Execut->rowCount();
        for(int i = 0; i < countRow; i++)
        {
            T_model_Other_Execut->setData(T_model_Other_Execut->index(i,num),QString("%1").arg(setInfo));
        }
    }
}

ReturnPage::~ReturnPage()
{
    delete ui;
}
/********************************/
void ReturnPage::on_Bt_backBefore_clicked()
{
    closePage();
}

void ReturnPage::on_Bt_searchInfo_clicked()
{
    QString agentiaName = ui->lineEdit_getSearchInfo->text();//获取搜索框的内容
    if(agentiaName == "")
    {
        if(T_table->dialog_model == 1)
        {
            tableInit(1);
        }
        if(T_table->dialog_model == 2)
        {
            tableInit(2);
        }

    }else{
        T_model_Other_Search->setFilter(QString("agentiaName like '%%1%'").arg(agentiaName));//筛选结果
    }
}

void ReturnPage::on_Bt_execute_clicked()
{
    /***************执行前扫描选项******************/

    /*********************************/
    updateNo(1);//更新id编码
    scanStatus();//扫描试剂操作
//    setPBTEnable(2);//注销功能

    if(T_table->dialog_model == 3)
    {

       Operate_execut_Page->executeInit(2);
       Operate_execut_Page->exec();
    }

}

void ReturnPage::on_Bt_delete_clicked()
{
    int countRow = T_model_Other_Execut->rowCount();
    for(int i = 0;i < countRow; i++)
    {
        QString getValue = T_model_Other_Execut->data(T_model_Other_Execut->index(i,1)).toString();
        if(getValue == "选择")
        {
            delInfo_Execute(i);
        }
    }

    emit stateUp_ReturnPage(1);
    emit stateUp_ReturnPage(2);

    T_model_Other_Search->submitAll();
    T_model_Other_Execut->submitAll();

}

void ReturnPage::on_Bt_add_clicked()
{

    int countRow_S = T_model_Other_Search->rowCount();
    int rowNum = 0;
    int countRow_P = T_model_Other_Execut->rowCount();

    rowNum = countRow_P;


    for(int i = 0;i < countRow_S; i++)
    {
        QString getValue = T_model_Other_Search->data(T_model_Other_Search->index(i,1)).toString();
        if(getValue == "选择")
        {
            addInfo_Search_To_Execute(i,rowNum);
            rowNum++;

        }

    }
    emit stateUp_ReturnPage(1);
    emit stateUp_ReturnPage(2);


    T_model_Other_Search->submitAll();
    T_model_Other_Execut->submitAll();

}



/**************************************************/
void ReturnPage::ModelSelect(int num)//1:入柜 2：取 3：还
{
    switch (num) {
    case 3:{
        T_table->T_execut_RelationTable = "T_AgentiaWaitExecute";
        T_table->T_search_RelationTable = "T_AgentiaWaitSaving" ;
        T_table->dialog_model = 3;
        ui->label_title->setText("还试剂");


        tableInit(3);
        updateNo(2);
        break;
    }
    default:
        break;
    }



}


void ReturnPage::tableInit(char modelOption)//1:入柜
{
      if(modelOption == 3)//还试剂
        {
            T_model_Other_Search->setTable(QString("%1").arg(T_table->T_search_RelationTable));
            T_model_Other_Search->select();
            T_model_Other_Search->setHeaderData(0,Qt::Horizontal,QObject::tr("添加"));
            T_model_Other_Search->setHeaderData(1,Qt::Horizontal,QObject::tr("勾选"));
            T_model_Other_Search->setHeaderData(2,Qt::Horizontal,QObject::tr("试剂名"));
            T_model_Other_Search->setHeaderData(3,Qt::Horizontal,QObject::tr("额定容积"));
            T_model_Other_Search->setHeaderData(4,Qt::Horizontal,QObject::tr("试剂容量"));
            T_model_Other_Search->setHeaderData(5,Qt::Horizontal,QObject::tr("到期日期"));
            T_model_Other_Search->setHeaderData(6,Qt::Horizontal,QObject::tr("抽屉号"));
            T_model_Other_Search->setHeaderData(7,Qt::Horizontal,QObject::tr("位置"));
            T_model_Other_Search->setHeaderData(8,Qt::Horizontal,QObject::tr("试剂ID"));
            T_model_Other_Search->setHeaderData(9,Qt::Horizontal,QObject::tr("位置ID"));
            T_model_Other_Search->setHeaderData(10,Qt::Horizontal,QObject::tr("状态"));

            T_model_Other_Search->setEditStrategy(QSqlTableModel::OnManualSubmit);//自动提交
            ui->tableView_showSearchInfo->setModel(T_model_Other_Search);//关联窗口
            ui->tableView_showSearchInfo->setItemDelegateForColumn(2,add_NewOperate);

            ui->tableView_showSearchInfo->setItemDelegateForColumn(1,checkBoxDelegate);


            /**********************************************************************/
            T_model_Other_Execut->setTable(QString("%1").arg(T_table->T_execut_RelationTable));
            T_model_Other_Execut->select();

            T_model_Other_Execut->setHeaderData(0,Qt::Horizontal,QObject::tr("添加"));
            T_model_Other_Execut->setHeaderData(1,Qt::Horizontal,QObject::tr("勾选"));
            T_model_Other_Execut->setHeaderData(2,Qt::Horizontal,QObject::tr("试剂名"));
            T_model_Other_Execut->setHeaderData(3,Qt::Horizontal,QObject::tr("额定容积"));
            T_model_Other_Execut->setHeaderData(4,Qt::Horizontal,QObject::tr("试剂容量"));
            T_model_Other_Execut->setHeaderData(5,Qt::Horizontal,QObject::tr("到期日期"));
            T_model_Other_Execut->setHeaderData(6,Qt::Horizontal,QObject::tr("归还"));
            T_model_Other_Execut->setHeaderData(7,Qt::Horizontal,QObject::tr("替换"));
            T_model_Other_Execut->setHeaderData(8,Qt::Horizontal,QObject::tr("报废"));
            T_model_Other_Execut->setHeaderData(9,Qt::Horizontal,QObject::tr("抽屉号"));
            T_model_Other_Execut->setHeaderData(10,Qt::Horizontal,QObject::tr("位置"));
            T_model_Other_Execut->setHeaderData(11,Qt::Horizontal,QObject::tr("试剂ID"));
            T_model_Other_Execut->setHeaderData(12,Qt::Horizontal,QObject::tr("位置ID"));
            T_model_Other_Execut->setHeaderData(13,Qt::Horizontal,QObject::tr("状态"));


            T_model_Other_Execut->setEditStrategy(QSqlTableModel::OnManualSubmit);//自动提交

            ui->tableView_showExecuteInfo->setModel(T_model_Other_Execut);
            ui->tableView_showExecuteInfo->setItemDelegateForColumn(2,del_NewOperate);

            ui->tableView_showExecuteInfo->setItemDelegateForColumn(1,checkBoxDelegate);
            ui->tableView_showExecuteInfo->setItemDelegate(returnAgentiaChechBoxDelegate);


        }

      setPBTEnable(1);


        this->showFullScreen();//主屏幕最大化

}

void ReturnPage::receiveAddNew(int option)//1：添加；2：删除；3：修改
{
    int currentRow;
    if(option == 1)//添加
    {
        int countrow = T_model_Other_Execut->rowCount();
        currentRow = ui->tableView_showSearchInfo->currentIndex().row();
        addInfo_Search_To_Execute(currentRow,countrow);

    }
    if(option == 2)
    {
        currentRow = ui->tableView_showExecuteInfo->currentIndex().row();
        delInfo_Execute(currentRow);


    }

}

void ReturnPage::addInfo_Search_To_Execute(int i, int rowNum)//将对应的信息添加到执行框
{

    if(T_table->dialog_model == 3)//还
    {
        T_model_Other_Search->setData(T_model_Other_Search->index(i,1),QString("未选择"));

        int getC_No = T_model_Other_Search->data(T_model_Other_Search->index(i,0)).toInt();
        QString getC_AName = T_model_Other_Search->data(T_model_Other_Search->index(i,2)).toString();
        QString getC_bottleCapacity = T_model_Other_Search->data(T_model_Other_Search->index(i,3)).toString();
        QString getC_dose = T_model_Other_Search->data(T_model_Other_Search->index(i,4)).toString();
        QString getC_expireDate = T_model_Other_Search->data(T_model_Other_Search->index(i,5)).toString();
        int getC_drawerNo = T_model_Other_Search->data(T_model_Other_Search->index(i,6)).toInt();
        int getC_positionNo = T_model_Other_Search->data(T_model_Other_Search->index(i,7)).toInt();
        int getC_AID = T_model_Other_Search->data(T_model_Other_Search->index(i,8)).toInt();
        int getC_positionID = T_model_Other_Search->data(T_model_Other_Search->index(i,9)).toInt();
//        QString getC_judgeA = T_model_Other_Search->data(T_model_Other_Search->index(i,11)).toString();


        T_model_Other_Execut->insertRow(rowNum);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,0),getC_No);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,1),QString("未选择"));
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,2),getC_AName);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,3),getC_bottleCapacity);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,4),getC_dose);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,5),getC_expireDate);

        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,6),QString("归还"));
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,7),QString("未"));
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,8),QString("未"));

        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,9),getC_drawerNo);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,10),getC_positionNo);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,11),getC_AID);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,12),getC_positionID);
        T_model_Other_Execut->setData(T_model_Other_Execut->index(rowNum,13),QString("未归还"));




        T_model_Other_Search->removeRow(i);
    }

    T_model_Other_Execut->submitAll();
    T_model_Other_Search->submitAll();

}

void ReturnPage::delInfo_Execute(int i)
{

    if(T_table->dialog_model == 3)//还  删除添加到另一处
    {
        T_model_Other_Execut->setData(T_model_Other_Execut->index(i,1),QString("未选择"));

        int getC_No = T_model_Other_Execut->data(T_model_Other_Execut->index(i,0)).toInt();
        QString getC_AName = T_model_Other_Execut->data(T_model_Other_Execut->index(i,2)).toString();
        QString getC_bottleCapacity = T_model_Other_Execut->data(T_model_Other_Execut->index(i,3)).toString();
        QString getC_dose = T_model_Other_Execut->data(T_model_Other_Execut->index(i,4)).toString();
        QString getC_expireDate = T_model_Other_Execut->data(T_model_Other_Execut->index(i,5)).toString();

        int getC_drawerNo = T_model_Other_Execut->data(T_model_Other_Execut->index(i,9)).toInt();
        int getC_positionNo = T_model_Other_Execut->data(T_model_Other_Execut->index(i,10)).toInt();
        int getC_AID = T_model_Other_Execut->data(T_model_Other_Execut->index(i,11)).toInt();
        int getC_positionID = T_model_Other_Execut->data(T_model_Other_Execut->index(i,12)).toInt();
//        QString getC_judgeA = T_model_Other_Execut->data(T_model_Other_Execut->index(i,10)).toString();


        int rowNum = T_model_Other_Search->rowCount();
        T_model_Other_Search->insertRow(rowNum);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,0),getC_No);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,1),QString("未选择"));
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,2),getC_AName);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,3),getC_bottleCapacity);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,4),getC_dose);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,5),getC_expireDate);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,6),getC_drawerNo);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,7),getC_positionNo);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,8),getC_AID);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,9),getC_positionID);
        T_model_Other_Search->setData(T_model_Other_Search->index(rowNum,10),QString("未归还"));




        T_model_Other_Execut->removeRow(i);

    }

    T_model_Other_Execut->submitAll();
    T_model_Other_Search->submitAll();


}

void ReturnPage::upSheet_PutInWindow()
{
    T_model_Other_Execut->select();

}

void ReturnPage::closePage()
{
    emit returnPage_To_MainUi();
    this->close();
}


void ReturnPage::scanStatus()
{//6,7,8
    QString returnA = "";
    QString changeA = "";
    QString desertA = "";
    QString error = "";

    int allrow = T_model_Other_Execut->rowCount();

    if(T_table->dialog_model == 3)
    {
        for(int i = 0; i <= allrow; i++)
        {
            returnA = T_model_Other_Execut->data(T_model_Other_Execut->index(i,6)).toString();
            changeA = T_model_Other_Execut->data(T_model_Other_Execut->index(i,7)).toString();
            desertA = T_model_Other_Execut->data(T_model_Other_Execut->index(i,8)).toString();

            if(returnA == "归还")
            {
                error = "归还";
            }
            else if(changeA == "替换")
            {
                error = "替换";
            }
            else if(desertA == "报废")
            {
                error = "报废";
            }
            else if((returnA == "未")||(changeA == "未")||(desertA == "未"))
            {
                error = "归还";
            }

            T_model_Other_Execut->setData(T_model_Other_Execut->index(i,13),error);
            T_model_Other_Execut->submitAll();
        }

    }
}

void ReturnPage::updateNo(int order)//更新数据表格行列号
//1：执行框表格序列号 2：顺序重写两个表格顺序号
{

    int E_allRow = 0;//执行表格的行数
    int S_allRow = 0;//待选表格的行数

    E_allRow = T_model_Other_Execut->rowCount();
    S_allRow = T_model_Other_Search->rowCount();

    if(order == 1)
    {


        for(int i = 0 ; i < E_allRow ; i++)
        {
            T_model_Other_Execut->setData(T_model_Other_Execut->index(i,0),i+1);
            T_model_Other_Execut->submitAll();
        }
    }
    else if(order == 2)
    {
        updateNo(1);

        for(int i = 0 ; i < S_allRow; i++)
        {
            T_model_Other_Search->setData(T_model_Other_Search->index(i,0),E_allRow+i+1);
            T_model_Other_Search->submitAll();
        }

    }

}

void ReturnPage::setPBTEnable(int status)//设置按钮使能
//1：使能 2：注销
{
    if(status == 1)//使能
    {
        ui->Bt_add->setEnabled(true);
        ui->Bt_backBefore->setEnabled(true);
        ui->Bt_delete->setEnabled(true);
        ui->Bt_execute->setEnabled(true);
        ui->Bt_searchInfo->setEnabled(true);
    }
    else if(status == 2)//注销功能
    {
        ui->Bt_add->setEnabled(false);
        ui->Bt_backBefore->setEnabled(false);
        ui->Bt_delete->setEnabled(false);
        ui->Bt_execute->setEnabled(false);
        ui->Bt_searchInfo->setEnabled(false);
    }
}

