#ifndef NURSE_H
#define NURSE_H

#include "person.h"

//Nurse will do protected inheritance
class Nurse : protected Person
{
	friend std::ostream& operator<<(std::ostream& , const Nurse& operand);
public:
	Nurse();
	~Nurse();
	
    void treat_unwell_person(){
        std::cout << "Nurse is treating the unwell person" << std::endl;
        fullname = "John Snow"; //! OK
        age = 23; //! OK
        //m_address = "897-78-723"; Compiler error
    }
    
private : 
    int practice_certificate_id{0};
};

#endif // NURSE_H