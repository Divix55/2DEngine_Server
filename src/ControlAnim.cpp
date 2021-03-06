//
// Created by Dawid Walenciak on 05.02.2018.
//

#include <iostream>
#include "../include/ControlAnim.h"

void ControlAnim::moveChar(sf::Keyboard::Key key_button, Organism& me){
    const static uint16_t movement = 8;
    if(key_button == sf::Keyboard::Up){
        me.setPosY(me.getPosY()-movement);
        animate(Direction::up, me);
    }
    else if(key_button == sf::Keyboard::Right){
        me.setPosX(me.getPosX()+movement);
        animate(Direction::right, me);
    }
    else if(key_button == sf::Keyboard::Down){
        me.setPosY(me.getPosY()+movement);
        animate(Direction::down, me);
    }
    else if(key_button == sf::Keyboard::Left){
        me.setPosX(me.getPosX()-movement);
        animate(Direction::left, me);
    }
    else if(key_button == sf::Keyboard::Return){
        //TODO: type in game global communicator
    }

    //TODO: key binding system in game gui

}

void ControlAnim::animate(Direction direction, Organism& me) {
    if(direction == Direction::up){

    }
    else if(direction == Direction::right){

    }
    else if(direction == Direction::down){

    }
    else if(direction == Direction::left){

    }
    else{
        std::cout<<"Wrong direction state!"<<std::endl;
    }
}
