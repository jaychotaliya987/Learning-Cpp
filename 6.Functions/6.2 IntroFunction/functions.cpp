#include <iostream>

void enter_bar(unsigned int age) // ! The age can't be negative and hance Unsigned Int.
{
    if (age > 18){
        std::cout << "Enter and have fun.\n";
    }
    else{
        std::cout << "You are too young to enter.\n\n";
    }
}

int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int increment_multiply(double a, double b){

    std::cout << "Before Increment, Inside Function" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    a++;
    b++;
    std::cout << "After Increment, Inside Function" << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;
    
    return 0;
}