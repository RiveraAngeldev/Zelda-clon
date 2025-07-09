#pragma once

#include "Animation.h"
#include "Link.h"
#include "Tektike.h"
#include "MapBuilder.h"
#include "State.h"
#include "BasicSword.h"
#include "OneHit.h"
#include <memory>

class GameState : public State {

private:
    shared_ptr<Map> currentMap;
    shared_ptr<Map> overWorldMap;
    shared_ptr<Map> oldManCaveMap;
    unique_ptr<MapBuilder> mapBuilder;
    //New Dungeon 
    shared_ptr<Map> dungeon;
   
public:
    GameState(shared_ptr<Handler> handler) : State(handler) { this->reset(); }
    void update();
    void draw();
    void reset();
    void keyPressed(int key);
    void keyReleased(int key);
    ofImage menuHUD;
    bool paused;
    int hudY;
    int hudH;
    int hudHeight;
    int changeState;

    shared_ptr<Tektike> createTektike();
    //For one hit enemy
    shared_ptr<OneHit> createOneHit();
    shared_ptr<OneHit> onehit;
};