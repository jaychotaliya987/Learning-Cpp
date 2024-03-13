#include <iostream>
#include "includefile.cpp"

// ! Variable : declaration and definition

double weight {}; // ! {} is a default initializer. for double it is 0.0

// * double weight {}; Will result in error if we declare the same variable again, even in the different file.

double add(double a, double b) // * We can not use the same function definition as well
{
    return a + b;
}

int main(){

    double x = 5.0;
    double y = 6.0;
    double weight = add(x, y); 

    std::cout << weight << std::endl;
}