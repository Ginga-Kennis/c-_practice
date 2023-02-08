#include <iostream>
using namespace std;

class Student{
    // 外から読み書きできる部分(public)
    public:
        int num;
        int year;
        void show();
};

void Student::show(){
    cout << "番号" << num << "\n";
    cout << "年齢" << year << "\n";
}

int main(){
    int i;
    Student array[3];
    array[0] = {10,15};
    array[1] = {11,16};
    array[2] = {12,17};


    for(i = 0;i < 3;i++){
        array[i].show();
    }

    return 0;
}