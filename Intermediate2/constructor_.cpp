// Date: 09 - 12 - 2021
#include <iostream>
using namespace std;

class Complex
{
public:
    int a, b;
    Complex(void);

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void)
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printNumber();
    return 0;
}