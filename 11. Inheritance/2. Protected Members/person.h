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
    Person(std::string_view first_name_param, std::string_view last_name_param);
    
    //Getters
    std::string get_first_name() const{
        return first_name;
    }
    
    std::string get_last_name() const{
        return last_name;
    }
	
    //Setters
    void set_first_name(std::string_view fn){
        first_name = fn;
    }
    void set_last_name(std::string_view ln){
        last_name = ln;
    }
protected : // * Now we can use the members in the derived class because they are protected. They will not be accessible from outside the class.
            // * This will only accessible from the derived class with public inheritance.

    std::string first_name{"Mysterious"};
    std::string last_name{"Person"};
};

#endif