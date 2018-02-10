#include <iostream>
#include <SFML/Network.hpp>
#include <SFML/Window.hpp>
#include "../include/World.h"
#include "../include/Player.h"

struct Char{
    sf::Uint32 a;
    int b;
    std::string c;
};

sf::Packet & operator <<(sf::Packet & Packet, Char& shape){
    return  Packet << shape.a << shape.b << shape.c;
}
sf::Packet & operator >>(sf::Packet & Packet, Char& shape){
    return  Packet << shape.a << shape.b << shape.c;
};

int main() {
    std::cout<<"Tworze swiat gry: "<<std::endl;
    sf::RenderWindow game_window(sf::VideoMode(800,600), "2DEngine");
    World *newWorld = new World(game_window);
    Player* new_player = new Player(10, 10, 100, 50, 0, 10, "Divix", "player.png");


    //TEST
    sf::Packet pak;
    Char nowy;
    nowy.a= 255;
    nowy.b = 10;
    nowy.c = "hehe";
    if(pak<<nowy){std::cout<<"pYklo";}
    sf::TcpSocket socket;
    sf::Socket::Status status = socket.connect("127.0.0.1", 22000);
    socket.send(pak);
    //TEST




    while(game_window.isOpen()) {
        sf::Event event;
        while (game_window.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {
                game_window.close();

            }
        }
        game_window.clear();
        //TODO: rysowanie wszystkiego
        game_window.display();
    }
    return 0;
}