#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, range = 8, temp;

    // cout<<"Enter the range: ";
    // cin>>num;

    cout << a << " " << b << " ";
    for (int i = 2; i <= range; i++)
    {
        temp = a + b;

        cout << temp << " ";
        a = b;
        b = temp;
    }
    cout << endl;

    return 0;
}