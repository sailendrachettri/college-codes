// Date: 07 - 12 - 2021
#include <iostream>
using namespace std;

class Complex
{
private:
    int a, b;

public:
    friend Complex sumComplex(Complex o1, Complex o2);

    void setNumber(int num1, int num2)
    {
        a = num1;
        b = num2;
    }

    void printNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}