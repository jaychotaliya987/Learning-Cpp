#include <iostream>
int main()
{

    float in1, in2, in3, in4, in5;
    std::cout<<"Enter five numbers:\n";
    std::cin>>in1;
    std::cin>>in2;
    std::cin>>in3;
    std::cin>>in4;
    std::cin>>in5;

    float sum = in1 + in2 + in3 + in4 + in5;
    float avg = sum / 5;

    std::cout << sum << "\n";
    std::cout << avg << "\n";

    return 0;
}