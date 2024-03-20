#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"
#include <iostream>
#include <string>

class Player : public Person // ! This is how we define inheritance
/*
* Public inheritance will make all the public members of the base class available to the derived class.
* Private members of the base class will not be available to the derived class. We use different techniques
* to access the private members of the base class.
*/
{  
    friend std::ostream& operator<<(std::ostream& out, const Player& player); // ! This is how we define a friend function
//* friend functions are not member functions of class. They help us to access the private members of a class.
//* Here, We are making a friend function that will be overload of operator<<, This operator is write out operator.
//*  
public:
    
    Player() = default;
    Player(std::string_view game_param);
private:
    std::string m_game{"My Super Game"};
};

#endif