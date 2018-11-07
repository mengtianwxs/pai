#ifndef L2DB_H
#define L2DB_H

#include<QSqlDatabase>
#include<QSqlQuery>
#include<QDebug>
#include<QString>

class l2db
{
public:
    l2db();
    QSqlDatabase database;
    void initSqlite(QString db_name);
    QSqlQuery getQuery();
    void insert_sql(QString sql);
    void update_sql(QString sql);
    void create_table(QString sql);

private:
    const QString qtstr="qt_sql_default_connection";

};

#endif // L2DB_H
