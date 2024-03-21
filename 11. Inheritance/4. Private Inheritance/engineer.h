#ifndef ENGINEER_H
#define ENGINEER_H
#include "person.h"

//Engineer is doing private inheritance

class Engineer : private Person //! Private Inheritance, All the person members will become private in Engineer 
{
friend std::ostream& operator<<(std::ostream& out , const Engineer& operand);
public:
    Engineer();
    ~Engineer();
    
    void build_something(){
        fullname = "John Snow"; // OK
        age = 23; // OK
        //m_address = "897-78-723"; Compiler error
    }
    
private : 
    int contract_count{0};
};

#endif // ENGINEER_H
