// Date: 13 - 12 - 2021
#include <iostream>
using namespace std;

int count = 0;

class num
{
public:
    num()
    {
        count++;
        cout << "This is a time when constructor is called for object number " << count << endl;
    }

    ~num()
    {
        cout << "This is a time when destructor is called for object number " << count << endl;
        count--;
    }
};

int main()
{
    cout<< "We are inside main function."<<endl;

    cout<< "Creating first object n1."<<endl;
    num n1;
    {
        cout<< "Crating two more objects."<<endl;
        cout<< "Entering this block."<<endl;
        num n2, n3;
        cout<< "Execting this block."<<endl;
    }
    cout<< "Back to main."<<endl;

    return 0;
}