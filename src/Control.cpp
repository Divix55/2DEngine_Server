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
    //TODO: move up
}

void Control::move_down() {
    //TODO: move down
}

void Control::move_right() {
    //TODO: move right
}

void Control::move_left() {
    //TODO: move left
}