// 前処理（コンパイル時に一番はじめに行われる）
// #include は右側にあるファイルを読み込むの意味
// <iostream> →　<input output stream> 基本的な入出力の機能
// stream →　異なる種類の外部装置に対して入出力を同じにできる
#include <iostream>

int main(){
    // cout:console out(出力)
    // endl:end line(改行)
    std::cout << "Hello World" << std::endl;
    std::cout << "Hello World \n";
    return 0;
}

