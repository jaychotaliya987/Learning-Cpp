#ifndef PERSON_CPP
#define PERSON_CPP

#include "person.h"

Person::Person(){
}

Person::Person(std::string_view fullname, int age, std::string_view address)
    : fullname(fullname), age(age), address(address)
{
}

std::ostream& operator<<(std::ostream& out , const Person& person){
    out << "Person [Full Name: " << person.fullname << ", Address: " << person.address << ", Age: " << person.age << "]";
    return out;
}

#endif