#include <iostream>
using namespace std;

int main()
{
    int arr[] = {111, 10, 30, 21, 3};
    int max_arr = arr[0], min_arr = arr[0];
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++){
        if(arr[i] < min_arr){
            min_arr = arr[i];
        }
    }

    for(int i = 0; i < size; i++){
        if(arr[i] > max_arr){
            max_arr = arr[i];
        }
    }

    cout<< "Minimum value is: "<<min_arr<<endl;
    cout<< "Maximum value is: "<<max_arr<<endl;


    return 0;
}