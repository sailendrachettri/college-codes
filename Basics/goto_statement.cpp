#include <iostream>

using namespace std;

int main()
{
    cout<<"First line"<<endl;

    l1:
        cout<<"inside label"<<endl;
        goto end;
    
    cout<<"Second line"<<endl;
    goto l1;
    end:
        cout<<"label ends here"<<endl;
    

    return 0;
}