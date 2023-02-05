#include <stdio.h>

void keisan(int n1,int n2,int *sum,int *diff){
    *sum = n1 + n2;
    *diff = n1 - n2;
}

int main(void){
    int num1 = 30;
    int num2 = 10;
    int sum = 0;
    int diff = 0;
    keisan(num1,num2,&sum,&diff);
    printf("sum:%d , diff:%d\n",sum,diff);
    return 0;
}