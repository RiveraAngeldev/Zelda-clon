#pragma once

#include "StaticEntity.h"
#include <memory>

class RecursiveTiles : public StaticEntity 
{
    public://This file is to make the recursive tiles.
        string direction;
        RecursiveTiles(int x, int y, shared_ptr<Handler> handler, string dir) : StaticEntity(x, y, handler){
            this->direction = dir;
        }
        ~RecursiveTiles(){};
        void onCollision(shared_ptr<DynamicEntity> e){
            if (collidesWith(e)){
                if (direction == "up"){
                    e->setY(e->getY() - 1);
                } else if (direction == "down"){
                    e->setY(e->getY() + 1);
                } else if (direction == "left"){
                    e->setX(e->getX() - 1);
                } else if (direction == "right"){
                    e->setX(e->getX() + 1);
                }
                onCollision(e);
        }
    };
};