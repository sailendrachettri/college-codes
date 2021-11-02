#include <iostream>
using namespace std;

int main()
{
    int choice;
    cout << "Enter your choice:" << endl;
    cout << "1: for prime number." << endl;
    cout << "2: for factorial." << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int num = 10;
        bool flag = true;
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << num << " is prime number." << endl;
        }
        else
        {
            cout << num << " is not prime number." << endl;
        }
        break;
    }
    case 2:
    {
        int num2 = 4;
        int fac = 1;

        for (int j = 1; j <= num2; j++)
        {
            fac = fac * j;
        }

        cout << "The factorial of " << num2 << " is " << fac << endl;
        break;
    }
     
    default:
        cout << "Choice should be 1 or 2 :-)" << endl;
    }

    return 0;
}