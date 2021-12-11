// Date: 11 - 12 - 2021
#include <iostream>
using namespace std;

class BankDeposite
{
    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r); // interest rate in floating value 0.04
    BankDeposite(int p, int y, int r);   // interest rate in percentage 10%, 12%
    void show();
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}
BankDeposite ::BankDeposite(int p, int y, int R)
{
    principal = p;
    years = y;
    interestRate = float(R) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposite::show()
{
    cout << endl
         << "Principal amount was " << principal << endl
         << "Return value after " << years
         << " year(s) is " << returnValue << endl;
}

int main()
{
    BankDeposite bd1, bd2, bd3;

    int p, y;
    float r;
    int R;

    cout << endl
         << "Enter the value of p y and r: " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    cout << endl
         << "Enter the value of p y and R: " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposite(p, y, R);
    bd2.show();

    return 0;
}