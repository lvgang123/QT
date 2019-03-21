#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include "client_tcp.h"

class Mythread : public QObject
{
    Q_OBJECT
public:
    explicit Mythread(QObject *parent = nullptr);
    ~Mythread();
    void clink();

signals:

private slots:

private:
    Client_tcp * tcp_link1;

};

#endif // MYTHREAD_H
