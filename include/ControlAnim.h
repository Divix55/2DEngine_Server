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

public:
    ControlAnim() {};
    virtual ~ControlAnim() {};

    void moveChar(sf::Keyboard::Key key_button, Organism& me);
    void animate(Direction direction);
};


#endif //INC_2DENGINE_SERVER_CONTROLANIM_H
