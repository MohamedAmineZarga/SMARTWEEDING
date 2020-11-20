#include "connection.h"

connection::connection()
{

}

bool connection::createconnect()
{
    bool test = false;
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test_bd");
    db.setUserName("zarga");
    db.setPassword("zarga2020");

    if (db.open())
   test = true;

    return test;
}
