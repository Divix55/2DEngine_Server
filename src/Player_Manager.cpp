//
// Created by Dawid Walenciak on 19.02.2018.
//

#include "../include/Player_Manager.h"

void Player_Manager::addPlayer(Player& player) {
    playerList.push_back(&player);
}

const std::vector<Player *> &Player_Manager::getPlayerList() const {
    return playerList;
}
