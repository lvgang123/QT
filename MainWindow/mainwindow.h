#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mythread.h"
#include "../Create_sql/create_sql.h"
#include "../tcp_thread/tcp_thread.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void colsethread1();
    void colsethread2();

signals:
    void startthread();//启动子线程的信号
    void startthread2();//启动子线2程的信号
private slots:
    void on_button_connect1_clicked();

    void on_button_statis_clicked();

    void on_button_analyze_clicked();

    void on_button_warning_clicked();

    void on_button_real_clicked();

    void on_putton_set_clicked();

    void on_button_connect2_clicked();

private:
    Ui::MainWindow *ui;
    Create_sql * mysql;

    //多线程调用
    QThread* thread1;
    Mythread* myT1;
    QThread* thread2;
    Tcp_thread* myT2;
    bool T_1=false;
    bool T_2=false;

};

#endif // MAINWINDOW_H
