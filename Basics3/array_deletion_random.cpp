#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int ind, size;
    size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nEnter the index you want to delete: ";
    cin >> ind;

    // iterative code to delete a specific position
    for (int j = ind; j < size; j++)
    {
        arr[j] = arr[j + 1];
    }
    size--; // just decrementing the size of array coz it's size reduced
    cout << "Modified array: ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}