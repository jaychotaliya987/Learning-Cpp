/*Goal: practice creating and using a class
** Use the class 'Dog' to create to 
** instances of the class, dog1 and dog2.
** Assign dog1 the name: Trixie
** Assign dog2 the name: Kali
** Assign dog1 the license #1234
** Assign dog2 the license #5678
** Print the information for each dog.
*/


#include"2.classesquiz.hpp"


int main()
{
    Dog dog1;
    Dog dog2; 

    dog1.setName("Trixie");
    dog2.setName("Kali");
    dog1.setLicenseNumber(1234);
    dog2.setLicenseNumber(5678);

    cout << "Where is the name Trixie?" << endl;
    dog1.printInfo();
    cout << "Where is the name Kali?" << endl;
    dog2.printInfo();

    return 0;
}