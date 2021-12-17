// Date: 17 - 12 - 2021
#include <iostream>
using namespace std;

class Base
{
protected:
    int a;
private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;

    Derived d;
    // d.b; //We can't do that

    return 0;
}