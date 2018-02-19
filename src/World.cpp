//
// Created by Dawid Walenciak on 05.02.2018.
//

#include <SFML/Window/Event.hpp>
#include "../include/World.h"

World::World() {

}

World::~World() {
}

void World::update(sf::Clock game_time, sf::RenderWindow& window) {
    if(game_time.getElapsedTime()>sf::seconds(0.1)){
        draw(window);
    }
}

void World::eventCheck(sf::Event& event) {
    if(event.type == sf::Event::KeyPressed){
        for(auto player: playerManager.getPlayerList()){
            player->action_character(event.key.code);
        }
    }
}

void World::draw(sf::RenderWindow& window) {

}

