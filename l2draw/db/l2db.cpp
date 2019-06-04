#include "l2db.h"

l2db::l2db()
{

}
void l2db::initSqlite(QString db_name){
    if(QSqlDatabase::contains(qtstr)){
        database=QSqlDatabase::database(qtstr);
    }else{
        database=QSqlDatabase::addDatabase("QSQLITE");
        database.setDatabaseName(db_name);
    }

}

QSqlQuery l2db::getQuery(){

    QSqlQuery query(database);
    return query;
}

void l2db::create_table(QString sql){
    //QString create_sql="create table if not exists student (id INTEGER PRIMARY KEY AUTOINCREMENT,name varchar(30),age int)";
    QSqlQuery query=getQuery();
    query.prepare(sql);
    query.exec();

}


void l2db::insert_sql(QString sql){
    QSqlQuery query=getQuery();
    query.prepare(sql);
    if(!query.exec()){
        qDebug()<<"insert error";

    }
    else{
        //nothing to de
    }
}

void l2db::update_sql(QString sql){
    QSqlQuery query=getQuery();
    if(query.exec(sql)){
        qDebug()<<"update success";
    }

}
