#include "execut_window.h"
#include "ui_execut_window.h"
#include <QSqlQuery>
#include <QPalette>
#include <QApplication>
#include <QDesktopWidget>
#include <QElapsedTimer>
#include <QCoreApplication>

Execut_window::Execut_window(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::Execut_window)
{
    ui->setupUi(this);

    Execut_http_GAndP = new http_GAndP;
    Show_Info = new ShowAllInfo;

  /*  setWindowTitle(QString("执行中"));//标题
    setWindowFlags(windowFlags()&~(Qt::WindowMinimizeButtonHint|Qt::WindowMaximizeButtonHint|Qt::WindowCloseButtonHint));
    //令最大化、最小化、关闭按钮失效*/
    this->setWindowFlags(Qt::FramelessWindowHint);//去掉标题栏
//    move((QApplication::desktop()->width()-this->width())/2,(QApplication::desktop()->height()-this->height())/2);//居中

//    this->setWindowFlags(Qt::WindowStaysOnTopHint);//置顶
    QRegExp regx_bottleCapacity("[0-9]+$");//"[a-zA-Z0-9]+$" 长度7纯数字输入3.3格式
    QValidator *validator_bottleCapacity = new QRegExpValidator(regx_bottleCapacity,ui->lineEdit_changeVolume);
    ui->lineEdit_changeVolume->setValidator(validator_bottleCapacity);


 
    execute_V = &EXECUTE;



    connect(Execut_http_GAndP,SIGNAL(sendInfo_To_return_PutIn(int)),this,SLOT(updateReturn(int)));
    connect(Execut_http_GAndP,SIGNAL(sendFalse()),this,SLOT(NetworkError()));
    connect(Show_Info,SIGNAL(upStatus()),this,SIGNAL(upSheet_From_Execute()));//返回主界面


    execute_V->test=0;
}



void Execut_window::updateReturn(int status)//0 成功 1 失败 2 未放置
{
    QSqlQuery query;
    QString error;

    if(status == 0)
    {
        error = "上传成功";
    }
    else if(status == 1)
    {
        error = "上传失败";
    }
    else if(status == 2)
    {
        error = "未放置";
    }

    execute_V->httpCount++;
    query.exec(QString("update %1 set judgeAttitude='%2' where id=%3")//update %1 set judgeAttitude='%2' where rowid=%3
                   .arg(execute_V->T_executeTable).arg(QString(error)).arg(execute_V->httpCount));


    if(execute_V->httpCount < execute_V->acountRow)
    {
        if(execute_V->execute_model == 1)
        {
            http_PG_AgentiaInfo(2,execute_V->httpCount);
        }
        else if(execute_V->execute_model == 2)
        {
            http_PG_AgentiaInfo(3,execute_V->httpCount);
        }
        else if(execute_V->execute_model == 4)
        {
            http_PG_AgentiaInfo(4,execute_V->httpCount);
        }
    }
    else
    {
        closePage();
    }


}

/********************************************************************/

int Execut_window::SCI_send(int order)//0:下发包含开锁 1：查询 2：完成 3:查锁
{

/*
    if(order == 0)
    {
//        IntoDrawer(0x01);
        int send_positionNo[1];
        send_positionNo[0]={execute_V->positionNO};
        unsigned char DataAct[8]={0};
        SetDataAct(send_positionNo,1,DataAct);
        if(wait4SetAct(0x01,DataAct)==-1)
            qDebug("ERROR！");
    }
    else if(order == 1)
    {
        return wait4Alarm(0x01);

    }
    else if(order == 2)
    {
        wait4SendAct(0x01,0);
    }
    else if(order == 3)
    {

    }


*/
}



/*************************按键区*************************************/



Execut_window::~Execut_window()
{
    delete ui;
}

void Execut_window::on_pBt_cancal_clicked()
{
    executeInfoError(1,"正在上报，请稍后");

    if(execute_V->execute_model == 2)
    {
        ui->pBt_cancal->hide();
        ui->pBt_next->hide();
        ui->pBt_ignore->hide();
        http_PG_AgentiaInfo(2,0);
    }
    else if(execute_V->execute_model == 1)
    {
        ui->pBt_cancal->hide();
        ui->pBt_next->hide();
        ui->pBt_ignore->hide();
        http_PG_AgentiaInfo(1,0);

    }
    else if(execute_V->execute_model == 4)
    {
        ui->pBt_cancal->hide();
        ui->pBt_ignore->hide();
        ui->pBt_next->hide();
        http_PG_AgentiaInfo(4,0);
    }
}

