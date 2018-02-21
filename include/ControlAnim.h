//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_CONTROLANIM_H
#define INC_2DENGINE_SERVER_CONTROLANIM_H

#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "Organism.h"
#include "Enum_Lists.h"

class ControlAnim {
    sf::RenderWindow window;
public:
    ControlAnim() = default;
    virtual ~ControlAnim() = default;

    void moveChar(sf::Keyboard::Key key_button, Organism& me);
    void animate(Direction direction, Organism& me);
};


#endif //INC_2DENGINE_SERVER_CONTROLANIM_H
