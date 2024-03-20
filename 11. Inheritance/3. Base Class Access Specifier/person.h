#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
#include <string_view>

class Person
{
    friend std::ostream& operator<<(std::ostream& out, const Person& person);
public:
    Person();
    Person(std::string_view fullname, int age, std::string_view address);


    //Getters
    std::string get_fullname() const{
        return fullname;
    }
    
    std::string get_address() const{
        return address;
    }

    int get_age() const{
        return age;
    }

    //Setters
    void set_fullname(std::string_view name){
        fullname = name;
    }
    void set_address(std::string_view add){
        address = add;
    }
    void set_age(int a){
        age = a;
    }


public:
    std::string fullname{"Unknown"};
protected :
    int age{0};
private:
    std::string address{"Unknown"};
    
};

#endif