#include <iostream>
using namespace std;

class Student{
    private:
        int num;
    public:
        void set_num(int x);
        int get_num();
};

void Student::set_num(int x){
    if(x > 0 && x < 100){
        num = x;
    }
    else{
        num = 0;
    }

}

int Student::get_num(){
    return num;
}

int main(){
    Student Ginga;
    Ginga.set_num(100);
    int result = Ginga.get_num();
    cout << result << endl;
    return 0;
}