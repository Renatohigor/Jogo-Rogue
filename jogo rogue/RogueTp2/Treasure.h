#ifndef TREASURE_H
#define TREASURE_H
#include "GameObject.h"

class Treasure : public GameObject
{
    float value;
public:
    Treasure() {value = 9.10;}

    float getValue() const {return value;}
    void setValue(float value) {value = value;}
};

#endif // TREASURE_H
