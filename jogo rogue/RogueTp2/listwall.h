#ifndef LISTWALL_H
#define LISTWALL_H
#include <iostream>
#include "Wall.h"
#include <listwall.h>
#include <QDebug>
#include "Enemy.h"
#include "Player.h"
#include "Treasure.h"

using namespace std;

class List
{
private:
    int iWall;
    int iEnemy;
    int iTreasure;
    int iPlayer;

    Wall *arrayWall[225];
    Enemy * arrayEnemy[225];
    Treasure * arrayTreasure[225];

public:
    List();

    int getIwall(){return iWall;}
    int getIenemy(){return iEnemy;}
    int getItreasure(){return iTreasure;}

    void removeAllEnemy();
    void removeAllWall();
    void removeAllTreasure();

    void addWall(Wall *w);
    void addTreasure(Treasure *t);
    void addEnemy(Enemy *e);

    void removeTreasure(int tl);

    Wall *getWall(int w);
    Treasure *getTreasure(int t);
    Enemy *getEnemy(int e);
};

#endif // LISTWALL_H
