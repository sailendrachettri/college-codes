// Date: 14 - 02 - 2022
#include <iostream>
using namespace std;

int main()
{
    int itr = 3, user_val;

    cout<< "Enter a positive number: "<<endl;
    cin>>user_val;

    while (itr <= user_val)
    {
        if (itr%3 == 0)
        {
            if(itr%5 == 0){
                cout<< itr<<" is the multiple of three and five."<<endl;
            }
            else{
                cout<< itr<<" is the multiple of three"<<endl;
            }   
        } else if(itr%5 == 0){
            cout<< itr<<" is the multiple of five."<<endl;
        }

        itr++;
        
    }
    
    

    return 0;
}