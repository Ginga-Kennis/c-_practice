#include <iostream>
#include <array>
using namespace std;

int main(){
    array<int,5> a = {2,4,5,8,1};
    for(int i = 0;i != a.size();i++){
        cout << &a[i] << endl;
        cout << a[i] << endl;
    }
    return 0;
}
