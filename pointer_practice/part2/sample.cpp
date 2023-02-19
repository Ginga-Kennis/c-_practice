#include <iostream>
using namespace std;

int main(){
    int a = 1025;
    int *p;
    p = &a;
    cout << "size of integer is " << sizeof(*p) << "bytes" << endl;
    cout << "Address :" << p << " Value :" << *p << endl;
    cout << "Address :" << p+1 << " Value :" << *(p+1) << endl;

    char *p0;
    p0 = (char*)p;
    cout << typeid(p0).name()<< endl;
    cout << "size of char is " << sizeof(*p0) << "bytes" << endl;
    cout << "Address :" << p0 << " Value :" << *p0 << endl;
    cout << "Address :" << p0+1 << " Value :" << *(p0+1) << endl;


    return 0;
}