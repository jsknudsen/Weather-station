#include "mytimer.h"
#include <mainwindow.h>
#include <Qtcore>
#include <QDebug>
#include <iostream>
#include <fstream>
#include <filewriter.h>


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
    update->updateData();

}
