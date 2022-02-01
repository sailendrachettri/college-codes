// Date: 01 - 02 - 2022
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // char line[100];
    // ifstream obj("first.txt", ios::in);

    // while(!obj.eof()){
    //     obj.getline(line, 100);
    //     cout<<line<<endl;
    // }

    // obj.close();


    ifstream obj;
    obj.open("first.txt", ios::in);
    char ch;

    obj.seekg(6, ios::beg);

    while(!obj.eof()){
        ch = obj.get();
        cout<<ch;
    }
    obj.close();
    

    return 0;
}