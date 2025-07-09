#pragma once

#include "DynamicEntity.h"
#include "Map.h"

class OneHit   : public DynamicEntity {
    private:
        int counter;
        const int WAITING_TIME = 60;
        const int MOVEMENT_TIME = 30;

        int onehitGetX(){ return x; }
        int onehitGetY(){ return y; }

    public: 
        OneHit(int x, int y, shared_ptr<Handler> handler, shared_ptr<DynamicEntityAnimations> animations) : DynamicEntity(x, y, handler, animations) {
            this->MAX_HEALTH = 1;
            this->health = MAX_HEALTH;
            this->counter = 0;
            this->type = "onehit"; //specific enemy type for one hit enemy
        };

        void update();
        void damage(int damage);
        void onDeath();
        void onCollision(shared_ptr<DynamicEntity> entity){};

        int linkX =0;
        int linkY= 0;
};