//
// Created by Dawid Walenciak on 04.02.2018.
//

#ifndef INC_2DENGINE_SERVER_MONSTER_H
#define INC_2DENGINE_SERVER_MONSTER_H

#include "Organism.h"
#include "Enum_Lists.h"
#include "ControlAnim.h"

class Monster : public Organism, public ControlAnim{
    Monster_Type _monster_type;
public:
    Monster(uint16_t posX,
            uint16_t posY,
            uint16_t health_points,
            uint16_t magic_points,
            uint16_t shield_points,
            uint16_t strength,
            std::string name,
            std::string file_name,
            Monster_Type monster_type);

    virtual ~Monster();

    Monster_Type get_monster_type() const;
    void set_monster_type(Monster_Type _monster_type);
};


#endif //INC_2DENGINE_SERVER_MONSTER_H
