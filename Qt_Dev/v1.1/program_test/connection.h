#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>

static bool createConnection()
{
//   QSqlDatabase::removeDatabase("QSQLITE");//删除数据库
   QFile::remove("database.db");//删除数据库文件
   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");



   db.setDatabaseName("database.db");
   if(!db.open()) return false;
   QSqlQuery query;
   query.exec("create table student ([ name] vchar,[course] int)");
   query.exec("insert into student values('yafei0',1)");
   query.exec("insert into student values('yafei1',1)");
   query.exec("insert into student values('yafei12',2)");
   query.exec("insert into student values('yafei23',2)");
   query.exec("insert into student values('yafei24',2)");
   query.exec("insert into student values('yafei25',2)");

   query.exec("create table course ( name vchar, teacher vchar)");
   query.exec("insert into course values('Math','yafeilinux1')");
   query.exec("insert into course values('English','yafeilinux2')");
   query.exec("insert into course values('Computer','yafeilinux3')");

   return true;
}
#endif // CONNECTION_H
