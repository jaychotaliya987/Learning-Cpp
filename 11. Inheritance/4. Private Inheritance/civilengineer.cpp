
#include "person.h"
#include "engineer.h"
#include "civilengineer.h"
#include <iostream>

CivilEngineer::CivilEngineer()
{
}

std::ostream& operator<<(std::ostream& out, const CivilEngineer& operand){
    
    /*

    ! All this get functions will not work because we have derived the class privately.
     out << "CivilEngineer [Full name : " << operand.get_full_name() <<
                    ",age : " << operand.get_age() << 
                    //",address : " << operand.get_address() <<
                    ",contract_count : " << operand.contract_count <<
                    ",speciality : " << operand.m_speciality << "]";
    */
                  
				
    return out;  
}


CivilEngineer::~CivilEngineer()
{
}
