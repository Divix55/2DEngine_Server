//
// Created by Dawid Walenciak on 05.02.2018.
//

#include "../include/Control.h"

void Control::action_character(sf::Keyboard::Key key_button){
    if(key_button == sf::Keyboard::Up){
        move_up();
    }
    else if(key_button == sf::Keyboard::Right){
        move_right();
    }
    else if(key_button == sf::Keyboard::Down){
        move_down();
    }
    else if(key_button == sf::Keyboard::Left){
        move_left();
    }
    else if(key_button == sf::Keyboard::Return){
        //TODO: type in game global communicator
    }

    //TODO: key binding system in game gui
}

void Control::move_up() {
    _standing = false;
    //TODO: move up

    _standing = true;
}

void Control::move_down() {
    _standing = false;
    //TODO: move down
    _standing = true;
}

void Control::move_right() {
    _standing = false;
    //TODO: move right
    _standing = true;
}

void Control::move_left() {
    _standing = false;
    //TODO: move left
    _standing = true;
}

bool Control::is_standing() const {
    return _standing;
}

void Control::set_standing(bool _standing) {
    Control::_standing = _standing;
}
