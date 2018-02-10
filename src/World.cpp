//
// Created by Dawid Walenciak on 05.02.2018.
//

#include "../include/World.h"

World::World(sf::RenderWindow& window) {

}

World::~World() {
    delete this;
}

void World::update(sf::Clock game_time) {
    if(game_time.getElapsedTime()>sf::seconds(0.1)){
        //TODO:update all
    }
}

void World::draw() {

}

