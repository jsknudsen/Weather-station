#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QDebug>
#include <QtWidgets>
#include <filewriter.h>
#include <mytimer.h>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    arduino = new QSerialPort(this);
    arduino_is_available = true;
    arduino = new QSerialPort;

    if(arduino_is_available){
        // open and configure the serialport
        arduino->setPortName("com8");
        arduino->open(QSerialPort::ReadWrite);
        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        connect(arduino,SIGNAL(readyRead()),this,SLOT(on_pushButton_clicked()));

    }else{
        // give error message if not available
        QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
    }

}


MainWindow::~MainWindow()
{
    delete ui;
}






void MainWindow::on_pushButton_2_pressed()
{
    //arduino->write("H");
    //QString str = arduino->readAll();
    QString str = Reader->readHumidity();
    ui->humidi_label->setText(QString("<span style=\" font-size:18pt; font-weight:600;\">%1</span>").arg(str));//arg("værdi") i værdi indtastes den ønskede værdi.
    //Writer->writeHumidity(str);
}

void MainWindow::on_pushButton_3_pressed()
{
    qDebug() <<"knap debug";
    //arduino->write("T");
    //QString str = arduino->readAll();
    QString str = Reader->readTemperature();
    ui->temp_label->setText(QString("<span style=\" font-size:18pt; font-weight:600;\">%1</span>").arg(str));//arg("værdi") i værdi indtastes den ønskede værdi.
    //Writer->writeTemperature(str);
}
