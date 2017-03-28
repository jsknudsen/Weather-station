#include "mainwindow.h"
#include <QApplication>
#include <filewriter.h>
#include "mytimer.h"

int main(int argc, char *argv[])
{
    FileWriter Writer;
    MyTimer mTimer;
    QApplication a(argc, argv);

    MainWindow w;
    //w.setFixedSize(560, 160);
    w.setWindowTitle("Weather Station");
    w.show();

    return a.exec();
}
