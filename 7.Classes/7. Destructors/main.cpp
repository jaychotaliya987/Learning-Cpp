#include "dog.cpp"
/*
* The destructor is method that frees the memory from the heap or when the local stack object goes out of scope. Going out of scope means } is encountered.
* The destructor will always be called when the object goes out of the scope. Here, the destructor will be called when the function some_function() ends.
* not when the main function ends.
*/
void some_function()
{
    std :: cout << "In some_function" << std :: endl;
    Dog dog3("Max", "Labrador", 4);
}

void func_with_new()
{
    Dog *p_dog = new Dog("Champ", "Labrador", 4); // * the new operator is called and it allocates memory in heap but if we don't delete it, it will cause memory leak.
//*                                                 The destructor will not be called when the function ends but it will only clear the 
//*                                                 function scope that is the pointer p_dog.

    delete p_dog; // * Destructor is called and memory is deallocated.
    std::cout << "End of func_with_new" << std::endl;
}


int main()
{
    Dog dog1("Doggy1", "Labrador", 1);
    Dog dog2("Doggy2", "Golden Retriever", 4);
    Dog dog3("Doggy3", "Labrador", 3);
    Dog dog4("Doggy4", "Golden Retriever", 5);
    some_function();
    func_with_new();
    //! The constructor and destruction order is reversed. because the last object may not have dependence on first but 
    //! the first object may have dependence on the last object.
    std::cout << "End of main" << std::endl;

    return 0;
};