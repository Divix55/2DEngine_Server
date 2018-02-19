//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_WORLD_H
#define INC_2DENGINE_SERVER_WORLD_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Player_Manager.h"

class World {
    Player_Manager playerManager;
public:
    World();
    virtual ~World();

    void update(sf::Clock game_time, sf::RenderWindow& window);
    void eventCheck(sf::Event& event);
    void draw(sf::RenderWindow& window);
};


#endif //INC_2DENGINE_SERVER_WORLD_H
