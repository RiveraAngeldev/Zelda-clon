#include "ofMain.h"

struct TilePixelColors{
    // Walls
    const ofColor CENTRAL_MOUNTAIN_WALL = ofColor(1, 57, 0);
    const ofColor UPPER_MOUNTAIN_WALL = ofColor(44, 132, 42);
    const ofColor LOWER_RIGHT_MOUNTAIN_CORNER = ofColor(71, 108, 70);
    const ofColor LOWER_LEFT_MOUNTAIN_CORNER = ofColor(157, 226, 155);
    const ofColor UPPER_RIGHT_MOUNTAIN_CORNER = ofColor(114, 176, 113);
    const ofColor UPPER_LEFT_MOUNTAIN_CORNER = ofColor(77, 198, 75);
    
    const ofColor CENTRAL_BROWN_WALL = ofColor(57, 33, 0);
    const ofColor UPPER_BROWN_WALL = ofColor(83, 55, 17);
    const ofColor LOWER_RIGHT_BROWN_CORNER = ofColor(195, 131, 43);
    const ofColor LOWER_LEFT_BROWN_CORNER = ofColor(203, 178, 144);
    const ofColor UPPER_RIGHT_BROWN_CORNER = ofColor(155, 130, 96);
    const ofColor UPPER_LEFT_BROWN_CORNER = ofColor(98, 71, 34);
    const ofColor CAVE_WALL = ofColor(75, 35, 0);
    const ofColor CAVE_UPPER_WALL = ofColor(98, 45, 1);

    //New Dungeon 
    const ofColor DUNGEON_WALL = ofColor(254,0,0); //Gotta be real careful changing this.
    

    // Decorations (also walls)
    const ofColor GREEN_TREES = ofColor(2, 131, 0);
    const ofColor CENTRAL_WATER = ofColor(24, 37, 214);
    const ofColor WATER_LOWER_LEFT_CORNER = ofColor(71, 111, 250);
    const ofColor GREEN_SNAIL_BUSH_THINGS = ofColor(124, 255, 121);
    const ofColor BROWN_SNAIL_ROCK_THING = ofColor(178, 108, 11);
    const ofColor BLACK_ENTRANCE = ofColor(0, 0, 0);
    const ofColor OLD_MAN = ofColor(200, 53, 19);

    // Floors
    const ofColor WALKABLE_CAVE_FLOOR = ofColor(1, 0, 0);
    const ofColor WALKABLE_OVERWORLD_FLOOR = ofColor(255, 192, 122);
    const ofColor WATER_BRIDGE = ofColor(217, 78, 65);
    //New Dungeon Floor 
    const ofColor WALKABLE_DUNGEON_FLOOR = ofColor(255,255,255);

    //For Arrows
    const ofColor UP_ARROW = ofColor(255,255,0);
    const ofColor DOWN_ARROW = ofColor(255,0,255);
    const ofColor LEFT_ARROW = ofColor(0,0,255);
    const ofColor RIGHT_ARROW = ofColor(0,255,255);
};

struct EntityPixelColors{

    // Doors
    const ofColor OLD_MANS_CAVE_ENTRANCE = ofColor(0, 0, 1);
    const ofColor OVERWORLD_ENTRANCE = ofColor(0, 0, 2);
    //For consistency and ease, overworld pixel Map already has this door 
    //with this color in it, but it does not send you anywhere, 
    //that is where you come in :D
    const ofColor DUNGEON_ENTRANCE = ofColor(0, 0, 3);

    const ofColor DUNGEON_EXIT = ofColor(0,255,0);
    
    // StaticEntities
    const ofColor FIRE = ofColor(250, 134, 107);

    // DynamicEntities
    const ofColor LINK = ofColor(25, 255, 0);
};
