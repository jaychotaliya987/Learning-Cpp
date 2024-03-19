#include "dog.cpp"

/*
* The `this` pointer in C++ points to the memory location where the current object is stored. 
* It can be used within instance methods to refer to the object itself. 
* The arrow operator (->) is used to access the object's members. Basically it is used to apply methods to an object. 
* but it is doing so through a pointer to the object.
*/

int main (){

    Dog dog1("Fluffy", "Labrador", 1);
    dog1.print_info();
    dog1.set_name("Max");
    dog1.set_age(4);
    dog1.set_breed("Golden Retriever");
    dog1.print_info();

    dog1.set_name_returnptr("Bebop") -> set_breed_returnptr("Mixed Husky") -> set_age_returnptr(10) -> print_info();
    Dog dog2;
    dog2.set_name_returnptr("Arrow") -> set_breed_returnptr("Husky") -> set_age_returnptr(4) -> print_info();

    //! the returnptr setters are designed in a way that they will return a "this" pointer after the assignment operation.
    //! This pointer will point to the current object and that would be Dog.dog1 in this case. hance we can again use 
    //! the arrow operator to apply another method to the object.

    std::cout << "End of main" << std::endl;
    return 0;
}