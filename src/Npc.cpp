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
         std::string name,
         std::string file_name,
         Npc_Type npc_type) {
    setPosX(posX);
    setPosY(posY);
    setHealth_points(health_points);
    setMagic_points(magic_points);
    setShield_points(shield_points);
    setStrength(strength);

    setName(name);
    setFileName(file_name);
    set_npc(npc_type);
    _isTalking=false;
}

Npc::~Npc() {
    delete this;
}

Npc_Type Npc::get_npc() const {
    return _npc;
}

void Npc::set_npc(Npc_Type _npc) {
    Npc::_npc = _npc;
}

void Npc::move_npc() {
    if(!get_isTalking()){
        int random = rand()%4+1;
        switch(random){
            case 1:
                move_up();
            case 2:
                move_right();
            case 3:
                move_down();
            default:
                move_left();
        }
    }
}

bool Npc::get_isTalking() const {
    return _isTalking;
}

void Npc::set_isTalking(bool _isTalking) {
    Npc::_isTalking = _isTalking;
}
