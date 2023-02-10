#include <iostream>
using namespace std;

// オーバーロード　=　引数を変えれば同じ名前で関数を作成可能
void double_num(int x){
    cout << x*2 << endl;
}

void double_num(double x){
    cout << x*2 << endl;
}

int main(){
    double_num(10);
    double_num(14.5);
    return 0;
}