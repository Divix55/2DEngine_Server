//
// Created by Dawid Walenciak on 05.02.2018.
//

#ifndef INC_2DENGINE_SERVER_PLAYER_H
#define INC_2DENGINE_SERVER_PLAYER_H


#include "Organism.h"
#include "Control.h"
#include "Organism_Lists.h"

class Player: public Organism, public Control {
    Profession _profession;
public:
    Player(uint16_t posX,
           uint16_t posY,
           uint16_t health_points,
           uint16_t magic_points,
           uint16_t shield_points,
           uint16_t strength,
           std::string name,
           std::string file_name);
    virtual ~Player();

    Profession get_profession() const;
    void set_profession(Profession _profession);
};


#endif //INC_2DENGINE_SERVER_PLAYER_H
