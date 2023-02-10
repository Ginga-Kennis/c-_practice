#include <iostream>
using namespace std;

class OldClass{
    public:
        OldClass();
        OldClass(int x);
};

OldClass::OldClass(){
    cout << "Constructor for Old class" << endl;
}

OldClass::OldClass(int x){
    cout << x << " Constructor for Old class with argument" << endl;
}

class NewClass : public OldClass{
    public:
        NewClass();
};

// 親クラスのコンストラクタを引数をつけることで指定できる
NewClass::NewClass() : OldClass(10){
    cout << "Constructor for new class" << endl;
}

int main(){
    NewClass obj;
    return 0;
}