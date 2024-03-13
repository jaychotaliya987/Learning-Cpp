/*Goal: understand the switch statement in C++
**This example does not use a break statement between 
**the possibilities, which means all menu items below the selected
**one are executed. 
*/


#include<iostream>

int main()
{
    char menuItem;
    std::cout<<"Choose your holiday package:\n";
    std::cout<<"L: luxury package\n S: standard package\n";
    std::cout<<"B: basic package ";
    
    std::cin>>menuItem;
    std::cout<<menuItem<<"\n";
        std::cout<<"The "<<menuItem<<" package includes:\n";
    
    switch(menuItem)
    {
        case 'L': 
        {
            std::cout<<"\tSpa Day\n";
            std::cout<<"\tSailboat Tour\n";
            break;
        }
        case 'S':
        {
            std::cout<<"\tCity Tour\n";
            std::cout<<"\tComplimentary Happy Hour\n";
            break; 
        }
        case 'B':
        {
            std::cout<<"\tAirport Transfers\n";
            std::cout<<"\tComplimentary Breakfast\n"; 
            break;
        }
        default:
            std::cout<<"Please select the L,S,B package.\n";
            break;
    }
    return 0;
}
