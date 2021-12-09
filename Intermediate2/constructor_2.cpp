// Date: 09 - 12 - 2021
#include <iostream>
using namespace std;

class Complex
{
public:
    int a, b;
    Complex(int, int);

    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Complex c(4, 6); // Implicit call
    c.printNumber();

    Complex c1 = Complex(10, 20); // Explicite call
    c1.printNumber();
    return 0;
}