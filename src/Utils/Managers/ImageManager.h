#pragma once

#include "Animation.h"
#include "ofMain.h"
#include <memory>
#include <vector>

// Animations that change based on direction
class DirectionalAnimations {
public:
    shared_ptr<Animation> up;
    shared_ptr<Animation> down;
    shared_ptr<Animation> left;
    shared_ptr<Animation> right;
};

// Animations used by all DynamicEntities
class DynamicEntityAnimations {
public:
    DirectionalAnimations movement;
    DirectionalAnimations attacking;
    shared_ptr<Animation> damage;
};

// Animations used by Link
class LinkAnimations : public DynamicEntityAnimations {
public:
    shared_ptr<Animation> death;
    shared_ptr<Animation> pickup;
};

/**
 * ImageManager is a class that contains all of the images used in the game.
 */
class ImageManager {
private:
    vector<ofImage> entitySprites;
    vector<ofImage> mapSprites;

    template <typename... Indices>
    shared_ptr<Animation> getAnimationFromIndices(Indices... indices);
    void createLinkAnimations();
    void createEnemyAnimations();
    void createTitleScreenAnimation();

    // Loads all sprites from a sprite sheet into a vector of images
    vector<ofImage> loadSpritesFromSheet(ofImage sheet, int spriteWidth, int spriteHeight, int borderSize = 0);

public:
    ImageManager();

    // TODO: Add your image declarations here
    ofImage gameOverScreen;
    ofImage gameOverScreenWithOptions;
    ofImage basicSword;
    ofImage overWorldPixelMap;
    ofImage oldMansCavePixelMap;
    ofImage dungeonPixelMap;
    ofImage heart;
    ofImage HUD;
    ofImage fullHeart;
    ofImage halfHeart;
    ofImage emptyHeart;

    // TODO: Add your animation declarations here
    shared_ptr<LinkAnimations> linkAnimations;
    shared_ptr<DynamicEntityAnimations> tektikeAnimations;
    //For one hit enemy
    shared_ptr<DynamicEntityAnimations> OneHitAnimations;
    shared_ptr<Animation> titleScreenAnimation;

    ofImage getSpriteFromEntitySheetAt(int column, int row);
    ofImage getSpriteFromMapSheetAt(int column, int row);
    shared_ptr<DynamicEntityAnimations> getTektikeAnimations();
    // This is for new Enemy animations.
    shared_ptr<DynamicEntityAnimations> getOneHitAnimations();
    const int PIXELS_PER_TILE = 16;
};