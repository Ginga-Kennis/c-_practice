#include <iostream>
using namespace std;

class OldClass{
    protected:
        int num;
};

class NewClass : public OldClass{
    public:
        void set_num(int x);
};

void NewClass::set_num(int x){
    num = x;
    cout << num << endl;
}

int main(){
    NewClass obj;
    obj.set_num(10);
    return 0;
}