#include <iostream>
#include <SFML/Network.hpp>

int main() {
    sf::IpAddress adres_ip("192.168.8.2");              //wyrzucic do pliku conf.cfg
    sf::TcpListener listener;
    uint16_t port = 22000;                              //wyrzucic do pliku conf.cfg
    if(listener.listen(port) != sf::Socket::Done){
        std::cout<<"Nie mogę nasluchiwac na porcie: "<<port<<std::endl;
    }

    return 0;
}