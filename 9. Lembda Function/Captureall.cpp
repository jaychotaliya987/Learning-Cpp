#include <iostream>

// * capture list allows to capture the variable from outside the lambda function. Then we can use the variable inside the lambda function.

int main()
{
    double a{3.5}, b{2.5};

    auto func = [=](){std::cout << a << " + " << b << " = " << a+b << std::endl;}; // ! capture a and b by value
    func();

    int c{42};

    auto func2 = [=] () {std::cout << "The value of c inside the lambda func : " << c << std::endl;}; // ! captured all with (=) by value
    auto func3 = [&] () {std::cout << "The value of c inside the lambda func (with reference) : " << c << std::endl;}; // ! capture all with (&) by reference

    for (size_t i{} ; i < 5 ; i++) // ! c inside he lambda func will not change because it is copied and not the original variable
    {
        std::cout << "The value of c outside the lambda func : " << c << std::endl;
        func2();
        func3();
        c++;
    }
}