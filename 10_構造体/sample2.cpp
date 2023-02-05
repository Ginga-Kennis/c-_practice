#include <stdio.h>

struct Fruits
{
    int apple;
    int orange;
    int banana;   
};


int main(void){
    struct Fruits store1 = {100,200,300};

    printf("Apple:%d\n",store1.apple);
    printf("Orange:%d\n",store1.orange);
    printf("Banana:%d\n",store1.banana);

    return 0;



}