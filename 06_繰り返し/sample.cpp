#include <iostream>
using namespace std;

int main(){
    int i,p;
    for(i = 1; i < 6; i++){
        for (p = 1; p < 6; p++){
            cout << i << "*" << p << "=" << i*p << "\n";
        }
    }
    return 0;
}