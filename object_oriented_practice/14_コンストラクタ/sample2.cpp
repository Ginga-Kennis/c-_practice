#include <iostream>
using namespace std;

class Student{
    public:
        int num;
        // コンストラクタ
        Student();
};


Student::Student(){
    num = 10;

}

int main(){
    Student Ginga;
    cout << Ginga.num << endl;
    return 0;
}