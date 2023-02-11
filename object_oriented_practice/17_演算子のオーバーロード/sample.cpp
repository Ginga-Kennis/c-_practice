#include <iostream>
using namespace std;

class NewClass{
    public:
        int num;
        // 
        NewClass operator + (NewClass x);
};

NewClass NewClass::operator+(NewClass x){
    NewClass tmp;
    tmp.num = num + x.num;
    return tmp;
}

int main(){
    NewClass obj1,obj2,obj3;
    obj1.num = 10;
    obj2.num = 20;
    obj3 = obj1.operator+(obj2);
    cout << obj3.num << endl;

    return 0;
}