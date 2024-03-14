#include <iostream>
#include <string>


template <typename T> 
T maximum(T a, T b)
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