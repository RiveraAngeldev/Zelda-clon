#include "OneHit.h"

void OneHit::update(){
            // Calculate the direction towards the player
            if (this->getX() > this->linkX) {
                this->move(LEFT);
            } if (this->getX() < this->linkX) {
                this->move(RIGHT);
            } if (this->getY() > this->linkY) {
                this->move(UP);
            } if (this->getY() < this->linkY) {
                this->move(DOWN);
            } 
             counter = 0;
}


void OneHit::damage(int damage){
    if (dead) return;
    // Play the damage sound if we're about to take damage
    // Used to be a little bugged but I believe it is fixed now
    if (invincibilityFrames == 0)
        handler->getSoundEffectManager()->playSoundEffect("enemy_hurt");
        
    DynamicEntity::damage(damage);
}

void OneHit::onDeath(){
    handler->getSoundEffectManager()->playSoundEffect("enemy_death");
}