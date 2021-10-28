#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    char op;

    cout<< "Enter the value of num1: "<<endl;     
    cin>>num1;

    cout<< "Enter the value of num2: "<<endl;     
    cin>>num2;

    cout<< "Enter the operator (eg: + - / * %): "<<endl;     
    cin>>op;

    switch(op){
        case '+':
            cout<< "The addition of "<<num1<<" and "<<num2<<" is "<<num1 + num2<<"."<<endl;
            break;

        case '-':
            cout<< "The subtraction of "<<num1<<" and "<<num2<<" is "<<num1 - num2<<"."<<endl;
            break;

        case '/':
            cout<< "The division of "<<num1<<" and "<<num2<<" is "<<num1  /num2<<"."<<endl;
            break;

        case '*':
            cout<< "The multiplication of "<<num1<<" and "<<num2<<" is "<<num1 * num2<<"."<<endl;
            break;

        case '%':
            cout<< "The remainder of "<<num1<<" and "<<num2<<" is "<<num1  % num2<<"."<<endl;
            break;
        
        default:
            cout<< "Something went wrong. Try again please :("<<endl;
    }



    return 0;
}
