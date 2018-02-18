#include <iostream>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include "../include/World.h"
#include "../include/Player.h"

int main() {
    std::cout<<"Tworze swiat gry: "<<std::endl;
    sf::RenderWindow game_window(sf::VideoMode(800,600), "2DEngine");
    World* newWorld = new World(game_window);
    Player* new_player = new Player(10, 10, 100, 50, 0, 10, "Divix", "player.png");
    while(game_window.isOpen()) {
        sf::Clock game_time;
        sf::Event event;
        while (game_window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                game_window.close();
            }
            if(event.type == sf::Event::KeyPressed){
                new_player->action_character(event.key.code);
            }
        }

        game_window.clear();
        newWorld->update(game_time);
        game_window.display();
    }
    return 0;
}