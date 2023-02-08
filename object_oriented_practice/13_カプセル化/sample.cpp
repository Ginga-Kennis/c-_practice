#include <iostream>
using namespace std;

// カプセル化　→　見えなくて良いとこは隠す
class Student{
    private:
        int num;
    public:
        void set_num(int x);
};

void Student::set_num(int x){
    num = x;
    cout << num << endl;
};


int main(){
    Student Ginga;
    Ginga.set_num(10);
    return 0;
}