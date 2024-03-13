/*Goal: practice writing functions with parameters and return values.*/

#include<iostream>
#include "Funcwreturn.hpp"

int main(){
    int m1 = 30;
    int m2 = 23;
    //int total = sum(m1,m2);
    char operation = '+';
    
    printEquation( m1,  m2,  sum(m1,m2), operation);
        
}
