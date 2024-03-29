#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : public Person
{ 
    using Person::Person; //! Inheriting base class constructor, this will bring all the base class constructors to the derived class.
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
public:
    Engineer(std::string_view fullname,int age,
    std::string_view address,int contract_count);
    
/*
    Engineer();
    Engineer(const Engineer& source); 
    ~Engineer();
*/   
    void build_something(){
        m_full_name = "John Snow"; // OK
        m_age = 23; // OK
        //m_address = "897-78-723"; Compiler error
    }

    int get_contract_count() const{
        return contract_count;
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H
