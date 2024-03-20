#include <iostream>

/*
* When you have a functions returning different data type but doing the same thing essentially, 
* You can write multiple functions with the same name but different parameters. 
* and the compiler will decide which function to call based on the parameters passed to it. 
! This is called function overloading.
*/

int max(int a, int b){
    std::cout << "int overload called" << std::endl;
    return a > b ? a : b; }

//! You must have different parameter type for overloading to work.

double max(double a, double b){
    std::cout << "double overload called" << std::endl;
    return a > b ? a : b; }

std::string max(std::string a, std::string b){
    std::cout << "string overload called" << std::endl;
    return a > b ? a : b; }

//! These functions are called overloads of each other. 
// * Function overloading can also work on different parameter count and type.

double max(double a, int b){
    std::cout << "double int overload called" << std::endl;
    return a > b ? a : b; }
    
double max(int a, double b, int c){
    std::cout << "int double int overload called" << std::endl;
    if (a > b)
        return a > c ? a : c;
    return b > c ? b : c;
}


int main(){
    int x{3}, y{4};
    double a{3.5}, b{4.5};
    std::string c{"Apple"}, d{"Banana"};

    auto result = max (3.5, 4, 8); // ! auto will automatically detect the return type of the function. and set the variable type accordingly.
    std::cout << result << std::endl;

    return 0;
}