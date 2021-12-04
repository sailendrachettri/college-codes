// Date: 04 - 12 - 2021
// Here we make a private function and used that function in another function so no other can've access of that function

#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;
    void ch_bin(void);

public:
    void read(void);
    void ones_complement(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number: " << endl;
    cin >> s;
}

void binary ::ch_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_complement(void){
    ch_bin(); // member of nesting function
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i) = '1';
        } else {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<< s.at(i)<<" ";
    }
}

int main()
{
    binary b;
    b.read();
    b.ones_complement();
    b.display();

    return 0;
}