#include <iostream>
using namespace std;

int main()
{
    int n = 15;   

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if(j >= n-i and j <= n+i) cout<< "*";
            else cout<< " ";
        }
        cout<<endl;
        
    }
    

    return 0;
}