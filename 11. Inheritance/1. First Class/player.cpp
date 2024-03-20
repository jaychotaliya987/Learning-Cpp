#include "player.h"
#include "person.h"

std::ostream &operator<<(std::ostream &out, const Player &player){
/*
* This function is really interesting. It is overload of the operator<<. This operator overload will return
* the reference to ostream object (Remember Overloads are the functions that will take in different data type but does the same logic
* For example here printing). That is a STD library class that is responsible for writing out the data.
* the first parameter is the reference to ostream object and the second parameter is the reference to the object of a class.
* that we want to write out. The first parameter helps us to chain the operator as well as to write out the data.
* as the output type of the reference itself we can chain the operator. similar to the cout << "Hello" << "World" << endl;
*/ 
    out << "Player : [ game : "  << player.m_game
         << " names : " << player.get_first_name()
             << " " << player.get_last_name() << "]";
    return out;
}
Player::Player(std::string_view game_param)
    : m_game{game_param}
{
    std::cout << "Player Constructor with Params called..." << std::endl;
}