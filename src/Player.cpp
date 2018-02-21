//
// Created by Dawid Walenciak on 05.02.2018.
//

#include "../include/Player.h"

Player::Player(uint16_t posX, uint16_t posY, uint16_t health_points, uint16_t magic_points, uint16_t shield_points,
               uint16_t strength, std::string name, std::string file_name) {
    player_id=0;
    setPosX(posX);
    setPosY(posY);
    setHealth_points(health_points);
    setMagic_points(magic_points);
    setShield_points(shield_points);
    setStrength(strength);
    setName(name);
    setFileName(file_name);
    set_profession(Profession::none);
    setFileSprite(file_name);
}

Player::~Player() {
    //delete this
}

Profession Player::get_profession() const {
    return _profession;
}

void Player::set_profession(Profession profession) {
    _profession = profession;
}

uint16_t Player::getPlayer_id() const {
    return player_id;
}

void Player::incPlayer_id() {
    player_id+=1;
}
