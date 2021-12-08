// Date: 07 - 12 - 2021
#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void display(void)
    {
        cout << "Val1: " << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val2 = a;
    }

    void display(void)
    {
        cout << "Val2: " << val2 << endl;
    }
};

void exchange(c1 &o1, c2 &o2){
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;

    oc1.indata(10);
    oc2.indata(12);

    cout<< "Before swaping: "<<endl;
    oc1.display();
    oc2.display();

    cout<< "After swaping: "<<endl;
    exchange(oc1, oc2);
    oc1.display();
    oc2.display();

    return 0;
}