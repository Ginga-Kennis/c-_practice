#include <iostream>
using namespace std;

int main(){
    int a = 1025;
    int *p;
    p = &a;
    cout << "size of integer is " << sizeof(*p) << "bytes" << endl;
    cout << "Address :" << p << " Value :" << *p << endl;

    // void pointer
    void *p0;
    p0 = p;
    cout << "Address :" << p0 << endl;


    return 0;
}