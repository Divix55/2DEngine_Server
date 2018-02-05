//
// Created by Dawid Walenciak on 04.02.2018.
//

#include "../include/Npc.h"

Npc::Npc(uint16_t posX,
                 uint16_t posY,
                 uint16_t health_points,
                 uint16_t magic_points,
                 uint16_t shield_points,
                 uint16_t strength,
                 std::string name) {
    setPosX(posX);
    setPosY(posY);
    setHealth_points(health_points);
    setMagic_points(magic_points);
    setShield_points(shield_points);
    setStrength(strength);

    setName(name);
}

Npc::~Npc() {
    delete this;
}
