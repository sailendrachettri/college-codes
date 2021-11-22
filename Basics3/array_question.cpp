#include <iostream>
using namespace std;

int main()
{
    int position, data;
    int arr[5] = {10, 20, 30, 40, 50};

    cout<< "Old array: ";
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<< "\nEnter the position where u want to insert data?\nRange between 1 to 5."<<endl;    
    cin>>position;

    cout<< "Enter the integer data you want to insert: "<<endl;
    cin>>data;

    arr[position] = data;

    cout<< "New array: "<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< arr[i]<<" ";
    }
    




    return 0;
}