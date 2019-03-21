#ifndef CLIENT_TCP_H
#define CLIENT_TCP_H

#include <QObject>
#include <QThread>
#include <QTcpSocket> //tcp套接字
#include <QDebug>
#include <QTimer>
#include "client_tcp_global.h"

class CLIENT_TCPSHARED_EXPORT Client_tcp
        :public QObject,public QString
{
    Q_OBJECT

public:
    Client_tcp(QString ipstr,int port,QString str_sq,QObject *parent);

    void tcptransmit(QString ipstr,int port,QTcpSocket *,QTimer *,QObject *parent,QString str_sq);

    void sqlcreate(QString str_sql);        //创建数据库

    void sendMsg(char*,QString str_sql);    //发送数据

    void PLCdate();         //PLC数据处理

    QString chartobinstr(char *,int star);  //异常信息转化

    uint chartoint1(char *ch2,int star);    //将字符转化为int

signals:
    void mysignal();

private:
    QTcpSocket *tcpsocket;  //tcp套接字
    QByteArray array ;
    QByteArray array1 ;
    QTimer *mytime;
    bool is_setsql;
};

#endif // CLIENT_TCP_H
