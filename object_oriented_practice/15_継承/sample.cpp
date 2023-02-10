#include <iostream>
using namespace std;

class OldClass{
    public:
        int num;
        void show();
};

void OldClass::show(){
    cout << num << endl;
}

class NewClass : public OldClass{
    public:
        int num2;
};

int main(){
    NewClass obj;
    obj.num = 10;
    obj.num2 = 30;
    obj.show();
    cout << obj.num2 << endl;
    return 0;
}