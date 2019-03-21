#include "create_sql.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>


Create_sql::Create_sql()
{
    //添加MySql数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

    //连接数据库
    db.setHostName("127.0.0.1"); //数据库服务器IP
    db.setUserName("root"); //数据库用户名
    db.setPassword("123456"); //密码
    db.setDatabaseName("sys"); //使用哪个数据库


    //打开数据库
    if( !db.open() ) //数据库打开失败
    {
        //QMessageBox::warning(this, "错误", db.lastError().text());
        qDebug()<<"dakaicuo";
        return;
    }
}
