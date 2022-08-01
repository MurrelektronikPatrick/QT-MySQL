#pragma once

#include <QtWidgets/QMainWindow>
#include <QtSql/qsqldatabase.h>
#include <qmessagebox.h>
#include "ui_View.h"
#include "MySecrets.h"

class View : public QMainWindow
{
    Q_OBJECT

public:
    View(QWidget *parent = nullptr);
    ~View();

private:
    Ui::ViewClass ui;
    QSqlDatabase mydb;
};
