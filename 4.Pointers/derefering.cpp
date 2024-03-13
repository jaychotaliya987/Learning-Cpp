#include<iostream>
int main()
{
    int a = 86;
    int * pointertoa = &a;
    //this next line is equivallant to replacing function to &a
    std::cout << "location of a: " << pointertoa <<"\n";
    //this is derefering to the pointer
    std::cout << "pointer is storing variable a = " << * pointertoa<<"\n";


}