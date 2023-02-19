#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int *p;
    p = &a;
    cout << p << endl;
    cout << *p << endl;
    
    // dereferencing(関節参照:デリファレンス)
    *p = 10;
    cout << "after dereference" << endl;
    cout << p << endl;
    cout << a << endl;


    return 0;
}