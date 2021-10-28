#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout << "Enter the second number: " << endl;
    cin >> num2;

    if (num1 > 1 and num2 > 1)
    {
        for (int n = num1; n < num2; n++)
        {
            int flag = true;

            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                cout << n << " ";
        }
    } else{
        cout<< "No prime number left behind."<<endl;
    }

    return 0;
}