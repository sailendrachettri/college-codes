#include <iostream>
using namespace std;

int main()
{
    int num = 62;
    bool flag = true;

    for (int i = 2; i <= num / 2; i++)
    {
        if(num % i == 0){
            flag = false;
            break;
        }
    }

    if(flag) cout<< num<<" is prime number."<<endl;
    else cout<< num<<" is not prime number."<<endl;
    

    return 0;
}