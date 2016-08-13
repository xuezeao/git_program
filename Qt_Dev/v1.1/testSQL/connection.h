#ifndef CONNECTION_H
#define CONNECTION_H
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QFile>

static bool createConnection()
{
//   QSqlDatabase::removeDatabase("QSQLITE");//删除数据库
       QFile::remove("placeDurg.db");//删除数据库文件
       QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
       db.setDatabaseName("placeDurg.db");
       if(!db.open()) return false;
       QSqlQuery query;
       query.exec(QString(
         "create table placeDurg ( id int primary key,试剂名称 varchar, 试剂规格 varchar,容量ml varchar,类型 varchar,柜子编号 varchar,摆放位置 varchar,失效日期 varchar,入柜日期 varchar)"));
       query.exec(QString("insert into placeDurg values (1,'酒精','大',500,'管制','A','3-5','2016.10.12','2016.8.9')"));

       return true;
}
#endif // CONNECTION_H
