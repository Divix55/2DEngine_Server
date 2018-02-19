//
// Created by Dawid Walenciak on 19.02.2018.
//

#ifndef INC_2DENGINE_SERVER_PLAYER_MANAGER_H
#define INC_2DENGINE_SERVER_PLAYER_MANAGER_H

#include <vector>
#include "Player.h"


class Player_Manager {
    std::vector<Player*> playerList;
public:
    void addPlayer(Player&);

    const std::vector<Player *> &getPlayerList() const;
};


#endif //INC_2DENGINE_SERVER_PLAYER_MANAGER_H
