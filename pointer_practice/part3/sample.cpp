#include <iostream>
using namespace std;

int main(){
    int x = 5;
    int* p = &x;
    int** q = &p;
    int*** r = &q;
    cout << "x " << x << " Address " << &x << endl;
    *p = 6;
    cout << "x " << x << " Address " << &x << endl;
    cout << "p " << p << " Address " << &p << endl; 
    cout << "q " << q << " Address " << &q << endl; 
    cout << "r " << r << " Address " << &r << endl; 


    return 0;
}