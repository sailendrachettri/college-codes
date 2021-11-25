#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int ind, data, size;
    size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\nEnter the index where you want to update a value: ";
    cin >> ind;
    cout<< "\nEnter the data you want to insert: ";
    cin>>data;

    arr[ind] = data; // inserting data

    cout << "Modified array: ";
    for (int k = 0; k < size; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}