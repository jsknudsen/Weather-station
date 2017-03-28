#include "mytimer.h"
#include <Qtcore>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <filewriter.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
    using namespace std;

MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));

    timer->start(5000);

}

void MyTimer::MySlot()
{
    qDebug() <<"timer test";
    update->on_pushButton_2_pressed();
    //Writer->writeTemperature();

}
