#include <iostream>
using namespace std;

void feb(int n)
{
    int first = 0, second = 1, temp, range = n;

    cout << first << " " << second << " ";

    for (int i = 0; i <= range; i++)
    {
        temp = first + second;

        cout << temp << " ";
        first = second;
        second = temp;
    }
}

int main()
{
    int n;
    cout << "Enter the range: ";
    cin >> n;

    feb(n);

    return 0;
}