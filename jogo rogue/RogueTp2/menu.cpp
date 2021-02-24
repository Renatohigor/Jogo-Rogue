#include "menu.h"
#include "ui_menu.h"
#include "mainwindow.h"
#include "instroctions.h"
#include "creditos.h"
#include "timetostart.h"
#include <QMediaPlayer>
Menu::Menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
    somM = new QMediaPlayer;

    somM->stop();
    somM->setMedia(QUrl("qrc:/new/prefix1 (som)/Menu.mp3"));
    somM->play();

    somButton = new QMediaPlayer;

    somButton->stop();
    somButton->setMedia(QUrl("qrc:/new/prefix1 (som)/button.mp3"));
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_pushButton_clicked()
{
    somButton->play();
    somM->stop();
    TimeToStart *obj;

    obj = new TimeToStart();
    obj->show();
    this->close();
}

void Menu::on_pushButton_2_clicked()
{
    somButton->play();
    somM->stop();
    Instroctions *obj;
    obj = new Instroctions();
    obj->show();
   this-> close();
}

void Menu::on_pushButton_3_clicked()
{
    somButton->play();
    somM->stop();
    Creditos *obj;
    obj = new Creditos();
    obj->show();
    this->close();
}
