//
// Created by Dawid Walenciak on 04.02.2018.
//

#include "../include/Organism.h"

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