void Execut_window::on_pBt_next_clicked()
{

    if(execute_V->pBt_status == 1)
    {
        execute_V->pBt_status = 2;
        pBt_operate(1);
        qDebug()<<" enter ";

    }



}
void Execut_window::on_pBt_ignore_clicked()
{
    /**********跳过*********************/
    SCI_send(2);
    operateNext();
    executeInfoError(1,"请取走试剂");
    if((execute_V->judgeStatus == 1)&&(execute_V->execute_model == 4))
    {
        changeAgentiaStatus(6,2);//这时候跳过属于报废试剂操作
        execute_V->judgeStatus = 0;//每一次跳过都是新的试剂信息
    }

}


/********************自定函数区************************/

void Execut_window::executeInit(int num)
{
    switch (num) {
    case 1:{
        ui->label_title->setText("入柜");
        execute_V->T_executeTable="T_Task_PutIn";
        execute_V->execute_model = 1;
        ui->label_oddDose->hide();
        ui->label_changeNewAgentia->hide();
        ui->lineEdit_changeVolume->hide();
        ui->CMB_V->hide();
        break;
    }
    case 2:{
        ui->label_title->setText("归还");
        execute_V->T_executeTable="T_AgentiaWaitExecute";
        execute_V->execute_model = 2;
        ui->label_oddDose->show();
        ui->label_changeNewAgentia->show();
        ui->lineEdit_changeVolume->show();
        ui->CMB_V->show();
        break;
    }
    case 4:{
        ui->label_title->setText("替换");
        execute_V->T_executeTable = "T_AgentiaReplace";
        execute_V->execute_model = 4;
        ui->label_oddDose->show();
        ui->label_changeNewAgentia->show();
        ui->label_oddDose->show();
        ui->CMB_V->show();
        break;
    }
    default:
        break;
    }


    initVariable();
}

void Execut_window::initVariable()
{
    execute_V->acountRow = 0;
    execute_V->currentAcount = 1;
    execute_V->pBt_status = 1;
    execute_V->orderPosition = 1;
    execute_V->httpCount = 0;
    execute_V->drawerAcount =1;
    execute_V->positionId = 0;
    execute_V->judgeStatus = 0;
    for(int i = 0 ;i < 33 ; i++)
    {
        saveDrawer[i] = 0;
        saveRowid [i] = 0;
    }
    ui->pBt_cancal->show();
    ui->pBt_next->show();
    ui->pBt_ignore->show();



    getAllCount();

    if(saveDrawer[0] == 0)
    {
        this->close();
    }
    else{
       searchPositionInfo(execute_V->T_executeTable,1);//如果抽屉数为零关闭，否则获取saveDrawer[1]的位置数和号码
    }

    pBt_operate(0);

}

void Execut_window::getAllCount()
{
    QSqlQuery query;
    int temporaryA = 0;
    int temporaryB = 0;
    int k = 0;
    int choiceModel = 0;//选择drawerNo的位置
    saveDrawer[0] = 0;

    if(execute_V->execute_model == 1)//入柜
    {
        choiceModel = 17;
    }
    else if(execute_V->execute_model == 2)//还
    {
        choiceModel = 9;
    }
    else if(execute_V->execute_model == 4)//替换
    {
        executeInfoError(1,"请取出试剂");
        choiceModel = 8;
    }

    if((execute_V->execute_model == 2)||(execute_V->execute_model == 1)||(execute_V->execute_model == 4))
    {

        query.exec(QString("SELECT * from %1 ORDER BY drawerNo ASC").arg(execute_V->T_executeTable));

        query.last();
        execute_V->acountRow = query.at()+1;//0


        for(int i = 0; i < execute_V->acountRow; i++)
        {
            query.seek(i);        
            temporaryA = query.value(choiceModel).toInt();
            if(temporaryA != temporaryB)
            {
                temporaryB = temporaryA;
                k++;
                saveDrawer[0]=k;
                saveDrawer[k]=temporaryB;
            }


        }



    }
}

void Execut_window::searchPositionInfo(QString name,int i)//获取对应抽屉内的试剂rowid
{
    QSqlQuery query;
    int temporaryC = 0;
    query.exec(QString("select * from %1 where drawerNo=%2").arg(name).arg(saveDrawer[i]));


    query.last();
    temporaryC= query.at()+1;//at 0开始

    for(int i = 0; i < temporaryC ;i++)
    {
        query.seek(i);
        saveRowid[0] = i+1;
        saveRowid[i+1] = query.value(0).toInt();
    }


}

