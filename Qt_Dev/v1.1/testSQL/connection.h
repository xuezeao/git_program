#ifndef CONNECTION_H
#define CONNECTION_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFile>
#include <QSqlError>

static bool createConnection()
{
//   QSqlDatabase::removeDatabase("QSQLITE");//删除数据库
       QFile::remove("placeDurg.db");//删除数据库文件

       QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("placeDurg.db");
       if(!db.open()) return false;
       QSqlQuery query;
       query.exec(QString("create table placeDurg (id int primary key,[试剂名称] varchar, [摆放位置]varchar,[容量 ml] varchar,[类型] varchar,[试剂规格]varchar,[失效日期]varchar,[入柜日期] varchar,[状态] varchar)"));
       query.exec(QString("create table choiceReagent (id int primary key,[试剂名称] varchar, [摆放位置]varchar,[容量 ml] varchar,[类型] varchar,[试剂规格]varchar,[失效日期]varchar,[入柜日期] varchar,[状态] varchar)"));

       query.exec(QString("insert into placeDurg values (1,'酒精','1-1',500,'管制','大','2016.10.12','2016.8.9','未放')"));
       query.exec(QString("insert into placeDurg values (2,'高锰酸钾','2-1',500,'管制','大','2016.10.12','2016.8.9','未放')"));
       query.exec(QString("insert into placeDurg values (3,'酒精','3-1',500,'管制','大','2016.10.12','2016.8.9','未放')"));
       query.exec(QString("insert into placeDurg values (4,'酒精','1-2',500,'管制','大','2016.10.12','2016.8.9','未放')"));

//       query.exec(QString("create table reagentType (id varchar)"));
//       query.exec(QString("insert into reagentType values('管制')"));
//       query.exec(QString("insert into reagentType values('非管制')"));

//       query.exec(QString("create table reagentModel (id varchar"));
//       query.exec(QString("insert into reagentModel values ('大')"));
//       query.exec(QString("insert into reagentModel values ('中')"));
//       query.exec(QString("insert into reagentModel values ('小')"));

       return true;
}
#endif // CONNECTION_H
