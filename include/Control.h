//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_CONTROL_H
#define INC_2DENGINE_SERVER_CONTROL_H

#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Control {
public:
    Control();
    virtual ~Control() {};

    void action_character(sf::Keyboard::Key key_button);
};


#endif //INC_2DENGINE_SERVER_CONTROL_H
