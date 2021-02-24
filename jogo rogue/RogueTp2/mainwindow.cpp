#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtWidgets>
#include <conio.h>
#include "GameObject.h"
#include "cenario.h"
#include "Wall.h"
#include "Enemy.h"
#include "Treasure.h"
#include "Player.h"
#include "listwall.h"
#include <QPixmap>
#include <QTimer>
#include <time.h>
#include <stdlib.h>
#include <QMessageBox>
#include "menu.h"
#include "gameover.h"
#include <QDebug>
//Criando objetos das classes, globais
Player *h;
Treasure *t;
Enemy *e;
Cenario c;
Wall *p;

int contTime = 0, contXP = 100;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //criando imagen do heroi
    QPixmap pixHero;
    pixHero = QPixmap(":/new/prefix1/hero.png");

    //desabilitando
    ui->tableWidget->setEnabled(false);
    ui->progressBar->setEnabled(false);
    ui->label_attack->setEnabled(false);
    ui->label_defense->setEnabled(false);
    ui->label_xp->setEnabled(false);
    ui->level->setEnabled(false);

    //criando a table
    ui->tableWidget->setRowCount(15);
    ui->tableWidget->setColumnCount(15);

    for(int i = 0; i < 15; i++)
        for(int j = 0; j < 15; j++)
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(" "));
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //setando a cor da table
    ui->tableWidget->setStyleSheet("background-color: rgb(239, 228, 176);");

    //inicializando o rand com null
    srand(time(NULL));

    //setando a posição inicial do hero na table
    wList = new List();
    h = new Player();
    h->setPosititonX(1);
    h->setPosititonY(1);
    ui->tableWidget->item(1, 1)->setBackground(pixHero);

    //Chamando cenario
    QPixmap pixWall, pixEnemy, pixTreasure;
    //setando as imagens de cada elemento
    pixWall = QPixmap(":/new/prefix1/wall.png");
    pixTreasure = QPixmap(":/new/prefix1/Treasure.png");
    pixEnemy = QPixmap(":/new/prefix1/Enemy.png");

    wList = new List();
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){

            switch(c.getM01(i, j))
            {
            case 1:
                p = new Wall();
                p->setPosititonX(i);
                p->setPosititonY(j);
                ui->tableWidget->item(i , j)->setBackground(pixWall);
                wList->addWall(p);
                break;
            case 2:
                e = new Enemy();
                e->setPosititonX(i);
                e->setPosititonY(j);
                ui->tableWidget->item(i, j)->setBackground(pixEnemy);
                wList->addEnemy(e);
                break;
            case 3:
                t = new Treasure();
                t->setPosititonX(i);
                t->setPosititonY(j);
                ui->tableWidget->item(i, j)->setBackground(pixTreasure);
                wList->addTreasure(t);
                break;
            }
        }
    }

    //Criando time para moveEnemy
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(moveEnemy()));
    timer->start(150);

    //cronometro
    timerTwo = new QTimer(this);
    timerTwo->setInterval(1000);
    connect(timerTwo,SIGNAL(timeout()),this,SLOT(cronometro()));
    timerTwo->start();

    //colocando foco na tableWidget
    setFocus();

    somPass = new QMediaPlayer();
    somPass->setMedia(QUrl("qrc:/new/prefix1 (som)/Pass.wav)"));

    somDano = new QMediaPlayer();
    somDano->setMedia(QUrl("qrc:/new/prefix1 (som)/Dano.wav"));

    somT = new QMediaPlayer;
    somT->setMedia(QUrl("qrc:/new/prefix1 (som)/PickUpTreasure.mp3"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::damageEnemy()
{
    somDano->play();
    QString saida;
    h->playerAtack(e->getAttack());
    //condicao para mostrar a tela game over
    if(h->getLife() <= 0){
        saida = "Time: " + QString::number(contTime) + " seconds.\nLevel: " + QString::number(h->getLevel());
        timer->stop();
        timerTwo->stop();
        QMessageBox::information(this, tr("RECORDS"), saida);

        GameOver *obj;

        obj = new GameOver();
        obj->show();
        this->close();
    }
}

void MainWindow::peekUpTreasure()
{
    h->setXp(t->getValue());

    if(h->getXp() >= contXP){
        h->setLevel(h->getLevel());
        h->setAttack(h->getAttack() + 1);
        h->setDefense(h->getDefense() + 1);
        e->setAttack(e->getAttack() + 2);
        e->setDefense(e->getDefense() + 1);

        if(contXP >= 200){
            int i = (contXP / 100) + 1;
            for(; contXP != (i * 100);)
                contXP = 100 * i;
        }
        else{
            contXP *= 2;
        }
    }
    if(wList->getItreasure() == 0){
        somPass->play();
        newScenario();
    }
}

void MainWindow::cronometro()
{
    ui->label_TIME->setText(QString::number(contTime));
    contTime++;
}

void MainWindow::statusHero()
{
    ui->label_xp->setText(QString::number(h->getXp()));
    ui->progressBar->setValue(h->getLife());
    ui->level->setText(QString::number(h->getLevel()));
    ui->label_defense->setText(QString::number(h->getDefense()));
    ui->label_attack->setText(QString::number(h->getAttack()));
}

void MainWindow::newScenario()
{
    QPixmap pixTreasure, pixWall, pixEnemy, pixHero;
    //setando as imagens de cada elemento

    pixWall = QPixmap(":/new/prefix1/wall.png");
    pixTreasure = QPixmap(":/new/prefix1/Treasure.png");
    pixEnemy = QPixmap(":/new/prefix1/Enemy.png");
    pixHero = QPixmap(":/new/prefix1/hero.png");


    ui->tableWidget->setRowCount(15);
    ui->tableWidget->setColumnCount(15);

    for(int i = 0; i < 15; i++)
        for(int j = 0; j < 15; j++)
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(" "));
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    wList->removeAllEnemy();
    wList->removeAllWall();
    wList->removeAllTreasure();
    ui->tableWidget->setStyleSheet("background-color: rgb(239, 228, 176);");

    h->setPosititonX(1);
    h->setPosititonY(1);
    ui->tableWidget->item(1, 1)->setBackground(pixHero);


    wList = new List();
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 15; j++){

            switch(c.getM02(i, j))
            {
            case 1:
                p = new Wall();
                p->setPosititonX(i);
                p->setPosititonY(j);
                ui->tableWidget->item(i , j)->setBackground(pixWall);
                wList->addWall(p);
                break;
            case 2:
                e = new Enemy();
                e->setPosititonX(i);
                e->setPosititonY(j);
                ui->tableWidget->item(i, j)->setBackground(pixEnemy);
                wList->addEnemy(e);
                break;
            case 3:
                t = new Treasure();
                t->setPosititonX(i);
                t->setPosititonY(j);
                ui->tableWidget->item(i, j)->setBackground(pixTreasure);
                wList->addTreasure(t);
                break;
            }
        }
    }
}

