#include<iostream>
#include<string>

// * We are passing everything by reference but we dont want to manipulate inputs so we are making them const. This is to save time and memory.

void max_str(const std::string &str1,const std::string &str2, std::string &output){
    if(str1 > str2){
        output = str1;
    }else{
        output = str2;
    }
}

int main(){
    std::string str1 ("Apple") ;
    std::string str2 ("Banana") ;
    std::string output;

    max_str(str1, str2, output);
    std::cout << "Max string is: " << output << std::endl;
    return 0;
}
