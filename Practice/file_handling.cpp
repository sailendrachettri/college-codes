// Date: 27 - 01 - 2022
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    // ofstream obj("first.txt", ios::out);
    // obj<<"This is meeh"<<endl;
    // obj<<"here iam"<<endl;
    // obj.close();

    char name[20] = "Hello Hlo";
    ofstream p;

    p.open("first2.txt",ios::out);
    int len = strlen(name);

    for(int i = 0; i < len; i++){
        p.put(name[i]);
    }

    p.close();
    
    

    return 0;
}