void Execut_window::getAgentiaPositionInfo(int i)//1：入柜 尺寸 2：还 位置
{
    QSqlQuery query;
    QString A_name;
    int A_Drawer;
    int A_Position;
    QString position;
    QString judgeAttitude;
    QString Volume;
    QString newDose;


    query.exec(QString("select * from %1 where id=%2").arg(execute_V->T_executeTable).arg(saveRowid[i]));
    query.next();


    if(execute_V->execute_model == 2)
    {
        A_name = query.value(2).toString();
        A_Drawer  = query.value(9).toInt();
        A_Position = query.value(10).toInt();
        Volume = query.value(4).toString();


    }
    else if(execute_V->execute_model == 1)
    {     
        A_name = query.value(3).toString();
        A_Drawer  = query.value(17).toInt();
        A_Position = query.value(18).toInt();
        Volume = query.value(6).toString();
    }
    else if(execute_V->execute_model == 4)
    {
        A_name = query.value(3).toString();
        A_Drawer =query.value(8).toInt();
        A_Position = query.value(9).toInt();
        Volume = query.value(5).toString();

        newDose = query.value(6).toString();
        newDose.replace("ml","");
        newDose.replace("g","");
        execute_V->newDose = newDose;
        ui->lineEdit_changeVolume->setText(newDose);

    }


    execute_V->drawerNo   = A_Drawer;
    execute_V->positionNO = A_Position;

    SCI_send(0);

    position = QString("抽屉号： %1,位置号: %2").arg(A_Drawer).arg(A_Position);

    updateShowInfo(A_name,Volume,position);

    if((execute_V->execute_model == 1)||(execute_V->execute_model == 2))
    {
        executeInfoError(1,"请继续操作");//更新显示

        if(execute_V->execute_model == 2)
        {
            judgeAttitude = query.value(13).toString();

            if(judgeAttitude == "归还")
            {
                ui->label_changeNewAgentia->setText("剩余：");
            }
            else if(judgeAttitude == "替换")
            {
                ui->label_changeNewAgentia->setText("替换为：");
            }
            else if(judgeAttitude == "报废")
            {
                changeAgentiaStatus(6,0);
                operateNext();
            }
        }
    }
    else if((execute_V->execute_model == 4))
    {

        ui->label_changeNewAgentia->setText("剩余：");
    }

}

void Execut_window::updateShowInfo(QString A_name, QString Volume, QString Position)
{
   ui->lineEdit_Name->setText(A_name);
   ui->lineEdit_Position->setText(Position);
   ui->lineEdit_Volume->setText(Volume);
}

void Execut_window::http_PG_AgentiaInfo(int order, int i)// order 2：入柜上传 3：还上传
{
    if(order == 1)
    {
        Execut_http_GAndP->jsonForSend(6,execute_V->T_executeTable,i);//入柜
    }
    else if(order == 2)
    {
        Execut_http_GAndP->jsonForSend(8,execute_V->T_executeTable,i);//还
    }
    else if(order == 4)
    {
        Execut_http_GAndP->jsonForSend(9,execute_V->T_executeTable,i);//替换
    }
}

