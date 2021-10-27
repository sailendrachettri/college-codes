#include <iostream>
using namespace std;

int main()
{
    int num;
    bool flag = true;

    cout << "Enter a number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << num << " is not prime" << endl;
    }

    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            { 
                flag = false;
                break;
            }
        }

        if (flag == true)
            cout << num << " is prime number." << endl;
        else
            cout << num << " is not a prime number." << endl;
    }

    return 0;
}