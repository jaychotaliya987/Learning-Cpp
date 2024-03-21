#include "player.h"
#include "person.h"

std::ostream &operator<<(std::ostream &out, const Player &player){

    out << "Player [Game: "  << player.m_game
         << ", Name: " << player.get_fullname()
             << ", Age: " << player.get_age() << 
             ", Address: " << player.get_address() << "]";
    return out;
}
Player::Player(std::string_view game_param, std::string_view first_name_param, std::string_view last_name_param)
{
    std::cout << "Player Constructor with Params called..." << std::endl;
    set_age(23);
    set_fullname(first_name_param);
    m_game = game_param;
}
Player::~Player()
{
    std::cout << "Player Destructor called..." << std::endl;
}

void Player::play() const{
        std::cout << fullname << "(" << age << ")" << " is playing..." << std::endl;
    }