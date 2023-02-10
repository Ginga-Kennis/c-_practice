#include <iostream>
using namespace std;

class Student{
    public:
        static int grade;

};

int Student::grade = 6;

int main(){
    Student Ginga,Taro;
    cout << Ginga.grade << endl;
    cout << Taro.grade << endl;

    return 0;
}
