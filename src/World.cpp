//
// Created by Dawid Walenciak on 05.02.2018.
//

#include <SFML/Window/Event.hpp>
#include "../include/World.h"

World::World() {
    window.create(sf::VideoMode(800, 600), "2DENGINE");
}

World::~World() {
    window.close();
}

void World::update(sf::Clock game_time) {
    if(game_time.getElapsedTime()>sf::seconds(0.1)){
        draw();
    }
}

void World::eventCheck(sf::Event& event) {
    while(window.pollEvent(event)){
        if (event.type == sf::Event::Closed) {
            window.close();
        }
        if(event.type == sf::Event::KeyPressed){
            new_player.moveChar(event.key.code, new_player);                                    //edit
            new_player._actual_sprite.setPosition(new_player.getPosX(), new_player.getPosY());  //edit
        }
    }
}

void World::draw() {
    for(auto players: playerManager.getPlayerList()){
        players->_actual_sprite.setPosition(players->getPosX(), players->getPosY());
        window.draw(players->_actual_sprite);
    }
    window.draw(new_player._actual_sprite);
}

