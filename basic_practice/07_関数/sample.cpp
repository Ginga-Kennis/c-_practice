#include <iostream>
using namespace std;

void double_number(int num){
    num = num*2;
    cout << num << "\n";
}

int main(){
    int num = 10;
    double_number(num);
    return 0;
}