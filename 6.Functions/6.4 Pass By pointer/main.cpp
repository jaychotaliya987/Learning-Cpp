#include<iostream>

/*
* In this code we are passing the pointer variable to manipulate the value of the variable.
* This code have a down side because the variable being manipulated is stored in the stack 
* and will be destroyed by the stack after the compiler exits the function.
* If the value at the memory address is not over written then we are lucky but otherwise we will get a garbage value.
*/

void say_age(int *);

int main (){
    int age = 10;
    std::cout << "Age before call : " << age << std::endl;
    say_age(&age);
    std::cout << "Age after call: " << age << std::endl;
    return 0;

}

void say_age(int *age){
    ++(*age);
    std::cout << "Age inside the function after increment: " << *age << std::endl;
}