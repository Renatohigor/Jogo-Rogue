#ifndef ENEMY_H
#define ENEMY_H
#include "GameObject.h"

class Enemy : public GameObject
{
private:
    int lifeE;
    int attackE;
    int defenseE;
public:
    Enemy(){
        lifeE = 15;
        attackE = 4;
        defenseE = 1;
    }

    int getLife() const {return lifeE;}
    void setLife(int value) {lifeE = value;}

    int getAttack() const {return attackE;}
    void setAttack(int value) {attackE = value;}

    int getDefense() const {return defenseE;}
    void setDefense(int value) {defenseE = value;}

    void attackHero(int value) {lifeE -= (value - defenseE);}
};

#endif // ENEMY_H
