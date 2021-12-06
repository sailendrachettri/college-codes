// Date: 06 - 12 - 2021
#include <iostream>
using namespace std;

int sum(int num1){
    return num1 + 10;
}

int sum(int num1, int num2){
    return num1 + num2;
}

int sum(int num1, int num2, int num3){
    return num1 + num2 + num3;
}

int main()
{
    cout<< "Function with one parameter: "<<sum(10)<<endl;
    cout<< "Function with two parameter: "<<sum(10, 20)<<endl;
    cout<< "Function with three parameter: "<<sum(10, 20, 30)<<endl;

    return 0;
}