#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>

static bool createConnection()
{
//   QSqlDatabase::removeDatabase("QSQLITE");//删除数据库
//   QFile::remove("database.db");//删除数据库文件
   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");



   db.setDatabaseName("database.db");
   if(!db.open()) return false;
   QSqlQuery query;
   query.exec("create table student (id int primary key, name vchar,course int)");
   query.exec("insert into student values(1,'yafei0',1)");
   query.exec("insert into student values(2,'yafei1',1)");
   query.exec("insert into student values(3,'yafei2',2)");

   query.exec("create table course (id int primarykey, name vchar, teacher vchar)");
   query.exec("insert into course values(1,'Math','yafeilinux1')");
   query.exec("insert into course values(2,'English','yafeilinux2')");
   query.exec("insert into course values(3,'Computer','yafeilinux3')");

   return true;
}
#endif // CONNECTION_H