void MainWindow::moveEnemy(){

    Enemy * eMove;
    int xAtualE, yAtualE;
    int newXE;
    int newYE;

    QPixmap pixChao = QPixmap(":/new/prefix1/chao.png");
    QPixmap pixEnemy = QPixmap(":/new/prefix1/Enemy.png");

    int keyboard, i, cont;

    for(int j = 0; j < wList->getIenemy(); j++){
        keyboard = rand() % 4;
        eMove = wList->getEnemy(j);
        switch(keyboard)
        {
        case 0:
            xAtualE = eMove->getPosititonX();
            yAtualE = eMove->getPosititonY();
            newXE = xAtualE;
            newYE = yAtualE;

            newYE++;
            eMove->move(newXE, newYE);
            for(i = 0; i < wList->getIwall() && !(eMove->collide(wList->getWall(i))); i++)
            {}

            if(i != wList->getIwall())
                eMove->move(xAtualE, yAtualE);

            for(cont = 0; cont < wList->getItreasure() && !(eMove->collide(wList->getTreasure(cont))); cont++)
            {}
            //verifica collide com treasure
            if(cont != wList->getItreasure())
                eMove->move(xAtualE, yAtualE);

            if((eMove->collide(h)))
            {
                damageEnemy();
                eMove->move(xAtualE, yAtualE);
                statusHero();
            }

            break;
        case 1:
            xAtualE = eMove->getPosititonX();
            yAtualE = eMove->getPosititonY();
            newXE = xAtualE;
            newYE = yAtualE;
            newXE++;
            eMove->move(newXE, newYE);

            for(i = 0; i < wList->getIwall() && !(eMove->collide(wList->getWall(i))); i++)
            {}

            if(i != wList->getIwall())
                eMove->move(xAtualE, yAtualE);

            for(cont = 0; cont < wList->getItreasure() && !(eMove->collide(wList->getTreasure(cont)));cont++)
            {}
            //verifica collide com treasure
            if(cont != wList->getItreasure())
                eMove->move(xAtualE, yAtualE);

            if((eMove->collide(h)))
            {
                damageEnemy();
                eMove->move(xAtualE, yAtualE);
                statusHero();
            }
            break;
        case 2:
            xAtualE = eMove->getPosititonX();
            yAtualE = eMove->getPosititonY();
            newXE = xAtualE;
            newYE = yAtualE;
            newYE--;
            eMove->move(newXE, newYE);

            for(i = 0; i < wList->getIwall() && !(eMove->collide(wList->getWall(i))); i++)
            {}

            if(i != wList->getIwall())
                eMove->move(xAtualE, yAtualE);

            for(cont = 0; cont < wList->getItreasure() && !(eMove->collide(wList->getTreasure(cont)));cont++)
            {}
            //verifica collide com treasure
            if(cont != wList->getItreasure())
                eMove->move(xAtualE, yAtualE);

            if((eMove->collide(h)))
            {
                damageEnemy();
                eMove->move(xAtualE, yAtualE);
                statusHero();
            }
            break;
        case 3:
            xAtualE = eMove->getPosititonX();
            yAtualE = eMove->getPosititonY();
            newXE = xAtualE;
            newYE = yAtualE;
            newXE--;
            eMove->move(newXE, newYE);

            for(i = 0; i < wList->getIwall() && !(eMove->collide(wList->getWall(i))); i++)
            {}
            //rodou a lista toda e n colidiu
            if(i != wList->getIwall())
                eMove->move(xAtualE, yAtualE);

            for(cont = 0; cont < wList->getItreasure() && !(eMove->collide(wList->getTreasure(cont))); cont++)
            {}
            //verifica collide com treasure
            if(cont != wList->getItreasure())
                eMove->move(xAtualE, yAtualE);

            if((eMove->collide(h)))
            {
                damageEnemy();
                eMove->move(xAtualE, yAtualE);
                statusHero();
            }
            break;
        }
        ui->tableWidget->item(xAtualE, yAtualE)->setBackground(pixChao);
        ui->tableWidget->item(eMove->getPosititonX(), eMove->getPosititonY())->setBackground(pixEnemy);
    }
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    somWalk = new QMediaPlayer();
    somWalk->setMedia(QUrl("qrc:/new/prefix1 (som)/Walk.mp3"));
    somWalk->play();
    int xAtual = h->getPosititonX(), yAtual = h->getPosititonY();
    int newX = xAtual;
    int newY = yAtual;

    QPixmap pixHero = QPixmap(":/new/prefix1/hero.png");
    QPixmap pixChao = QPixmap(":/new/prefix1/chao.png");
    //move rigth
    if(event->key() == Qt::Key_P){
        timer->stop();
        timerTwo->stop();
        QMessageBox::warning(this,tr("PAUSE"), tr("The game is paused!"));
        timer->start(200);
        timerTwo->start();
    }
    if(event->key() == Qt::Key_Right){

        newY++;
        //seta movimento
        h->move(newX, newY);

        int i;
        //verifica se collide
        for(i = 0; i < wList->getIwall() && !(h->collide(wList->getWall(i))); i++)
        {}
        //rodou a lista toda e n colidiu
        if(i != wList->getIwall()){
           h->move(xAtual, yAtual);
        }

        int j;
        for(j = 0; j < wList->getItreasure() && !(h->collide(wList->getTreasure(j)));j++)
        {}
        //verifica collide com treasure
        if(j != wList->getItreasure()){
            wList->removeTreasure(j);
            somT->play();
            peekUpTreasure();
        }

        int k;
        for(k = 0; k < wList->getIenemy() && !(h->collide(wList->getEnemy(k)));k++)
        {}

        if(k != wList->getIenemy()){
           damageEnemy();
           h->move(xAtual, yAtual);
        }
    }
    //move down
    if(event->key() == Qt::Key_Down){
        newX++;
        h->move(newX, newY);        

        int i;
        for(i = 0; i < wList->getIwall() && !(h->collide(wList->getWall(i))); i++)
        {}

        if(i != wList->getIwall()){
           h->move(xAtual, yAtual);
        }

        int j;
        for(j = 0; j < wList->getItreasure() && !(h->collide(wList->getTreasure(j)));j++){}

        if(j != wList->getItreasure()){
            wList->removeTreasure(j);

            somT->play();
            peekUpTreasure();
        }

        int k;
        for(k = 0; k < wList->getIenemy() && !(h->collide(wList->getEnemy(k)));k++)
        {}

        if(k != wList->getIenemy()){
            damageEnemy();
            h->move(xAtual, yAtual);
        }
    }
    //move left
    if(event->key() == Qt::Key_Left){
        newY--;
        h->move(newX, newY);

        int i;
        for(i = 0; i < wList->getIwall() && !(h->collide(wList->getWall(i))); i++)
        {}

        if(i != wList->getIwall()){
           h->move(xAtual, yAtual);
        }

        int j;
        for(j = 0; j < wList->getItreasure() && !(h->collide(wList->getTreasure(j)));j++){}

        if(j != wList->getItreasure()){
            wList->removeTreasure(j);

            somT->play();
            peekUpTreasure();
        }

        int k;
        for(k = 0; k < wList->getIenemy() && !(h->collide(wList->getEnemy(k)));k++)
        {}

        if(k != wList->getIenemy()){
            damageEnemy();
            h->move(xAtual, yAtual);

        }
    }
    //move up
    if(event->key() == Qt::Key_Up){
        newX--;
        h->move(newX, newY);

        int i;
        for(i = 0; i < wList->getIwall() && !(h->collide(wList->getWall(i))); i++)
        {}

        if(i != wList->getIwall()){
           h->move(xAtual, yAtual);
        }

        int j;
        for(j = 0; j < wList->getItreasure() && !(h->collide(wList->getTreasure(j)));j++)
        {}

        if(j != wList->getItreasure()){
            wList->removeTreasure(j);

            somT->play();
            peekUpTreasure();
        }

        int k;
        for(k = 0; k < wList->getIenemy() && !(h->collide(wList->getEnemy(k)));k++)
        {}

        if(k != wList->getIenemy()){
            damageEnemy();
            h->move(xAtual, yAtual);

        }
    }
    ui->tableWidget->item(xAtual, yAtual)->setBackground(pixChao);
    ui->tableWidget->item(h->getPosititonX(), h->getPosititonY())->setBackground(pixHero);
    statusHero();
    somWalk->stop();
}

void MainWindow::on_pushButton_clicked()
{
    Menu *obj;

    obj = new Menu();
    obj->show();
    this->close();
}
