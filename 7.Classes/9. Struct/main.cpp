#include <iostream>
#include <string>

/*
* Structs are used to define a data structure. Basically structs are just class with default public members.
* but a class have default private members. This is the only difference between a struct and a class. We can use them interchangeably otherwise.
* we can force the struct or class to posses any access modifier.
* For general purpose, we use struct to define a data structure. and constants.
*/

struct Person {
    std::string name;
    int age;
    double weight;
};

class Student {

    std::string name;
    int age;
    double weight;
};


int main () {
    Person person;
    person.name = "John";
    person.age = 25;
    person.weight = 75.5;

    Student student;
    // student.name = "John"; // Error: 'name' is a private member of 'Student'
    // student.age = 25; // Error: 'age' is a private member of 'Student'
    // student.weight = 75.5; // Error: 'weight' is a private member of 'Student'

    return 0;
}