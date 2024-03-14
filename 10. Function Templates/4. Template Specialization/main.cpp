#include <iostream>
#include <cstring>


template <typename T> 
T maximum(T a, T b)
{
    return (a > b) ? a : b;
}
// ! This is function template specialization. We are making a special case for the const char* type and when the compile encounter the const char* type it will use this function instead of the general function template.
template <>
const char* maximum<const char*>(const char* a, const char* b)
{
    return (std::strcmp(a,b)) ? a : b;
}
int main(){
    int a{10}, b{20};
    double e{10.5}, f{20.5};
    std::string c{"Hello"}, d{"World"};

    const char* g{"Hello"};
    const char* h{"World"};

    auto max = maximum(g,h);
    std::cout << max << std::endl;
}