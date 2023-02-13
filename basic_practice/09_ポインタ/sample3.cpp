#include <stdio.h>

void keisan(int *x){
    *x = 25;
}

int main(void){
    int apple = 10;
    printf("変更前:%d\n",apple);

    keisan(&apple);
    printf("変更後:%d\n",apple);
    return 0;
}