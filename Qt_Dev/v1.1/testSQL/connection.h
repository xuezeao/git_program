#ifndef CONNECTION_H
#define CONNECTION_H
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

       query.exec(QString("create table T_CabinetInfo ([cabinetName] varchar,[groupId] varchar,[groupName] varchar,[drawerAmout] varchar,[cabinetStatue] varchar)"));
       //长期存放柜子信息

       query.exec(QString("create table T_DrawerList ([drawerNo] varchar,[drawerName] varchar,[drawerSize] varchar,[positionAmout] varchar,[attribute] varchar,[drawerStatus] varchar)"));
       //长期抽屉信息
       query.exec(QString("create table T_AgentiaInBox (id int primary key,[checkBox] varchar,[agentiaTypeId] varchar,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[drawerName] varchar,[drawerNo] varchar,[positionNo] varchar,[positionName] varchar,[attribute] varchar)"));
       //在柜信息
       query.exec(QString("create table T_AgentiaTypeList (id int primary key,[checkBox] varchar,[agentiaTypeId] varchar,[agentiaName] varchar,[abbreviation] varchar,[chemicalFormula] varchar,[specification] varchar,[factory] varchar,[itemNo] varcahr,[attribute] varchar)"));
       //试剂类型
       query.exec(QString("create table T_UserInfo ([userId] varchar,[role] varchar)"));
       //用户信息临时存储
       query.exec(QString("insert into T_UserInfo values ('88','1')"));

       query.exec(QString("create table T_AgentiaSearchResult (id int primary key,[checkBox] varchar,[agentiaId] varchar,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[agentiaStatus] varchar,[currentUserName] varchar,[drawerNo] varchar,[drawerName] varchar,[positionNo] varchar,[positionName] varchar,[attribute] varchar,[applicant] varchar,[applyStatus] varchar)"));
       //搜索信息
       query.exec(QString("create table T_Task (id int primary key,[checkBox] varchar,agentiaId int,[agentiaName] varchar,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[drawerNo] int,[drawerName] varchar,[drawerSize] varchar,[positionId] varchar,[positionNo] varchar,[positionName] varchar,[attribute] int)"));
       //临时存储信息，取，还，报废，替换，点验，申请任务,待归还信息，入柜的执行界面1
       query.exec(QString("create table T_Task_Operate (id int primary key,[checkBox] varchar,agentiaId int,[agentiaName] varchar,[bottleCapacity] varchar,[dose] varchar,[expiryDate] varchar,[drawerNo] int,[drawerName] varchar,[drawerSize] varchar,[positionId] varchar,[positionNo] varchar,[positionName] varchar,[attribute] int)"));
       //临时存储信息，取，还，报废，替换，点验，申请任务,待归还信息，入柜的执行界面1

       query.exec(QString("insert into T_Task values ('1','1',1,'酒精','500ml','400ml','2017.1.1',1,'Draw-1','10*10*20','1','1','1', 1)"));

       query.exec(QString("create table T_CabinetStatus (id int primary key,[checkBox] varchar,[cabinetName] varchar,[cabinetStatue] varchar,[temperature] varchar,[humidity] varchar)"));
       //柜子信息更新表1
       query.exec(QString("create table T_PositionDisable (id int primary key,[checkBox] varchar,[drawerNo] varchar,[drawerName] varchar,[drawerSize] varchar,[positionAmount] varchar,[attribute] varchar,[drawerStatus] varchar)"));
       //修改柜子信息1
       query.exec(QString("create table T_WaringLog (id int primary key,[checkBox] varchar,[cabinetNo] varchar,[drawerNo] varchar,[positionNo] varchar,[taskId] varchar,[message] varchar)"));
       //报警信息1
       query.exec(QString("create table T_PositionAllocate ([positionNo] varchar,[positionName] varchar,[positionId] varchar,[drawerNo] varchar,[drawerName] varchar)"));
       //存储临时位置分配信息1
       query.exec(QString("create table T_DrawerSize ([id] int)"));
       //存储试剂规格信息1


//       query.exec(QString("create table placeDurg (id int primary key,[试剂名称] varchar, [摆放位置]varchar,[容量 ml] varchar,[类型] varchar,[试剂规格]varchar,[失效日期]varchar,[入柜日期] varchar,[状态] varchar)"));//9
//       query.exec(QString("create table choiceReagent (id int primary key,[试剂名称] varchar, [摆放位置]varchar,[容量 ml] varchar,[类型] varchar,[试剂规格]varchar,[失效日期]varchar,[入柜日期] varchar,[状态] varchar)"));
//       query.exec(QString("create table BackReagent (id int primary key,[试剂名称] varchar, [摆放位置]varchar,[容量 ml] varchar,[类型] varchar,[试剂规格]varchar,[失效日期]varchar,[入柜日期] varchar,[状态] varchar)"));


//       query.exec(QString("insert into placeDurg values (1,'酒精','1-1',500,'管制','大','2016.10.12','2016.8.9','未放')"));
//       query.exec(QString("insert into placeDurg values (2,'高锰酸钾','2-1',500,'管制','大','2016.10.12','2016.8.9','未放')"));
//       query.exec(QString("insert into placeDurg values (3,'酒精','3-1',500,'非管制','大','2016.10.12','2016.8.9','未放')"));
//       query.exec(QString("insert into placeDurg values (4,'酒精','1-2',500,'管制','大','2016.10.12','2016.8.9','未放')"));

//       query.exec(QString("insert into BackReagent values (1,'酒精','3-3',500,'管制','大','2016.10.12','2016.8.9','未放')"));
//       query.exec(QString("insert into BackReagent values (2,'高锰酸钾','3-1',500,'管制','大','2016.10.12','2016.8.9','未放')"));
//       query.exec(QString("insert into BackReagent values (3,'酒精','3-1',500,'非管制','大','2016.10.12','2016.8.9','未放')"));
//       query.exec(QString("insert into BackReagent values (4,'酒精','3-2',500,'管制','大','2016.10.12','2016.8.9','未放')"));

       query.exec(QString("create table drawerSizeOption (id varchar)"));
       query.exec(QString("insert into drawerSizeOption values ('10*10*20')"));
       query.exec(QString("insert into drawerSizeOption values ('10*20*10')"));
       query.exec(QString("insert into drawerSizeOption values ('20*10*10')"));

       return true;
}
#endif // CONNECTION_H
