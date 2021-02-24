#ifndef PLAYER_H
#define PLAYER_H
#include "GameObject.h"

class Player : public GameObject
{
private:
    int life;
    int attack;
    int defense;
    int level;
    float xp;
public:
    Player(){
        level = 1;
        xp = 0;
        life = 100;
        attack = 3;
        defense = 2;
    }

    int getLife() const {return life;}
    void setLife(int value) {life = value;}

    int getAttack() const {return attack;}
    void setAttack(int value) {attack = value;}

    int getDefense() const {return defense;}
    void setDefense(int value) {defense = value;}

    int getLevel() const {return level;}
    void setLevel(int value) {
        value++;
        level = value;
    }

    float getXp() const {return xp;}
    void setXp(float value) {xp += value;}

    void playerAtack(int value) {life -= (value - defense);}
};

#endif // PLAYER_H
