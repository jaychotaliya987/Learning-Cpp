#include <iostream>
#include <string>


template <typename T> 
const T& maximum(const T& a, const T& b) // ! We are using const reference to avoid copying the values. This saves memory and time.
{
    return (a > b) ? a : b;
}

int main(){
    int a{10}, b{20};
    double e{10.5}, f{20.5};
    std::string c{"Hello"}, d{"World"};

    auto max = maximum <int> (a, f); // * we are explicitly telling the compiler to generate the function for int type. This allows us to use two different types and convert them implicitly by the compiler.
    std::cout << max << std::endl;
}