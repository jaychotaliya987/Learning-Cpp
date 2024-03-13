void calculate(float input1,float input2, float &result);
void printEquation(float input1,float input2, char operation,float result);


void calculate(float input1, float input2, float &result){
    result = input1 * input2;

}

void printEquation(float input1,float input2, char operation,float result){
    std::cout<<input1<<" "<<operation<<" "<<input2<<" = " << result;
}