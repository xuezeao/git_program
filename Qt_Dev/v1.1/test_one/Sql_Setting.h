       #ifndef SQL_SETTING_H
#define SQL_SETTING_H

#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFile>
#include <QSqlError>


static bool createConnection()
{
//   QSqlDatabase::removeDatabase("QSQLITE");//删除数据库
     QFile::remove("SmartCabinet.db");//删除数据库文件

       QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("SmartCabinet.db");
       if(!db.open()) return false;
       QSqlQuery query;



       query.exec(QString("create table T_UserInfo ([userId] int,[role] int)"));
       //临时存储用户信息
       query.exec(QString("insert into T_UserInfo values (1,0)"));

       query.exec(QString("create table T_CabinetInfo ([cabinetName] varchar,[groupId] int,[groupName] varchar,[drawerAmount] int)"));
       //长期存放柜子信息

       query.exec(QString("create table T_DrawerList ([drawerNo] int,[drawerName] varchar,[drawerSize] varchar,[positionAmount] int,[attribute] int)"));
       //长期抽屉信息

       query.exec(QString("create table T_AgentiaInBox (id int primary key,[checkBox] varchar,[agentiaName] varchar,[bottleCapacity] varchar,[dose] varchar,[drawerNo] int,[positionNo] int,[expireDate] varchar,[attribute] int,[agentiaId] int,[positionId] int)"));
       //在柜信息(点验)

       query.exec(QString("create table T_AgentiaTypeList (id int primary key,[checkBox] varchar,[agentiaName] varchar,\
                          [abbreviation] varchar,[chemicalFormula] varchar,[specification] varchar,[factory] varchar,\
                          [attribute] int,[agentiaTypeId] int,[itemNo] varchar)"));
       //试剂类型
       query.exec(QString("insert into T_AgentiaTypeList values (1,'未选择','1酒精','酒精','100ml','400ml','1',1,1,'1')"));
       query.exec(QString("insert into T_AgentiaTypeList values (2,'未选择','2酒精','酒精','200ml','400ml','1',1,1,'1')"));
       query.exec(QString("insert into T_AgentiaTypeList values (3,'未选择','3酒精','酒精','300ml','400ml','1',1,1,'1')"));
       query.exec(QString("insert into T_AgentiaTypeList values (4,'未选择','4酒精','酒精','400ml','400ml','1',1,1,'1')"));
       query.exec(QString("insert into T_AgentiaTypeList values (5,'未选择','高锰酸钾','酒23精','53123ml','12ml','1',1,1,'1')"));
       query.exec(QString("insert into T_AgentiaTypeList values (6,'未选择','乙醇','酒312精','5230ml','3ml','1',1,1,'1')"));

       query.exec(QString("create table T_AgentiaSaving (id int primary key,[checkBox] varchar,[agentiaName] varchar,\
                          [bottleCapacity] varchar,[dose] varchar,[drawerNo] int,[positionNo] int,[expireDate] varchar,\
                          [attribute] int,[agentiaId] int,[positionId] int,[judgeAttitude] varchar)"));
       //在柜试剂信息

       query.exec(QString("insert into T_AgentiaSaving values (1,'未选择','1酒精','100ml','400ml',1,1,'2010.7.7',1,123,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaSaving values (2,'未选择','2酒精','200ml','500ml',2,1,'2010.7.7',1,123,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaSaving values (3,'未选择','3酒精','300ml','600ml',3,1,'2010.7.7',1,123,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaSaving values (4,'未选择','4酒精','400ml','700ml',3,1,'2010.7.7',1,123,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaSaving values (5,'未选择','3酒精','300ml','600ml',2,3,'2010.7.7',1,13,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaSaving values (6,'未选择','4酒精','400ml','700ml',2,4,'2010.7.7',1,123,2,'未摆放')"));


       query.exec(QString("create table T_AgentiaReplace (id int primary key,[checkBox] varchar,[changeInfo] varchar,[agentiaName] varchar,\
                          [bottleCapacity] varchar,[dose] varchar,[newdose] varchar,[expireDate] varchar,[drawerNo] int,[positionNo] int,\
                          [attribute] int,[agentiaId] int,[positionId] int,[judgeAttitude] varchar)"));
       //替换 操作数据表
       query.exec(QString("insert into T_AgentiaReplace values (1,'未选择','修改','1酒精','100ml','400ml','100ml','2010.7.7',1,1,1,123,2,'未摆放')"));


       query.exec(QString("create table T_AgentiaExecute (id int primary key,[checkBox] varchar,[agentiaName] varchar,\
                          [bottleCapacity] varchar,[dose] varchar,[drawerNo] int,[positionNo] int,[expireDate] varchar,\
                          [attribute] int,[agentiaId] int,[positionId] int,[judgeAttitude] varchar)"));
       //取 操作数据表


       query.exec(QString("create table T_AgentiaWaitSaving (id int primary key,[checkBox] varchar,[agentiaName] varchar,\
                          [bottleCapacity] varchar,[dose] varchar,[expireDate] varchar,\
                          [drawerNo] int,[positionNo] int,[agentiaId] int,[positionId] int,[judgeAttitude] varchar)"));
        //还 存储数据表
       query.exec(QString("insert into T_AgentiaWaitSaving values (1,'未选择','1酒精','600ml','300ml','2010.7.7',1,2,13,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaWaitSaving values (2,'未选择','2酒精','400ml','300ml','2010.7.7',3,2,123,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaWaitSaving values (3,'未选择','3酒精','600ml','300ml','2010.7.7',4,2,123,2,'未摆放')"));
       query.exec(QString("insert into T_AgentiaWaitSaving values (4,'未选择','4酒精','400ml','300ml','2010.7.7',2,2,123,2,'未摆放')"));




       query.exec(QString("create table T_AgentiaWaitExecute (id int primary key,[checkBox] varchar,[agentiaName] varchar,\
                         [bottleCapacity] varchar,[dose] varchar,[expireDate] varchar,[returnA] varchar,[changeA] varchar,[desertA] varchar,\
                         [drawerNo] int,[positionNo] int,[agentiaId] int,[positionId] int,[judgeAttitude] varchar)"));

                  query.exec(QString("insert into T_AgentiaWaitExecute values (1,'未选择','1酒精','600ml','300ml','2010.7.7','归还','1','1',1,2,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (2,'未选择','2酒精','400ml','300ml','2010.7.7','归还','1','1',3,1,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (3,'未选择','3酒精','600ml','300ml','2010.7.7','归还','1','1',7,3,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (4,'未选择','4酒精','400ml','300ml','2010.7.7','归还','1','1',2,3,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (5,'未选择','5酒精','400ml','300ml','2010.7.7','归还','1','1',3,2,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (6,'未选择','6酒精','400ml','300ml','2010.7.7','归还','1','1',4,4,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (7,'未选择','7酒精','400ml','300ml','2010.7.7','归还','1','1',4,5,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (8,'未选择','8酒精','400ml','300ml','2010.7.7','归还','1','1',6,6,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (9,'未选择','9酒精','400ml','300ml','2010.7.7','归还','1','1',6,2,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (10,'未选择','10酒精','400ml','300ml','2010.7.7','归还','1','1',6,4,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (11,'未选择','11酒精','400ml','300ml','2010.7.7','归还','1','1',2,2,123,2,'未摆放')"));
                  query.exec(QString("insert into T_AgentiaWaitExecute values (12,'未选择','12酒精','400ml','300ml','2010.7.7','归还','1','1',2,4,123,2,'未摆放')"));



       //还 操作数据表

       query.exec(QString("create table T_AgentiaSearchInfo (id int primary key,[checkBox] varchar,[agentiaName] varchar,\
                          [bottleCapacity] varchar,[dose] varchar,[drawerNo] int,[positionNo] int,[expireDate] varchar,\
                          [currentUserName] varchar,[agentiaStatus] varchar,[attribute] varchar,[applicant] varchar,\
                          [applyStatus] int,[agentiaId] int,[positionId] int)"));
       //搜索信息


       query.exec(QString("create table T_Task_PutIn (id int primary key,[checkBox] varchar,[changeInfo] varchar,\
                          [agentiaName] varchar,[judgeAttitude] varchar,[bottleCapacity] varchar, [dose] varchar,[drawerSize] varchar,[expireDate] varchar,\
                          [roleStatus] int,[attribute] int,[agentiaTypeId] int,[chemicalFormula] varchar,\
                          [specification] varchar,[factory] varchar,[itemNo] varchar,[positionId] int,[drawerNo] int ,[positionNo] int)"));
       //入柜
       query.exec(QString("insert into T_Task_PutIn values (1,'未选择','1','7酒精','未操作','100ml','400ml','10*10*20','2017.1.1',1,1,1,'1','1','1','1',0,0,0)"));
       query.exec(QString("insert into T_Task_PutIn values (2,'未选择','1','8酒精','未操作','200ml','200ml','10*10*20','2017.1.1',1,0,1,'1','1','1','1',0,0,0)"));
       query.exec(QString("insert into T_Task_PutIn values (3,'未选择','1','9酒精','未操作','300ml','100ml','10*10*20','2017.1.1',1,0,1,'1','1','1','1',0,0,0)"));



//       query.exec(QString("create table T_Task_Operate (id int primary key,[checkBox] varchar,agentiaId int,[agentiaName] varchar,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[drawerNo] int,[drawerName] varchar,[drawerSize] varchar,[positionId] varchar,[positionNo] varchar,[positionName] varchar,[attribute] int)"));
//       //临时存储信息，取，报废，替换，点验，申请任务,待归还信息，入柜的执行界面1
//       query.exec(QString("insert into T_Task_Operate values ('1','1',1,'酒精','500ml','400ml','2017.1.1',1,'Draw-1','10*10*20','1','1','1', 1)"));

//        query.exec(QString("create table T_Task_return (id int ,[checkBox] varchar,[agentiaId] varchar primary key,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[drawerNo] varchar,[drawerName] varchar,[positionNo] varchar,[positionName] varchar,[positionId] varchar,[attribute] varchar)"));
//       //临时存储归还信息
//       query.exec(QString("create table T_Task_return_opetation (id int ,[checkBox] varchar ,[agentiaId] varchar primary key,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[drawerNo] varchar,[drawerName] varchar,[positionNo] varchar,[positionName] varchar,[positionId] varchar,[attribute] varchar)"));
//       //临时存储确定归还信息
//       query.exec(QString("create table T_CabinetStatus (id int primary key,[checkBox] varchar,[cabinetName] varchar,[cabinetStatue] varchar,[temperature] varchar,[humidity] varchar)"));
//       //柜子信息更新表1
//       query.exec(QString("create table T_PositionDisable (id int primary key,[checkBox] varchar,[drawerNo] varchar,[drawerName] varchar,[drawerSize] varchar,[positionAmount] varchar,[attribute] varchar,[drawerStatus] varchar)"));
//       //修改柜子信息1
//       query.exec(QString("create table T_WaringLog (id int primary key,[checkBox] varchar,[cabinetNo] varchar,[drawerNo] varchar,[positionNo] varchar,[taskId] varchar,[message] varchar)"));
//       //报警信息1
//       query.exec(QString("create table T_PositionAllocate ([positionNo] varchar,[positionName] varchar,[positionId] varchar,[drawerNo] varchar,[drawerName] varchar)"));
//       //存储临时位置分配信息1
//       query.exec(QString("create table T_DrawerSize ([id] int)"));
//       //存储试剂规格信息1


//       query.exec(QString("insert into BackReagent values (4,'酒精','3-2',500,'管制','大','2016.10.12','2016.8.9','未放')"));

       query.exec(QString("create table T_WaitPostInfo (id int primary key,[userId] int,[agentiaId] int, \
                          [positionId] int ,[dose] varchar,[judgeAttitude] varchar)"));
       //存储未成功上传信息 操作数据表      //2：入柜 3:取 4：还 4：替换 5：报废 judgeAttitude

       return true;

}
#endif // SQL_SETTING_H
