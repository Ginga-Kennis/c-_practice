#include <iostream>
using namespace std;

class OldClass{
    public:
        OldClass();
};

OldClass::OldClass(){
    cout << "Constructor for old class" << endl;
}

class NewClass : public OldClass{
    public:
        NewClass();
};

NewClass::NewClass(){
    cout << "Constructor for new class" << endl;
}

int main(){
    NewClass obj;
    return 0;
}