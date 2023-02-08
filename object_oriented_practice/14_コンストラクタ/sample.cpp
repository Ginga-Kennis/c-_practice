#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        // コンストラクタ
        NewClass(int x);
};


NewClass::NewClass(int x){
    num = x;
}

int main(){
    NewClass obj(25);
    cout << obj.num << endl;

    return 0;
}