int Execut_window::pBt_operate(int order)//0：下一步 1：查询
{

     if(order == 0)
     {
        if(execute_V->currentAcount < execute_V->acountRow+1)
        {


            if((execute_V->execute_model == 2)||(execute_V->execute_model == 1)||
                    (execute_V->execute_model == 4))
            {
                if(execute_V->orderPosition <= saveRowid[0])
                {


                    getAgentiaPositionInfo(execute_V->orderPosition);
                }
                else
                {
                    /***************关闭柜门********************/
//                    checkLockStatus();

                    /*****************************************/
                    if(execute_V->drawerAcount <= saveDrawer[0])
                    {
                        execute_V->orderPosition = 1;

                        execute_V->drawerAcount++;
                        searchPositionInfo(execute_V->T_executeTable,execute_V->drawerAcount);

                        pBt_operate(0);
                    }
                }
            }
        }
        else
        {
            /***************关闭柜门********************/
//            checkLockStatus();

            /*****************************************/
            executeInfoError(1,"正在上报，请稍后");

            ui->pBt_cancal->hide();
            ui->pBt_next->hide();
            ui->pBt_ignore->hide();

            if(execute_V->execute_model == 2)
            {
                http_PG_AgentiaInfo(2,0);
            }
            else if(execute_V->execute_model == 1)
            {     
                http_PG_AgentiaInfo(1,0);
            }
            else if(execute_V->execute_model == 4)
            {
                http_PG_AgentiaInfo(4,0);
            }

        }

    }
    else if(order == 1)
    {

        int Error;//0: 错误 1：未完成 2：正确

        /***********查询***********/
        Error=SCI_send(1);
        Error = execute_V->test;
        /**********************/
        if(Error == 2)//正确
        {
            ui->pBt_cancal->show();
            ui->pBt_ignore->show();
            SCI_send(2);         

            if(execute_V->execute_model == 1 || execute_V->execute_model == 2)
            {
                executeInfoError(1,"操作正确，请下一个任务");
                if(execute_V->execute_model == 2)
                {
                    QString dose = ui->lineEdit_changeVolume->text();
                    QString uint = ui->CMB_V->currentText();
                    execute_V->newDose = dose+uint;
                    changeAgentiaStatus(4,1);
                }
                else if(execute_V->execute_model == 1)
                {
                    changeAgentiaStatus(4,1);
                }

            }
            else if(execute_V->execute_model == 4)
            {
                if(execute_V->judgeStatus == 0)
                {
                     executeInfoError(1,"操作正确，请放入替换试剂");
                     execute_V->judgeStatus = 1;
                }
                else if(execute_V->judgeStatus == 1)
                {
                    executeInfoError(1,"请取出试剂");
                    changeAgentiaStatus(4,2);
                    execute_V->judgeStatus = 0;
                }

            }

            operateNext();


        }
        else if(Error == 1)//未完成
        {
            ui->pBt_ignore->show();
            ui->pBt_cancal->show();

            if((execute_V->execute_model == 1)||(execute_V->execute_model == 2))
            {
                executeInfoError(2,"点击跳过，跳过本次任务");
                changeAgentiaStatus(3,2);
            }
            else if(execute_V->execute_model == 4)
            {
                if(execute_V->judgeStatus == 0)//第一次
                {
                    executeInfoError(2,"点击跳过，跳过本次任务");
                    changeAgentiaStatus(3,2);
                }
                else if(execute_V->judgeStatus == 1)//第二次
                {
                    executeInfoError(2,"点击跳过，报废试剂");
                    changeAgentiaStatus(6,2);//报废操作
                    execute_V->judgeStatus = 0;

                }
            }

        }
        else if(Error == 0)//错误
        {
            ui->pBt_cancal->hide();
            ui->pBt_ignore->hide();
            executeInfoError(0,"错误，请更正！");
            changeAgentiaStatus(5,0);

        }

     execute_V->pBt_status = 1;
    }
}

void Execut_window::changeAgentiaStatus(int just , int order)
//更新试剂显示状态 1：上传成功 2：上传失败 3：未操作 4：正确操作 5：错误操作 6:报废操作
// order 1:正常 2：跳过
{
    QSqlQuery query;
    QString error;
    if(just == 1)
    {
        error = "上传成功";

    }else if(just == 2)
    {
        error = "上传失败";
    }else if(just == 3)
    {
        error = "未操作";
    }else if(just == 4)
    {
        error = "正确操作";
    }else if(just == 5)
    {
        error = "错误操作";
    }else if(just == 6)
    {
        error = "报废操作";
    }

    if((execute_V->execute_model == 2)||(execute_V->execute_model == 1)||(execute_V->execute_model == 4))
    {
        if(order == 1)
        {
            query.exec(QString("update %1 set judgeAttitude='%2',dose='%3' where id=%4")
                   .arg(execute_V->T_executeTable).arg(error).arg(execute_V->newDose).arg(saveRowid[execute_V->orderPosition]));

//            ui->lineEdit_changeVolume->clear();//清空输入款内容 测试阶段暂不清空
        }
        else if(order == 2)
        {
            query.exec(QString("update %1 set judgeAttitude='%2' where id=%3")
                   .arg(execute_V->T_executeTable).arg(error).arg(saveRowid[execute_V->orderPosition]));

        }
    }

}

