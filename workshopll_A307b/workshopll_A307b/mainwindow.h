#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QSerialPort>
#include <filewriter.h>
#include <filereader.h>
#include <mytimer.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
        MyTimer mTimer;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

//private slots:

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;
    FileWriter *Writer;
    FileReader *Reader;

    bool arduino_is_available;
};

#endif // MAINWINDOW_H
