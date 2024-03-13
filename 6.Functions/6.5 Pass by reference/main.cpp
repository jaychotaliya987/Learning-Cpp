#include <iostream>

/*
* In this code we are passing the reference of the variable to manipulate the value of the variable.
* Passing by reference simply means that you are giving right to the programme that it can manipulate 
* the value of the variable
* This will eliminate the issue with the passing a pointer and use the variable directly without copying
* and avoids using nasty pointer syntax.
*/

void say_age(int &);

int main (){
    int age = 10;
    std::cout << "Age before call : " << age << std::endl;
    say_age(age);
    std::cout << "Age after call: " << age << std::endl;
    return 0;

}

void say_age(int &age){
    ++age;
    std::cout << "Age inside the function after increment: " << age << std::endl;
}