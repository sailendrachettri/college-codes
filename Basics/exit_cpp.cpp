#include <iostream>
using namespace std;

void fun(){
    cout<< "This is inside function"<<endl;
    exit(0);
}

int main()
{
    cout<<"This is first line"<<endl;
    // exit(0);
    fun();
    cout<< "Second line"<<endl;

    return 0;
}