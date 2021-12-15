// Date: 15 - 12 - 2021
#include <iostream>
using namespace std;

class Employee{
    public:
    int id;
        int salary = 1000;

        Employee(int idInp){
            id = idInp;
        }
        Employee(){}
};

class Programmer : public Employee{
    public:
        int languageCode;
        Programmer(int inpId){
            id = inpId;
            languageCode = 9;
        }

        void getData(){
            cout<< "Id "<<id<<endl;
        }
};

int main()
{
    Employee sai(101), len(102);
    cout<< "sai salary: "<<sai.salary<<endl;
    cout<< "len salary: "<<len.salary<<endl;

    Programmer sailendra(10);
    cout<< "language code "<<sailendra.languageCode<<endl;
    sailendra.getData();
    

    return 0;
}