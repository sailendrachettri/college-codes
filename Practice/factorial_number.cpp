#include <iostream>
using namespace std;

int fec(int n){
    if(n <= 1) return 1;
    return n*fec(n-1);
}

int main()
{   
    int n = 4;
    // fec(n);
    cout<< fec(n)<<endl;

    return 0;
}