#include<iostream>
#include<string>

// * When a function returns a value by default with a return statement, The compiler will decide to pass the variable by value or reference. Whichever is more suitable.
// * When the compiler encounters a integer as a return type it will pass the variable by value. because copying integer is not taxing on memory. Unlike strings and arrays.
// * so if you want to force the compiler to pass the variable by reference you can use & operator.

std::string max_str(const std::string str1,const std::string str2){
    std::string result = str1 + str2;
    return result;
}

int main(){
    std::string str1 ("Apple") ;
    std::string str2 ("Banana") ;
    std::string output = max_str(str1, str2);

    std::cout << "Concatenated string is: " << output << std::endl;
    return 0;

}
