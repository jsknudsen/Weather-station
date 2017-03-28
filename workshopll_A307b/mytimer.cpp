#include "mytimer.h"
#include <Qtcore>
#include <QDebug>
#include <iostream>
#include <fstream>
    using namespace std;

MyTimer::MyTimer()
{
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(MySlot()));

    timer->start(100);

}

void MyTimer::MySlot()
{
    qDebug() <<"timer test";
    cout << "timer test";
}
