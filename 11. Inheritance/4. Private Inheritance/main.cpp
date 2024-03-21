#include <iostream>
#include "person.cpp"
#include "engineer.h"
#include "civilengineer.h"

/*
* PRIVATE INHERITANCE : all the public members stays private in the derived class
* PROTECTED INHERITANCE : all the public members stays protected in the derived class, 
* Protected members means they can be used in the derived class but not outside of the derived class with the object of the derived class.
* PUBLIC INHERITANCE : all the public members stays public in the derived class
*/

int main(){

    Engineer engineer;
    
    std::cout << "-------------------" << std::endl;

    CivilEngineer civil_engineer;

    std::cout << "-------------------" << std::endl;
    
    return 0;
}