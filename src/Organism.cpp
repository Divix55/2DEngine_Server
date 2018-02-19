//
// Created by Dawid Walenciak on 04.02.2018.
//

#include "../include/Organism.h"

//void Organism::draw(sf::RenderTarget& target, sf::RenderStates states) const{
//    target.draw(_actual_sprite);
//}

uint16_t Organism::getPosX() const {
    return _posX;
}

void Organism::setPosX(uint16_t posX){
    _posX = posX;
}

uint16_t Organism::getPosY() const {
    return _posY;
}

void Organism::setPosY(uint16_t posY) {
    _posY = posY;
}

uint16_t Organism::getHealth_points() const {
    return _health_points;
}

void Organism::setHealth_points(uint16_t health_points) {
    _health_points = health_points;
}

uint16_t Organism::getMagic_points() const {
    return _magic_points;
}

void Organism::setMagic_points(uint16_t magic_points) {
    _magic_points = magic_points;
}

uint16_t Organism::getShield_points() const {
    return _shield_points;
}

void Organism::setShield_points(uint16_t shield_points) {
    _shield_points = shield_points;
}

uint16_t Organism::getStamina() const {
    return _stamina;
}

void Organism::setStamina(uint16_t stamina) {
    _stamina = stamina;
}

uint16_t Organism::getCapacity() const {
    return _capacity;
}

void Organism::setCapacity(uint16_t capacity) {
    _capacity = capacity;
}

uint16_t Organism::getStrength() const {
    return _strength;
}

void Organism::setStrength(uint16_t strength) {
    _strength = strength;
}

const std::string &Organism::getName() const {
    return _name;
}

void Organism::setName(const std::string &name) {
    _name = name;
}

const std::string &Organism::getFileName() const {
    return _file_name;
}

void Organism::setFileName(const std::string &name) {
    _file_name = name;
}

const sf::Sprite &Organism::get_actual_sprite() const {
    return _actual_sprite;
}

void Organism::set_actual_sprite(const sf::Sprite &_actual_sprite) {
    Organism::_actual_sprite = _actual_sprite;
}

void Organism::setFileSprite(std::string file_name) {
    if(!_texture.loadFromFile("../img/"+file_name)){
        std::cout<<"Error with "<<file_name<<" texture loading."<<std::endl;
    }
    else{
        for(int i=0; i<4; i++){
            for(int j=0; j<3; j++){
                sf::Sprite tmp;
                tmp.setTexture(_texture);
                tmp.setTextureRect(sf::IntRect(j*SEGMENT,i*SEGMENT, SEGMENT, SEGMENT));
                sprite_list.push_back(tmp);
            }
        }
        set_actual_sprite(sprite_list[0]);
    }
}
