#include <iostream>
using namespace std;

// interprets as a poiner
int calc_sum(int arr[],int size)
{
    int sum = 0;
    cout << "calc_sum : " << sizeof(arr) << endl;
    cout << "calc_sum : " << &arr << endl;
    for(int i = 0;i < size;i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int total = calc_sum(arr,size(arr));
    cout << "main : " << sizeof(arr) << endl;
    cout << "main : " << &arr << endl;
    cout << total << endl;
}