#include "mydb.h"

MyDB* MyDB::instance = nullptr;

MyDB::MyDB()
{
    init();
}
void MyDB::init()
{
    qDebug() << "in init()";
    db = QSqlDatabase::addDatabase("QSQLITE", "Data");
    db.setDatabaseName("/Users/sarthakgupta/Desktop/Inventory_management_database.sqlite");

    if(QFile::exists("/Users/sarthakgupta/Desktop/Inventory_management_database.sqlite"))
            qDebug() << "DB file exist";
        else
           qDebug() << "DB file doesn't exists";

        if (!db.open())
            qDebug() << db.lastError().text();
        else
            qDebug() << "Database loaded successfull!";

}

MyDB *MyDB::getInstance()
{
    qDebug() << "in MyDB::getInstance()";

    if(instance == nullptr)
        instance = new MyDB();

    return instance;
}

QSqlDatabase MyDB::getDBInstance()
{
    qDebug() <<"in getDBInstance()";
    return db;
}

void MyDB::ResetInstance()
{
      qDebug() << "deleting instance of MyDB";
      delete instance;
      instance = nullptr;
}

MyDB::~MyDB()
{
   qDebug() << "closing database connection";
   db.close();
}
