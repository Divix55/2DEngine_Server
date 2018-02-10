//
// Created by Dawid Walenciak on 04.02.2018.
//

#include "../include/Monster.h"

Monster::Monster(uint16_t posX,
                 uint16_t posY,
                 uint16_t health_points,
                 uint16_t magic_points,
                 uint16_t shield_points,
                 uint16_t strength,
                 std::string name,
                 std::string file_name,
                 Monster_Type monster_type) {
    setPosX(posX);
    setPosY(posY);
    setHealth_points(health_points);
    setMagic_points(magic_points);
    setShield_points(shield_points);
    setStrength(strength);

    setName(name);
    setFileName(file_name);
    set_monster_type(monster_type);
}

Monster::~Monster() {
    delete this;
}

Monster_Type Monster::get_monster_type() const {
    return _monster_type;
}

void Monster::set_monster_type(Monster_Type _monster_type) {
    Monster::_monster_type = _monster_type;
}
