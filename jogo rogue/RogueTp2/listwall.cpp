#include "listwall.h"

List::List(){
    iWall = 0;
    iEnemy = 0;
    iTreasure = 0;

    //Zera vetores
    for(int i = 0; i < 225; i++){
        arrayWall[i] = nullptr;
        arrayEnemy[i] = nullptr;
        arrayTreasure[i] = nullptr;
    }
}

void List::removeAllEnemy()
{
   for(int i = 0; i < 225; i++)
       arrayEnemy[i] = nullptr;
   iEnemy = 0;
}

void List::removeAllWall()
{
    for(int i = 0; i < 225; i++)
        arrayWall[i] = nullptr;
    iWall = 0;
}

void List::removeAllTreasure()
{
    for(int i = 0; i < 225; i++)
        arrayTreasure[i] = nullptr;
    iTreasure = 0;
}

//recebe um endereço de memoria como parametro e salva nos vetores
void List::addWall(Wall *w){
        arrayWall[iWall] = w;
        iWall++;
}
void List::addEnemy(Enemy *e){
    arrayEnemy[iEnemy] = e;
    iEnemy++;
}
void List::addTreasure(Treasure *t){
        arrayTreasure[iTreasure] = t;
        iTreasure++;
}

void List::removeTreasure(int t)
{
    arrayTreasure[t] = nullptr;
    Treasure *arrayAux[225];
    for(int i = 0; i < 225; i++)
            arrayAux[i] = nullptr;
    for(int i = 0; i < 225; i++){
        if(arrayTreasure[i] != nullptr)
            arrayAux[i] = arrayTreasure[i];

    }
    for(int i = 0; i < 225; i++)
        arrayTreasure[i] = nullptr;
    for(int i = 0, j = 0; i < 225; i++){
        if(arrayAux[i] != nullptr){
            arrayTreasure[j] = arrayAux[i];
            j++;
        }
    }
    iTreasure--;
}

//Retorna os endereços de memoria em cada posição do vetor
Enemy * List::getEnemy(int e){
    return arrayEnemy[e];
}

Wall *List::getWall(int w){
    return arrayWall[w];
}
Treasure * List::getTreasure(int t){
    return arrayTreasure[t];
}

