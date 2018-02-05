//
// Created by Dawid Walenciak on 05.02.2018.
//

#include "../include/Player.h"

Player::~Player() {
    delete this;
}

Profession Player::get_profession() const {
    return _profession;
}

void Player::set_profession(Profession profession) {
    _profession = profession;
}
