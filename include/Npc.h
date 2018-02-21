//
// Created by Dawid Walenciak on 04.02.2018.
//

#ifndef INC_2DENGINE_SERVER_NPC_H
#define INC_2DENGINE_SERVER_NPC_H


#include "Organism.h"
#include "Ai.h"
#include "Enum_Lists.h"
#include "ControlAnim.h"

class Npc : public Organism, public Ai, public ControlAnim{
    bool _isTalking;
    Npc_Type _npc;
public:
    Npc(uint16_t posX,
        uint16_t posY,
        uint16_t health_points,
        uint16_t magic_points,
        uint16_t shield_points,
        uint16_t strength,
        std::string name,
        std::string file_name,
        Npc_Type npc);
    virtual ~Npc();

    Npc_Type get_npc() const;
    bool get_isTalking() const;
    void set_isTalking(bool _isTalking);
    void set_npc(Npc_Type _npc);

    void move_npc();

};


#endif //INC_2DENGINE_SERVER_NPC_H
