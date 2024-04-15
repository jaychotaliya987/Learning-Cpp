#include <iostream>
#include <cmath>

int main()
{
    int a=0,b = 0;
    int post=0, pre = 0;
    
    std::cout << "initial values:" << '\n';
    std::cout << "\tpostfix = " << post;
    std::cout << "\tprefix = " << pre<< '\n';

    post = a++; //increment a but store the old value of variable in post
    pre = ++b;  // Increment the value of b and store the new value of b in pre
    
    std::cout << "after one Post and Pre fix: " << '\n';
    std::cout << "\tpostfix = " << post;
    std::cout << "\tprefix = " << pre<< '\n';

    post = a++; //increment a but store the old value of variable in post
    pre = ++b;  // Increment the value of b and store the new value of b in pre

    std::cout << "after two Post and Pre fix:" << '\n';
    std::cout << "\tpostfix = " << post;
    std::cout << "\tprefix = " << pre<< '\n';
}