#include <iostream>
#include "player.cpp"
#include "person.cpp"


int main(){

    Player p1("Basketball","John","Snow");
    std::cout << p1 << std::endl;
    Person p2("John Snow", 25,"whatever city, whatever street, #35e ");
    std::cout << p2 << std::endl;

    Player p3("Football","John","Doe");
    p3.play();

    // std::cout << p3.get_fullname() << std::endl; //! Error because the class Player is inherited from Person with protected access specifier
    //* That is because all the public methods of base class are now protected within the derived class we can not modify or access them from outside the class.
    //* Those methods are only accessible within the derived class and its derived classes. 
    
    return 0;
}