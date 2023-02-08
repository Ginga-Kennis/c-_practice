#include <iostream>
using namespace std;

struct Student{
    int year;
    int num;
};

int main(){
    struct Student Ginga = {5,10};
    cout << "Year:" << Ginga.year << " , Number:" << Ginga.num << "\n";
    return 0;
}

