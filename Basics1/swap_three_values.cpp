#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout<< "Enter the value of num1: "<<endl;
    cin>>num1;

    cout<< "Enter the value of num2: "<<endl;
    cin>>num2;

    cout<< "Enter the value of num3: "<<endl;
    cin>>num3;

    cout<< "Initial value of num1 is "<<num1<<endl;
    cout<< "Initial value of num2 is "<<num2<<endl;
    cout<< "Initial value of num3 is "<<num3<<endl;

    num1 = num1 + num2 + num3;
    
    num2 = num1 - (num2 + num3);
    num3 = num1 - (num2 + num3);
    num1 = num1 - (num2 + num3);

    cout<< "After swaping value of num1 is "<<num1<<endl;
    cout<< "After swaping value of num2 is "<<num2<<endl;
    cout<< "After swaping value of num3 is "<<num3<<endl;
    

    return 0;
}
