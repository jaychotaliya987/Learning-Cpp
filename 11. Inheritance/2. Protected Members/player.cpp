#include "player.h"
#include "person.h"

std::ostream &operator<<(std::ostream &out, const Player &player){

    out << "Player : [ game : "  << player.m_game
         << " names : " << player.get_first_name()
             << " " << player.get_last_name() << "]";
    return out;
}
Player::Player(std::string_view game_param, std::string_view first_name_param, std::string_view last_name_param)
{
    std::cout << "Player Constructor with Params called..." << std::endl;
//* We can use this because they are protected members of the base class. We can use them in public derived classes.
//* We are not using the initializer list here initializing in the constructor body is more cleaner.

    first_name = "John";
    last_name = "Snow";
    m_game = game_param;
}