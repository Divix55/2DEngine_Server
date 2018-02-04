//
// Created by Dawid Walenciak on 04.02.2018.
//

#ifndef INC_2DENGINE_SERVER_ORGANISM_H
#define INC_2DENGINE_SERVER_ORGANISM_H

#include <cstdint>
#include <string>

class Organism {
    uint16_t _posX, _posY;
    uint16_t _health_points;        //0 - 65535 for all uint16_t
    uint16_t _magic_points;
    uint16_t _shield_points;
    uint16_t _stamina;
    uint16_t _capacity;

    uint16_t _strength;

    std::string _name;

public:
    Organism() : _posX{0},
                 _posY{0},
                 _health_points{0},
                 _magic_points{0},
                 _shield_points{0},
                 _stamina{0},
                 _capacity{0},
                 _strength{0},
                 _name{"emptyOrg"} {};
    virtual ~Organism() {};

    uint16_t getPosX() const;
    uint16_t getPosY() const;
    uint16_t getHealth_points() const;
    uint16_t getMagic_points() const;
    uint16_t getShield_points() const;
    uint16_t getStamina() const;
    uint16_t getCapacity() const;
    uint16_t getStrength() const;
    uint16_t getDefence() const;

    const std::string &getName() const;

    void setPosX(uint16_t posX);
    void setPosY(uint16_t posY);
    void setHealth_points(uint16_t health_points);
    void setMagic_points(uint16_t magic_points);
    void setShield_points(uint16_t shield_points);
    void setStamina(uint16_t stamina);
    void setCapacity(uint16_t capacity);
    void setStrength(uint16_t strength);
    void setDefence(uint16_t defence);

    void setName(const std::string &name);
};


#endif //INC_2DENGINE_SERVER_ORGANISM_H
