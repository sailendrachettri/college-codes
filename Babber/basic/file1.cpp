#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<< "Enter three different values: "<<endl;
    cin>>a>>b>>c;

    if((a+b) > c){
        cout<< "It is a valid triangle."<<endl;
    } else if((b+c) > a){
        cout<< "It is a valid triangle."<<endl;
    } else if((a+c) > b){
        cout<< "It is a valid triangle."<<endl;
    } else{
        cout<< "It is not a valid triangle."<<endl;
    }
}