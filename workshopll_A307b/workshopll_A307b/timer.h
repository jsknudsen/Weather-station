#ifndef TIMER_H
#define TIMER_H

#include <QtCore>


class timer : public Q_OBJECT
{
    Q_OBJECT

public:
    timer();
    QTimer *timer2;
public slots:
    void timerslot();
};

#endif // TIMER_H
