#include "7.constructorewparams.hpp"

int main()
{
    //an instance of Patient is
    //instanciated with a name
    // The diffrence it makes is that you won't have to call setName with constructor already
    // initiated with the name
    Patient p1("Tammy Smith");  
    cout<<p1.getName();
    return 0;
}