#ifndef CIVIL_ENGINEER_H
#define CIVIL_ENGINEER_H

#include "engineer.h"
class CivilEngineer : private Engineer
{
    friend std::ostream& operator<<(std::ostream&, const CivilEngineer& operand);
public:
    CivilEngineer();

    void build_road(){
        get_fullname(); // Compiler error
        fullname = "Daniel Gray"; //Compiler error
        age = 45; // Compiler error
    }
    void contract(){
        contract_count++; // OK
    }
    std::string get_speciality() const {return speciality;}
    int get_contract_count() const {return contract_count;}
    std::string set_speciality(std::string speciality){return this->speciality = speciality;}


protected:
    using Person::get_fullname; // *  we are using using keyword to access the functions from a base class even if we are doing private inheritance
    using Person::get_age;
    using Person::get_address;
    
private : 
    std::string speciality{"None"};
    int contract_count{0};

};

#endif // CIVIL_ENGINEER_H
