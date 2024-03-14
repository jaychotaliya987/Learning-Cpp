#include <iostream>

// * capture list allows to capture the variable from outside the lambda function. Then we can use the variable inside the lambda function.

int main()
{
    double a{3.5}, b{2.5};

    auto func = [a, b](){std::cout << a << " + " << b << " = " << a+b << std::endl;}; // ! capture a and b by value
    func();

    int c{42};

    auto func2 = [c] () {std::cout << "The value of c inside the lambda func : " << c << std::endl;}; // ! capture c by value it is copied from outside

    for (size_t i{} ; i < 5 ; i++) // ! c inside he lambda func will not change because it is copied and not the original variable
    {
        std::cout << "The value of c outside the lambda func : " << c << std::endl;
        func2();
        c++;
    }

}