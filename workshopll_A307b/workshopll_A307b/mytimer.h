#ifndef MYTIMER_H
#define MYTIMER_H
#include <filewriter.h>
#include <mainwindow.h>
#include <Qtcore>

class MyTimer : public QObject
{
       Q_OBJECT


public:
    MyTimer();
    QTimer *timer;
    MainWindow *update;


public slots:
    void MySlot();
};

#endif // MYTIMER_H
