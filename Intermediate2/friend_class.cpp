// Date: 07 - 12 - 2021
#include <iostream>
using namespace std;

// -----------------------------Method one-----------------------------

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);

};

class Complex
{
private:
    int a, b;

    // Individually make friend function
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // Aliter: make whole class as friend
    friend class Calculator;

public:

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

int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o1.printNumber();

    o2.setNumber(5, 7);
    o2.printNumber();

    Calculator calc;
    int res;
    res = calc.sumRealComplex(o1, o2);
    cout<< "The sum of the real part of o1 and o2 is "<<res<<endl;

    res = calc.sumCompComplex(o1, o2);
    cout<< "The sum of the complex part of o1 and o2 is "<<res<<endl;

    return 0;
}