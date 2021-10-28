#include <iostream>
using namespace std;

int main()
{
    int sub1, sub2, per;

    cout << "Enter the marks for subjet1: " << endl;
    cin >> sub1;

    cout << "Enter the marks for subjet2: " << endl;
    cin >> sub2;

    per = (sub1 + sub2) / 2;

    if (sub1 <= 100 and sub2 <= 100)
    {
        if (per > 90 and per <= 100)
            cout << "You got A." << endl;

        else if (per > 80 and per <= 90)
            cout << "You got B." << endl;

        else if (per > 70 and per <= 80)
            cout << "You got C." << endl;

        else if (per > 60 and per <= 70)
            cout << "You got D." << endl;

        else if (per > 50 and per <= 60)
            cout << "Yo got E." << endl;

        else if (per > 40 and per <= 50)
            cout << "You got F." << endl;

        else if (per < 40)
            cout << "You failed." << endl;

        else
        {
            cout << "Something went wrong. Please try agin later :(" << endl;
        }
    }
    else 
        cout<< "Subnjet marks should be less than equals to 100."<<endl;

    return 0;
}