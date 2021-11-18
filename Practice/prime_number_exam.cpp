#include <iostream>
using namespace std;

int main()
{
    for (int i = 12; i <= 50; i++)
    {
        int c = 1;

        for (int j = 2; j < i; j++) 
        {
            if(i % j == 0){
                c++;
                break;
            }
        }

        if(c == 1)
            cout<< i<<" ";
        
    }
        

    return 0;
}