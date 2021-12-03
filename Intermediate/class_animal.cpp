// Date: 03 - 12 - 2021
#include <iostream>
using namespace std;

class Animal{
    private:
        // private members of the class
        string animal_name;
        int animal_age;

    public:
        // Function declaration
        void setData(string name, int age);
        void getData();
};

// Function defination
void Animal ::setData(string name, int age){
    animal_name = name;
    animal_age = age;
}

void Animal ::getData(){
    cout<< "Animal's name is "<<animal_name<<" and age is "<<animal_age<<endl;
}

int main()
{
    Animal cat, mouse; // objects of the Animal class

    // This function sets the data - we cannot directly set data coz its a private meneber
    cat.setData("Tom", 12);
    mouse.setData("jerry", 10);

    // This function prints the data
    cat.getData();
    mouse.getData();

    return 0;
}