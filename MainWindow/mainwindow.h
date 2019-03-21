#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mythread.h"
#include "../Create_sql/create_sql.h"


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

signals:
    void startthread();//启动子线程的信号
private slots:
    void on_button_connect1_clicked();

    void on_button_statis_clicked();

    void on_button_analyze_clicked();

    void on_button_warning_clicked();

    void on_button_real_clicked();

    void on_putton_set_clicked();

private:
    Ui::MainWindow *ui;
    Create_sql * mysql;

    //多线程调用
    QThread* thread1;
    Mythread* myT1;
    bool T_1=false;

};

#endif // MAINWINDOW_H
