//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_CONTROL_H
#define INC_2DENGINE_SERVER_CONTROL_H

#include <SFML/Window.hpp>
#include <SFML/System.hpp>

class Control {
    bool _standing

public:
    Control(): _standing{true} {}
    virtual ~Control() {};

    void action_character(sf::Keyboard::Key key_button);
    void move_up();
    void move_down();
    void move_right();
    void move_left();

    bool is_standing() const;
    void set_standing(bool _standing);
};


#endif //INC_2DENGINE_SERVER_CONTROL_H
