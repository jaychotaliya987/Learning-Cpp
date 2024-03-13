#include <iostream>

/*
* Sometimes the user does not want to see all the details of the function and only wants to see the input types and what it does.
* In my previous code I've even done a better job and put all the functions in a separate file and included it in the main file.
* Also the function declaration does not require variable names. But the variable types should be mentioned.
*/

int Max(int,int); // ! Declaration

int main()
{
    int a = 10, b = 20;
    std::cout << "Max : " << Max(a, b) << std::endl;
    return 0;
}   

int Max(int a, int b) // ! Definition
{
    if (a > b)
        return a;
    else
        return b;
}