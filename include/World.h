//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_WORLD_H
#define INC_2DENGINE_SERVER_WORLD_H

#include <SFML/Graphics/RenderWindow.hpp>

class World {
    //file
public:
    World(sf::RenderWindow& window);
    virtual ~World();

    void update(sf::Clock game_time);
    void draw(sf::RenderWindow& window);
};


#endif //INC_2DENGINE_SERVER_WORLD_H
