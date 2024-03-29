#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
    int SIZE;

public:
    int findSmaller(int input1, int input2);
    float findSmaller(float input1, float input2);
    char findSmaller(char input1, char input2);
    int findSmaller(int input1, int input2, int input3);
    float findSmaller(float input1, float input2, float input3);
    char findSmaller(char input1, char input2, char input3);
    // int findSmaller(int arrayInI, SIZE);
    // float findSmaller(float arrayInF, SIZE);
    // char findSmaller(char arrayInC, SIZE);
    

};

int Compare::findSmaller(int input1, int input2)
{
    if(input1<input2)
        return input1;
    return input2;
}
float Compare::findSmaller(float input1, float input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

char Compare::findSmaller(char input1, char input2)
{
    if(input1<input2)
        return input1;
    return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
    if (input1<input2)
    {
        input2 = input1;
        return input2;
    }
    if (input2<input3)
        return input2;
    else
        return input3;
}

float Compare::findSmaller(float input1, float input2, float input3)
{
    
    if (input1<input2)
    {
        input2 = input1;
        return input2;
    }
    if (input2<input3)
        return input2;
    else
        return input3;

}

char Compare::findSmaller(char input1, char input2, char input3)
{
    
    if (input1<input2)
    {
        input2 = input1;
        return input2;
    }
    if (input2<input3)
        return input2;
    else
        return input3;

}

// int findSmaller(int arrayInI[], SIZE)
// {
    // return 0;
// }
//  float findSmaller(float arrayInF[], SIZE)
// {
    // return 0;
// }
//  char findSmaller(char arrayInC[], SIZE)
// {
    // return 0;
// }
