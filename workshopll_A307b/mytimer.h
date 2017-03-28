#ifndef MYTIMER_H
#define MYTIMER_H
#include <filewriter.h>
#include <Qtcore>


class MyTimer : public QObject
{
       Q_OBJECT
private:

public:
    MyTimer();
    QTimer *timer;
   class MainWindow *update;
    //VariableConverter *update;


public slots:
    void MySlot();
};

#endif // MYTIMER_H
