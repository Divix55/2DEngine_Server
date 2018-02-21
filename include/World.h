//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_WORLD_H
#define INC_2DENGINE_SERVER_WORLD_H

#include <SFML/Graphics/RenderWindow.hpp>
#include "Player_Manager.h"

class World {
    Player_Manager playerManager;

    Player new_player{10, 10, 100, 50, 0, 10, "Divix", "player.png"};
public:
    sf::RenderWindow window;
    World();
    virtual ~World();

    void update(sf::Clock game_time);
    void eventCheck(sf::Event& event);
    void draw();
};


#endif //INC_2DENGINE_SERVER_WORLD_H
