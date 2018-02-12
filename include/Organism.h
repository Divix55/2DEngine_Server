//
// Created by Dawid Walenciak on 04.02.2018.
//

#ifndef INC_2DENGINE_SERVER_ORGANISM_H
#define INC_2DENGINE_SERVER_ORGANISM_H

#define SEGMENT 32

#include <iostream>
#include <cstdint>
#include <string>
#include <vector>
#include <SFML/Graphics.hpp>

class Organism/*: public sf::Drawable*/{
    uint16_t _posX, _posY;
    uint16_t _health_points;        //0 - 65535 for all uint16_t
    uint16_t _magic_points;
    uint16_t _shield_points;
    uint16_t _stamina;
    uint16_t _capacity;
    uint16_t _strength;

    std::string _name;
    std::string _file_name;

    sf::Texture _texture;
public:
    sf::Sprite _actual_sprite;      //FIXME: delete this

    //virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:
    std::vector<sf::Sprite> sprite_list;
    Organism() : _posX{0},
                 _posY{0},
                 _health_points{0},
                 _magic_points{0},
                 _shield_points{0},
                 _stamina{0},
                 _capacity{0},
                 _strength{0},
                 _name{"emptyOrg"},
                 _file_name{"emptyOrg"} {
        if(!_texture.loadFromFile("/img/"+_file_name)){
            std::cout<<"Error with "<<_file_name<<" texture loading."<<std::endl;
        }
        else{
            for(int i=0; i<4; i++){
                for(int j=0; j<3; j++){
                    sf::Sprite tmp;
                    tmp.setTextureRect(sf::IntRect(j*SEGMENT,i*SEGMENT, SEGMENT, SEGMENT));
                    sprite_list.push_back(tmp);
                }
            }
        }

    };
    virtual ~Organism() {};

    uint16_t getPosX() const;
    uint16_t getPosY() const;
    uint16_t getHealth_points() const;
    uint16_t getMagic_points() const;
    uint16_t getShield_points() const;
    uint16_t getStamina() const;
    uint16_t getCapacity() const;
    uint16_t getStrength() const;

    const std::string &getName() const;
    const std::string &getFileName() const;

    const sf::Sprite &get_actual_sprite() const;

    void setPosX(uint16_t posX);
    void setPosY(uint16_t posY);
    void setHealth_points(uint16_t health_points);
    void setMagic_points(uint16_t magic_points);
    void setShield_points(uint16_t shield_points);
    void setStamina(uint16_t stamina);
    void setCapacity(uint16_t capacity);
    void setStrength(uint16_t strength);

    void setName(const std::string &name);
    void setFileName(const std::string &name);

    void set_actual_sprite(const sf::Sprite &_actual_sprite);
};


#endif //INC_2DENGINE_SERVER_ORGANISM_H
