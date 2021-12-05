// Date: 05 - 12 - 2021
#include <iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setData(void);
        void getData(void);
        static void getCount(void);
};

void Employee ::setData(void){
    cout<< "Enter the Id of the employee: ";
    cin>>id;
    count++;
}

void Employee ::getData(void){
    cout<< "The id of the employee is "<<id<<" and this is employee no. "<<count<<endl;
}

void Employee::getCount(void){
    // cout<< "Id "<<id<<endl; // Cannot do this coz id is not static variable
    cout<< "The value of count is "<<count<<endl;
}

int Employee ::count; // default value is 0

int main()
{
    Employee sailendra, blessed, diwas;
    diwas.setData();
    diwas.getData();
    Employee::getCount();

    blessed.setData();
    blessed.getData();
    Employee::getCount();

    sailendra.setData();
    sailendra.getData();
    Employee::getCount();
    


    return 0;
}