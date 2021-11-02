#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string num = "313";
    string temp = num;
    reverse(temp.begin(), temp.end());

    if(num == temp) cout<< num<<" is palidrome number."<<endl;
    else cout<< num<<" is not a palidrome number."<<endl;

    return 0;
}