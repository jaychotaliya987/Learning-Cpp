#ifndef DOG_CPP
#define DOG_CPP

#include "dog.h"

Dog::Dog() // ! Constructor
{
    this -> name = name;
    this ->  breed = breed;
    p_age = new int; 
    *p_age = 0; 
    std :: cout << "Constructor called for " << name << " at " << this << std :: endl;
}

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) // ! Constructor
{
    name = name_param;
    breed = breed_param;
    p_age = new int; 
    *p_age = age_param; 
    std :: cout << "Constructor called for " << name << " at " << this << std :: endl;
}

Dog::~Dog() // ! Destructor
{
    delete p_age; // 
    std :: cout << "Destructor called for " << name << " at " << this << std :: endl; 
}
void Dog::print_info()
{
    std :: cout << "Dog (" << this << ") [Name:" << name << ", Breed:" << breed << ", Age:" << *p_age << "]" << std :: endl;
}

//! Setters

void Dog::set_name(std::string_view name_param)
{
    this -> name = name_param; //! This pointer is used to access the object's current member variable. 
//!                                So here this -> name is same as name = name_param
}

void Dog::set_breed(std::string_view breed_param)
{
    this -> breed = breed_param;
}

void Dog::set_age(int age_param)
{
    *(this->p_age) = age_param;
}

/*
* The following setters are of special kind and they are design to return a pointer to the current object.
* The return type of the function is a pointer to a Dog object. This pointer is important and
* Then we can chain the sequence of class methods together. 
*/
Dog *Dog::set_name_returnptr(std::string_view name_param)
{
    this -> name = name_param;
    return this; // ! This will return the pointer to the current object.
}

Dog *Dog::set_breed_returnptr(std::string_view breed_param)
{
    this -> breed = breed_param;
    return this;
}

Dog *Dog::set_age_returnptr(int age_param)
{
    *(this -> p_age) = age_param; //* The p_age is a pointer itself hance we have to dereference it to assign the value to it.
    return this;
}

#endif
