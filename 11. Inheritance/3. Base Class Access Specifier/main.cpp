#include <iostream>
#include "player.cpp"
#include "person.cpp"
#include "nurse.cpp"
/*
* PRIVATE INHERITANCE : all the public members stays private in the derived class
* PROTECTED INHERITANCE : all the public members stays protected in the derived class, 
* Protected members means they can be used in the derived class but not outside of the derived class with the object of the derived class.
* PUBLIC INHERITANCE : all the public members stays public in the derived class
*/

int main(){

    Person p2("John Snow", 25,"whatever city, whatever street, #35e ");
    std::cout << p2 << std::endl;

    std::cout << "-------------------" << std::endl;


    Player p1("Basketball","John","Snow");
    std::cout << p1 << std::endl;

    std::cout << "-------------------" << std::endl;

    Player p3("Football","John","Doe");
    p3.play();

    // std::cout << p3.get_fullname() << std::endl; //! Error because the class Player is inherited from Person with protected access specifier
    //* That is because all the public methods of base class are now protected within the derived class we can not modify or access them from outside the class.
    //* Those methods are only accessible within the derived class and its derived classes. 

    std::cout << "-------------------" << std::endl;

    Nurse n1;
    n1.treat_unwell_person();
    //* n1.set_age(23); Error because the class Nurse is inherited from Person with protected access specifier
    //* n1.set_fullname("John Snow");
    std::cout << n1 << std::endl;

    std::cout << "-------------------" << std::endl;
    
    return 0;
}