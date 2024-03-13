#include <iostream>
#include "functions.cpp"

int main()
{
    unsigned int age{30};
    double h{5.5};
    double i{10.5};
    
    // ! Calling Enter Bar Function
    std::cout << "FUNCTION - Enter Bar\n\n";
    enter_bar(age); // ! The age here is a argument or parameter.
    enter_bar(15); // ! same function can be called multiple times.
    
    // ! Calling Max Function
    std::cout << "FUNCTION - Max\n";
    std::cout << max(10, 20) << std::endl;
    std::cout << std::endl;

    // ! Calling Increment Multiply Function

    std::cout << "FUNCTION - Increment Multiply\n\n";

    std::cout << "Before Increment, Inside Main" << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;
    increment_multiply(h, i);
    std::cout << "After Increment, Inside Main" << std::endl;
    std::cout << "h : " << h << std::endl;
    std::cout << "i : " << i << std::endl;

    /*
    * Function only increments the value of a and b inside the function and not in the main function. Inside the function
    * You are only manipulating the function parameters and not the actual variables.
    */
}