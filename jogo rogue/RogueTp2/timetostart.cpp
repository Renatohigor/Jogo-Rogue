#include "timetostart.h"
#include "ui_timetostart.h"
#include <time.h>
#include <QTimer>
#include "mainwindow.h"
int cont = 4;
TimeToStart::TimeToStart(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TimeToStart)
{
    ui->setupUi(this);
    timerStart = new QTimer(this);
    timerStart->setInterval(1000);
    connect(timerStart,SIGNAL(timeout()),this,SLOT(timeToStartGame()));
    timerStart->start();
}

TimeToStart::~TimeToStart()
{
    delete ui;
}

void TimeToStart::timeToStartGame()
{
    cont--;
    ui->label_TimeToStart->setText(QString::number(cont));
    if(cont == 0)
    {
        cont = 4;
        MainWindow * obj;
        obj = new MainWindow();
        obj->show();
        this->close();
        timerStart->stop();
    }
}
