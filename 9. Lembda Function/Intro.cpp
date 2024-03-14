#include <iostream>

/* 
! Lambda Function signature :
*           [capture clause] (parameters) -> return-type 
!                       {function body};        
*/

int main()
{
    // ! Calling a lambda function with a function name. We can use the function name to call the lambda function many times.

    auto result = [](double a, double b){std::cout << (a+b) << std::endl;}; // This is a lambda function
    result(12.1,5.7);

    // ! we can also put Lambda function directly in the print statement with return statement.

    std::cout << [](double a, double b){return (a+b);}(12.1,5.7) << std::endl;

    // ! We can also call the function just as it is.
    [](double a, double b){std::cout << (a+b) << std::endl;}(12.1,5.7);

    // ! explicitly specifying the return type of the lambda function.
    
    auto var = [](double a, double b) -> int {return (a+b);};
    std::cout << "using a function handle : " << var(12.1,5.7) << std::endl;
    std::cout << [](double a, double b) -> int {return (a+b);}(12.1,5.7);
}