void Execut_window::executeInfoError(int num, QString error)//输出任务状态并执行未成功数据保存
//任务完成情况 0-error  1-操作OK 2-跳过 3 显示OK
{

    if(num == 0)
    {
        QPalette pe;
        pe.setColor(QPalette::WindowText,Qt::red);
        ui->label_RoleStatus->setPalette(pe);
    }
    else if(num == 1)//显示完成并修改数据库
    {
        QPalette pe;
        pe.setColor(QPalette::WindowText,Qt::green);
        ui->label_RoleStatus->setPalette(pe);

    }
    else if(num == 2)
    {
        QPalette pe;
        pe.setColor(QPalette::WindowText,Qt::blue);
        ui->label_RoleStatus->setPalette(pe);

    }
    else if(num == 3)
    {
        QPalette pe;
        pe.setColor(QPalette::WindowText,Qt::green);
        ui->label_RoleStatus->setPalette(pe);
    }


    ui->label_RoleStatus->setText(error);
/****************************************/



}

void Execut_window::savePostFalseInfo()//保存上传失败的试剂
{
    int getC_agentiaId;
    int getC_positionId;
    QSqlQuery query;
    if(execute_V->execute_model == 1)
    {
        query.exec(QString("select * from %1").arg(execute_V->T_executeTable));
        query.seek(execute_V->currentAcount);
        getC_agentiaId = query.value(10).toInt();//试剂ID
        getC_positionId = execute_V->positionId;//位置ID
    }
    else if(execute_V->execute_model ==2 )
    {
        query.exec(QString("select * from %1").arg(execute_V->T_executeTable));
        query.seek(execute_V->currentAcount);
        getC_agentiaId = query.value(11).toInt();//试剂ID
        getC_positionId = query.value(12).toInt();//位置ID
    }

    query.exec(QString("select * from T_UserInfo"));
    query.seek(0);
    int getC_userId = query.value(0).toInt();//获取用户ID

    query.exec(QString("select * from T_WaitPostInfo"));
    query.last();
    int getC_all = query.at();//获取数据表格row

    query.prepare("insert into T_WaitPostInfo (id,userId,agentiaId,\
                  positionId,dose,judgeAttitude) values (?,?,?,?,?,?)");
    query.addBindValue(getC_all+1);
    query.addBindValue(getC_userId);
    query.addBindValue(getC_agentiaId);
    query.addBindValue(getC_positionId);
    query.addBindValue("0");
    query.addBindValue("取");
    query.exec();

}

void Execut_window::operateNext()//执行下一步操作
{


    if(execute_V->execute_model == 2 || execute_V->execute_model == 1)
    {
        execute_V->currentAcount++;
        execute_V->orderPosition++;
    }
    else if(execute_V->execute_model == 4)
    {
        if(execute_V->judgeStatus == 0)//第一次替换取
        {
            execute_V->currentAcount++;
            execute_V->orderPosition++;
        }
        else if(execute_V->judgeStatus == 1)//第二次替换放
        {
            ;
        }
    }
    pBt_operate(0);
}

void Execut_window::NetworkError()//网络连接错误
{
    closePage();

    QMessageBox qMbox;
    qMbox.setText(QString("对不起，无法上传请稍后"));
    qMbox.show();

    waitTaskInfo(1000);//延时1s
    qMbox.close();
}

void Execut_window::closePage()
{
    this->close();

    if(execute_V->execute_model == 2)
    {
        Show_Info->showInfo(1);
    }
    else if(execute_V->execute_model == 1)
    {
        Show_Info->showInfo(0);
    }
    else if(execute_V->execute_model == 4)
    {
        Show_Info->showInfo(2);
    }

    Show_Info->exec();
}

/*****************************************/




void Execut_window::on_pushButton_clicked()
{
    if(execute_V->test == 2)
    {
        execute_V->test = 0;
    }
    else
        execute_V->test++;

    qDebug()<<"OK  -----";
}

void Execut_window::waitTaskInfo(int tim)//延时ms
{
    QElapsedTimer t;
    t.start();
    while(t.elapsed()<tim)
    {
        QCoreApplication::processEvents();
    }
}

void Execut_window::checkLockStatus()//抽屉关闭返回0
{
    if(SCI_send(3))
    {
        QMessageBox qMbox;
        qMbox.setText(QString("请关闭抽屉"));
        qMbox.setStandardButtons(QMessageBox::Ok);
        int ret = qMbox.exec();
        if(ret == QMessageBox::Ok)
        {
            if(SCI_send(3))
            {
                checkLockStatus();
            }
        }
    }

}
