#pragma once
#include "Item.h"
#include <memory>

class BasicSword : public Item {
    public: 
        BasicSword(int x, int y, std::shared_ptr<Handler> handler, ofImage sprite) : Item(x, y, handler, sprite) {
        }
        ~BasicSword() {}
        void applyEffect(shared_ptr<Link> link){
            link->swordEquipped = true; // sword is equipped

        }
};