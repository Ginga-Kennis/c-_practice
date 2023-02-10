#include <iostream>
using namespace std;

class OldClass{
    public:
        // 後に書き換えられる可能性のある関数にはvirtualをつける
        virtual void hello();
};

void OldClass::hello(){
    cout << "This is old class" << endl;
}

class NewClass : public OldClass{
    public:
        void hello();
};

// オーバーライド
void NewClass::hello(){
    cout << "This is new class" << endl;
}



int main(){
    NewClass obj;
    obj.hello();
    obj.OldClass::hello();
    return 0;
}