#include <iostream>
#include "person.h"
#include "engineer.h"
#include "person.cpp"
#include "engineer.cpp"

/*
* In our engineer class we do not have a constructor but still we'll be able to create a engineer object because we are using the base class constructors.
* to do that we have to use the following keyword,
!											using Person::Person;
* This keyword will tell the compiler to use the base class constructors to create the similar constructor for the derived class.
! Copy constructors are not inheritable.
! Inheriting the constructors is confusing and one should avoid using them.
*/

int main(){
       
	Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75");
	std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
	
	std::cout << eng1 << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;


	Engineer eng2("Daniel Gray",41,"Green Sky Oh Blue 33St#75",5); //* If we use 4 Parameters them the compiler will use the custom constructor. This is kind of overloading.
	std::cout << eng2 << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;

    return 0;
}