#include "View.h"

View::View(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    this->mydb = QSqlDatabase::addDatabase("QMYSQL");
    this->mydb.setHostName("127.0.0.1");
    this->mydb.setUserName("root");
    this->mydb.setPassword(DB_PASSWORD);
    this->mydb.setDatabaseName("testdatabase");

    if (this->mydb.open())
    {
        QMessageBox::information(this, "Connection",
            "Database connected successfully");
    }
    else
    {
        QMessageBox::information(this, "Connection",
            "Database is not connected");
    }
}

View::~View()
{}
