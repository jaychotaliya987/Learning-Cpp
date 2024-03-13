/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include<iostream>

int main(){
    float avg;
    int inp,sum=0,min=100,max=0;

    for (int i = 0; i < 4; i++) {
        
        std::cout << "enter an integer :";
        std::scanf("%d",&inp);
        sum = sum + inp;
        if(inp>max){
            max = inp;
        }
        if(inp<min){
            min = inp;
        }

    }

    std::cout << "the average is :" << sum/15 << '\n';
    std::cout << "the Min is :" << min <<'\n';
    std::cout << "the Max is :" << max <<'\n';   

}