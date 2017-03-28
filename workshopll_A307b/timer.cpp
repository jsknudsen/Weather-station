#include "timer.h"
#include <QtCore>
#include <QDebug>

timer::timer()
{
    timer2 = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(timerslot()));
    timer2->start(1000);
}

void timer::timerslot()
{
    qDebug() << "timertest";

}
