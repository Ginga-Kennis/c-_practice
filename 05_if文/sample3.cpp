#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a number:";
    cin >> num;
    switch(num){
        case 1:
            cout << "Ginga \n";
            break;
        case 2:
            cout << "Ron \n";
            break;
        default:
            cout << "Someone else \n";
            break;
    }
    return 0;
}