#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include "person.cpp"
#include "engineer.cpp"
#include "civilengineer.cpp"


int main(){

	CivilEngineer civil_eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12,"Structural Engineering");
	std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
	/*
	* Destructors will be called in the reverse order of the constructors.
	*/
	
    return 0;
}