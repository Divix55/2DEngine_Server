//
// Created by Dawid Walenciak on 04.02.2018.
//

#include "../include/Organism.h"

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
