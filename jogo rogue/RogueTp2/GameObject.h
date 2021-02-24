#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

class GameObject
{
private:
    int posititonX;
    int posititonY;
public:
    GameObject();

    int getPosititonX() const;
    void setPosititonX(int value);

    int getPosititonY() const;
    void setPosititonY(int value);

    void move(int newX, int newY);
    bool collide(GameObject *obj);
};
#endif // GAMEOBJECT_H
