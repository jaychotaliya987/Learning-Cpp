#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <iostream>
#include <string>

class Player : protected Person 

{  
    friend std::ostream& operator<<(std::ostream& out, const Player& player); 
 
public:
    
    Player() = default;
    Player(std::string_view game_param, std::string_view first_name_param, std::string_view last_name_param);
    ~Player();
    void play() const;
    
private:
    std::string m_game{"My Super Game"};
};

#endif