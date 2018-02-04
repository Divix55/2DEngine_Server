//
// Created by Dawid Walenciak on 04.02.2018.
//

#ifndef INC_2DENGINE_SERVER_ORGANISM_H
#define INC_2DENGINE_SERVER_ORGANISM_H


#include <cstdint>

class Organism {
    uint16_t _health_points;        //0 - 65535 for all uint16_t
    uint16_t _magic_points;
    uint16_t _shield_points;
    uint16_t _stamina;
    uint16_t _capacity;

public:
    Organism() : _health_points{0}, _magic_points{0}, _shield_points{0}, _stamina{0}, _capacity{0} {};
    virtual ~Organism();

    uint16_t getHealth_points() const;
    uint16_t getMagic_points() const;
    uint16_t getShield_points() const;
    uint16_t getStamina() const;
    uint16_t getCapacity() const;

    void setHealth_points(uint16_t health_points);
    void setMagic_points(uint16_t magic_points);
    void setShield_points(uint16_t shield_points);
    void setStamina(uint16_t stamina);
    void setCapacity(uint16_t capacity);
};


#endif //INC_2DENGINE_SERVER_ORGANISM_H
