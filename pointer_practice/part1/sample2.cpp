#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *p;
    p = &a;

    // pointer arithmetic
    cout << p << endl;
    cout << p+1 << endl;

    return 0;

}