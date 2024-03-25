#include "person.h"
#include "engineer.h"
#include <iostream>

Engineer::Engineer()
{
    std::cout << "Default constructor for Engineer called..." << std::endl;
}

Engineer::Engineer(std::string_view fullname,int age,
    std::string_view address,int contract_count_param) : 
Person(fullname,age,address),contract_count(contract_count_param) //! We can use the initializer list and add the base class 
//!                                                                   initializations (.... : Person(__Params__)) to initialise base class parameters. 
//!                                                                   This is useful because we can initialize base class params from derived class.
{
    std::cout << "Custom constructor for Engineer called..." << std::endl;
}

std::ostream& operator<<(std::ostream& out , const Engineer& operand){
     out << "Engineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    ",address : " << operand.get_address() <<
                    ",contract_count : " << operand.contract_count << "]";
    return out;   
}


Engineer::~Engineer()
{
}


