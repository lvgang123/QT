#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    mysql=new Create_sql();

    //子线程的调用
    myT1=new Mythread;
    thread1=new QThread(this);
    myT1->moveToThread(thread1);
    connect(this,&MainWindow::startthread,myT1,&Mythread::clink);
}

MainWindow::~MainWindow()
{
    if(T_1)
    colsethread1();
    if(this->mysql==NULL){
        delete mysql;
    }
    delete ui;
}

void MainWindow::on_button_connect1_clicked()
{
    if(ui->button_connect1->text()=="连接1"){
        T_1=true;
        //启动线程，但没有启动线程处理函数
        qDebug()<<"线程调用开始";
        thread1->start();

        //不能直接调用线程处理函数，直接调用导致线程处理函数和主线程在同一线程

        //只能通过signal-slot方式调用
        emit startthread();

        //更改按钮显示
        ui->button_connect1->setText("取消连接1");
         qDebug()<<"线程调用完成";
    }else{
       colsethread1();
       ui->button_connect1->setText("连接1");
    }
}

void MainWindow::colsethread1(){
    T_1=false;
    //关闭线程，此种方式比较温柔不会造成内存问题，要等待线程执行完成后退出
    thread1->quit();
    thread1->wait();
}

void MainWindow::on_button_statis_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_button_analyze_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_button_warning_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::on_button_real_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_putton_set_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}
