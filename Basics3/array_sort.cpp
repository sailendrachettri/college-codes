#include <iostream>
using namespace std;

// Reference: https://www.cplusplus.com/forum/beginner/215246/

int main()
{
    int arr[] = {11, 3, 4, 5, 21, 1, 34};
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
            if (arr[j] > arr[i])
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
