#include <iostream>
using namespace std;

int main()
{
    // 1 Dimensional array
    // int arr[4] = {10, 23, 43, 56};

    // for (int i = 0; i < 4; i++)
    // {
    //     cout<< arr[i]<<" ";
    // }

    // 2 Dimensional array
    int arr[3][3] = { {10, 20, 30},
                      {40, 50, 60},
                      {70, 80, 90}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}