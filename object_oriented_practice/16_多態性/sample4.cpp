#include <iostream>
using namespace std;

class Student{
    public:
        int num;
};

class Ginga : public Student{
    public:
        Ginga(int x){
            num = x;
        };
};

class Ginga2 : public Student{
    public:
        Ginga2(int y){
            num = y;
        };
};


int main(){
    Ginga obj(10);
    Ginga2 obj2(20);

// 基本クラスのポインタで派生クラスのオブジェクトを指し示す
    Student *p[2];
    p[0] = & obj;
    p[1] = & obj2;

    for(int i = 0;i < 2;i++){
        cout << (*p[i]).num << endl;
    }
    

    return 0;
}