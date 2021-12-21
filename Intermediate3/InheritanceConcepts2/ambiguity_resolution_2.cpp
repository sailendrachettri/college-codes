// Date: 21 - 12 - 2021
#include <iostream>
using namespace std;

class B
{
public:
    void say()
    {
        cout << "Hello world!" << endl;
    }
};

class D: public B
{
public:
    void say()
    {
        cout << "Namaskar World!!" << endl;
    }
};

int main()
{
    D d;
    d.say();
    return 0;
}