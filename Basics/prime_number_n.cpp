#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    cout << "Enter the first number: " << endl;
    cin >> num1;

    cout<< "Enter the second number: "<<endl;
    cin>>num2;

    for (int i = num1; i <= num2; i++)
    {
        if (i <= 1)
        {
            cout << "number should be greater than 1" << endl;
        }

        else
        {
            bool flag = true;
            for (int j = 2; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    flag = false;
                    break;
                }
            }

            if (flag == true)
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}