#include <iostream>
using namespace std;

int main()
{
    int val, fact = 1;

    cout<<"Enter the number to calculate factorial: ";
    cin>>val;

    for (int i = 1; i <= val; i++)
    {
        fact = fact * i;
    }

    cout<< "The factorial of "<<val<<" is "<<fact<<endl;
    

    return 0;
}