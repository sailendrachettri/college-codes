#include <iostream>
using namespace std;

int main()
{
    int row;
    cout<< "Enter many row you want to print: "<<endl;
    cin>>row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<< " * ";
        }
        cout<<endl;
    }

    return 0;
}


