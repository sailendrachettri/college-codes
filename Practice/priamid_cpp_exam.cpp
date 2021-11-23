#include <iostream>
using namespace std;

int main()
{
       int num = 5;

       for (int i = 1; i <= num; i += 2)
       {
              for (int j = num; j >= i; j -= 2)
              {
                     cout << " ";
              }

              for (int k = 1; k <= i; k++)
              {
                     cout << "*";
              }
              cout << endl;
       }

       return 0;
}
