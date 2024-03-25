#include <iostream>
#include "person.cpp"
#include "engineer.h"
#include "engineer.cpp"
#include "civilengineer.cpp"
#include "civilengineer.h"

/*
* RESURRECTING MEMBERS : We can do private inheritance and then use the using keyword to make the members public again.
* remember that you can not use the private members of the base class anyway. they are private to the derived class.
*/

int main(){

    
    std::cout << "-------------------" << std::endl;

    CivilEngineer civil_engineer;
    civil_engineer.contract();
    civil_engineer.contract();
    civil_engineer.contract();
    civil_engineer.set_speciality("Roads");

    std::cout << "-------------------" << std::endl;
    
    return 0;
}