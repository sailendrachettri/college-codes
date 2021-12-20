// Date: 20 - 12 - 2021
#include <iostream>
#include <math.h>
using namespace std;

/*
Questions
You have to create 2 classes:

SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.
Create another class HybridCalculator and inherit it using these 2 classes
Also, answer the questions given below.

What type of Inheritance are you using?
Which mode of Inheritance are you using?
Create an object of HybridCalculator and display results of simple and scientific calculator.
How is code reusability implemented?
*/

class SimpleCalculator
{
protected:
    int num1, num2;

public:
    void setValue(int a, int b)
    {
        num1 = a;
        num2 = b;
    }

    void displaySimple(void)
    {
        cout << "The addition of num1 is " << num1 + num2 << endl;
        cout << "The subtraction of num1 is " << num1 - num2 << endl;
        cout << "The division of num1 is " << num1 / num2 << endl;
        cout << "The multiplication of num1 is " << num1 * num2 << endl;
    }
};

class ScientificCalculator : public SimpleCalculator
{
    public:
        void diaplayScientific(void){
            cout<< "Tan of "<<num1<<" is "<<tan(num1)<<endl;
            cout<< "ATan of "<<num1<<" is "<<atan(num1)<<endl;
            cout<< "Sin of "<<num1<<" is "<<sin(num1)<<endl;
            cout<< "Cos of "<<num1<<" is "<<cos(num1)<<endl;
        }
};

class HybridCalculator : public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;
    calc.setValue(4, 3);
    calc.displaySimple();
    calc.diaplayScientific();

    return 0;
}