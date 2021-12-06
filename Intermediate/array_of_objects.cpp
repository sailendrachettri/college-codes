// Date: 06 - 12 - 2021
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 109;

        cout << "Enter the ID of the employee: ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "The ID of this employee is " << id << endl<<endl;
    }
};

int main()
{
    Employee fb[4];

    for (int i = 0; i < 5; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    

    return 0;
}