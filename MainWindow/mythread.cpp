#include "mythread.h"

Mythread::Mythread(QObject *parent) : QObject(parent)
{

}
Mythread::~Mythread(){
    if(this->tcp_link1==NULL){
        delete tcp_link1;
    }
}
void Mythread::clink(){


        tcp_link1=new Client_tcp("172.168.2.100",4997,"Date1",this);
        connect(tcp_link1, &Client_tcp::mysignal,
                [=](){
            qDebug()<<"信号接收成功";
        });



}
