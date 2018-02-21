#include <iostream>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include "../include/World.h"

int main() {
    std::cerr<<"Tworze swiat gry: "<<std::endl;
    /*sf::RenderWindow game_window(sf::VideoMode(800,600), "2DEngine");
    World newWorld;
    Player new_player{10, 10, 100, 50, 0, 10, "Divix", "player.png"};
    //TODO: wyrzucic stad player i dodac obsluge listy graczy
    while(game_window.isOpen()) {
        sf::Clock game_time;
        sf::Event event;
        while (game_window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                game_window.close();
            }
            //---------------
            if(event.type == sf::Event::KeyPressed){
                new_player.moveChar(event.key.code, new_player);
            }
            //---------------
            newWorld.eventCheck(event);
        }

        game_window.clear();
        newWorld.update(game_time, game_window);

        new_player._actual_sprite.setPosition(new_player.getPosX(), new_player.getPosY());
        game_window.draw(new_player.get_actual_sprite());


        game_window.display();
    }*/
    World world;
    std::cerr<<"Otwieram petle gry i rysuje swiat"<<std::endl;
    while(world.window.isOpen()){
        sf::Clock game_time;
        sf::Event event;
        world.eventCheck(event);
        world.window.clear();
        world.draw();
        world.window.display();
    }
    return 0;
}