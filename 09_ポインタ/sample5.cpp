#include <stdio.h>

struct Fruits
{
    char name[128];
    int price;
    int zaiko;
};

int main(void){
    struct Fruits store = {"apple",150,50};
    struct Fruits *p;

    p = &store;
    printf("name:%s , price:%d , stock:%d\n",(*p).name,(*p).price,(*p).zaiko);
    printf("name:%s , price:%d , stock:%d\n",p->name,p->price,p->zaiko);
    printf("name:%s , price:%d , stock:%d\n",store.name,store.price,store.zaiko);
    return 0;
}