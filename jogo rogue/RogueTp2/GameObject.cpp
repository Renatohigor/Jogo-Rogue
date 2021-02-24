#include "GameObject.h"
#include "listwall.h"

int GameObject::getPosititonX() const
{
    return posititonX;
}

void GameObject::setPosititonX(int value)
{
    posititonX = value;
}

int GameObject::getPosititonY() const
{
    return posititonY;
}

void GameObject::setPosititonY(int value)
{
    posititonY = value;
}

void GameObject::move(int newX, int newY)
{
    posititonX = newX;
    posititonY = newY;
}
bool GameObject::collide(GameObject *obj)
{
    //verifica se posição atual e igual a antiga
    if(posititonX == obj->getPosititonX() && posititonY == obj->getPosititonY())
        return true;
    else
        return false;
}

GameObject::GameObject()
{}
