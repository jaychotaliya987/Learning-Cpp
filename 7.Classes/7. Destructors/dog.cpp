#ifndef DOG_CPP
#define DOG_CPP

#include "dog.h"

Dog::Dog(std::string_view name_param, std::string_view breed_param, int age_param) // ! Constructor
//* When this constructor is called the only memory allocated to heap is int age. and hance this memory must be deallocated.
{
    name = name_param;
    breed = breed_param;
    p_age = new int; // * New operator called and it allocated memory for the int in the heap
    *p_age = age_param; // * Age is stored in the heap
    std :: cout << "Constructor called for " << name << std :: endl;
}

Dog::~Dog() // ! Destructor
{
    delete p_age; // * Memory is deallocated, Age is deleted from the heap
    std :: cout << "Destructor called for " << name << std :: endl; //* This line will only print if the destructor for the Dog objects are called.
}

#endif