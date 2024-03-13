#include<iostream>

using namespace std;

class Cat {

    string name;
    string breed;
    int age;

public:
    void setname(string namein);
    void setbreed(string breedin);
    void setage(int agein);
    string getbreed();
    string getname();
    int getage();
    void printinfo();

};

void Cat::setname(string namein)
{
    name = namein;
}

void Cat::setage(int agein)
{
    age = agein;
}

void Cat::setbreed(string breedin)
{
    breed = breedin;
}

string Cat::getbreed()
{
    return breed;
}

string Cat::getname()
{
    return name;
}

int Cat::getage()
{
    return age;
}

void Cat::printinfo()
{
    cout << name <<" "<< age <<" "<< breed <<'\n';
}