//
// Created by Dawid Walenciak on 04.02.2018.
//

#ifndef INC_2DENGINE_SERVER_MONSTER_H
#define INC_2DENGINE_SERVER_MONSTER_H

#include "Organism.h"
#include "Ai.h"
class Monster : public Organism, public Ai{
public:
    Monster(uint16_t posX,
            uint16_t posY,
            uint16_t health_points,
            uint16_t magic_points,
            uint16_t shield_points,
            uint16_t strength,
            std::string name);

    virtual ~Monster();
};


#endif //INC_2DENGINE_SERVER_MONSTER_H
