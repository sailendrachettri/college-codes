#include <iostream>
using namespace std;

int main()
{
    int position, data;
    int arr[5];

    cout<< "Enter the position where u want to insert data?\nRange between 1 to 5."<<endl;    
    cin>>position;

    cout<< "Enter the integer data you want to insert: "<<endl;
    cin>>data;

    arr[position] = data;

    cout<< "The value at position "<<position<<" is "<<arr[position]<<endl;


    return 0;
}