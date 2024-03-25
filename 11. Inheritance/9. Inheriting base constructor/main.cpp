#include <iostream>
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include "person.cpp"
#include "engineer.cpp"
#include "civilengineer.cpp"


int main(){
       

	Engineer eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12);
	std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
	
	Engineer eng2(eng1);
	std::cout << "eng2 : " << eng2 << std::endl;	
    
	std::cout << "---------------------------------" << std::endl;


	CivilEngineer civil_eng1("Daniel Gray",41,"Green Sky Oh Blue 33St#75",12,"Structural Engineering");
	
	std::cout << "+++++++++++++++++++++++++++++++++++++++" << std::endl;
	
	CivilEngineer civil_eng2(civil_eng1);
	std::cout << "civil_eng2 : " << civil_eng2 << std::endl;


    return 0;
}