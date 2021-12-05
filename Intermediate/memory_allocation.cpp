// Date: 05 - 12 - 2021
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter = 0;

public:
    // void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter ID of your Item no. "<<counter+1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your Item: " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<< "The price of item with ID "<<itemId[i]<<"  is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    Shop obj;
    // obj.initCounter();
    obj.setPrice();
    obj.setPrice();
    obj.setPrice();
    obj.displayPrice();

    return 0;
}