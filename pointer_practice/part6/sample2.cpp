#include <iostream>
using namespace std;

int calc_sum(int* a,int size)
{
    int sum = 0;
    cout << "a :" << a << endl;
    for(int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    return sum;

}

int main(){
    int arr[5] = {1,2,3,4,5};
    cout << "&arr" << arr << endl;
    int sum = calc_sum(arr,size(arr));
    cout << "answer : " << sum << endl;
    return 0;
}