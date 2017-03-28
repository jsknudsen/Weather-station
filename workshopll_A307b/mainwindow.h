#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <mytimer.h>
#include <QMainWindow>
#include <QDialog>
#include <QSerialPort>
#include <filewriter.h>
#include <filereader.h>


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
    FileReader *Reader;
       void updateData();
private slots:

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

private:
    Ui::MainWindow *ui;
    QSerialPort *arduino;
    FileWriter *Writer;


    bool arduino_is_available;
};

#endif // MAINWINDOW_H
