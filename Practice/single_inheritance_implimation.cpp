#include <iostream>

using namespace std;

class employee
{
    string name;

public:
    employee()
    {
        cout << "Name: Sailendra" << name << endl;
    }
};

class salary :public employee{

};

int main()
{
    salary sailendra;
    return 0;
}