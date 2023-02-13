#include <stdio.h>

int main(void){
    int apple = 10;
    // ポインタを宣言
    int *p;
    // appleのアドレスをポインタに代入
    p = &apple;
    printf("%d:%p\n",*p,p);
    return 0;
}

