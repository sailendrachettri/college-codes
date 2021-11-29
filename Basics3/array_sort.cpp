#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 1, 2, 4, 15};
    int temp;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before: ";
    for (int a = 0; a < size; a++)
    {
        cout << arr[a] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nAfter: ";
    for (int b = 0; b < size; b++)
    {
        cout << arr[b] << " ";
    }

    return 0;
}
