#include <iostream>
#include "person.cpp"
//#include "person.h"
//#include "engineer.h"
#include "engineer.cpp"
//#include "civilengineer.h"
#include "civilengineer.cpp"

/*
* The default constructor of the base class is called first and then the derived class constructor. The order of construction is from ground up.
*/

int main(){

    CivilEngineer ce1;
    std::cout << "-------------------" << std::endl;

    return 0;
}