#include "gameover.h"
#include "ui_gameover.h"
#include "mainwindow.h"
#include "menu.h"

GameOver::GameOver(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOver)
{
    ui->setupUi(this);
    somG = new QMediaPlayer();
    somG->setMedia(QUrl("qrc:/new/prefix1 (som)/GameOver.wav"));
    somG->play();
}

GameOver::~GameOver()
{
    delete ui;
}

void GameOver::on_pushButton_2_clicked()
{
    somG->stop();
    Menu *obj;

    obj = new Menu();
    obj->show();
    this->close();

}

void GameOver::on_pushButton_clicked()
{
    MainWindow * obj;
    obj = new MainWindow();
    obj->show();
    this->close();
}
