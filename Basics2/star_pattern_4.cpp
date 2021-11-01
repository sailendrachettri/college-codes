#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= i; j--)/* code */
        {
            cout<< " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout<< i<<" ";
        }   

        cout<<endl;     
    }
        

    return 0;
}