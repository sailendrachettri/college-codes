#include <iostream.h>
#include <stdio.h>
#include <conio.h>

struct student
{
    int roll_no;
    char name[100];

    void inp_info()
    {
        cout << "Enter the roll number: ";
        cin >> roll_no;
        cout << "Enter the Name: ";
        gets(name); 
    };

    void display()
    {
        cout << "\nRoll number: " << roll_no << endl;
        cout << "Name: " << name <<endl<<endl;
    };
};

void main()
{
    clrscr();

    student s;

    for (int i = 0; i < 5; i++)
    {
        s.inp_info();
        s.display();
    }

    getch();
}