#include <iostream>
using namespace std;

class NewClass{
    public:
        // デストラクタ == main関数終了時に実行される
        NewClass();
        ~NewClass();
};


NewClass::NewClass(){
    cout << "コンストラクタです" << endl;
}

NewClass::~NewClass(){
    cout << "デストラクタです" << endl;
}


int main(){
    NewClass Ginga;
    return 0;
}



