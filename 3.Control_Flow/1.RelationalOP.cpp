#include<iostream>
#include<string>

int main()
{
    //instead of printing 0 and 1, create an array where 
    //0 = False, 1 = True
    std::string TorF[] = {"False", "True"};
    
    int a = 100;
    int b = 33;
    int c = 33;
    
    //Print out the string values of each relational operation
    std::cout<<"a < b is "<<TorF[a<b];
    std::cout<<"\na > b is "<<TorF[a>b];
    std::cout<<"\na != b is "<<TorF[a!=b];
    std::cout<<"\nc >= b is "<<TorF[c>=b];
    std::cout<<"\nc <= b is "<<TorF[c<=b];    
    return 0;
       
    
    // We can also check if one value is equal to other and if they are
    // equal print 1(true) otherwise 0(false)

    std::cout << "\n a = b is  " << TorF[!(a != b)];
    // !before the operation acts as the not get and invert the value so 
    //this is now acting as the equality check. before it was running not equal check.
    
    std::cout << "\n " << TorF[a==b];
    // This is also possible but above method will also work if you explicitly want to
    // print 0 or 1
    return 0;
}

