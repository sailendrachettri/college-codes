// Date: 10 - 12 - 2021
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // constructor overloading
    Complex(int x){
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c(4, 3);
    c.printNumber();

    Complex c1(4);
    c1.printNumber();

    return 0;
}