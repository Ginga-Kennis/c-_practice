#include <stdio.h>

struct Student
{
    int year;
    char name[64];
    double weight;
    double height;
}Student1,Student2;



int main(void){
    // struct Student Student1 = {5,"Ginga",60,170};
    struct Student1 Student2;
    Student1.name = "Ginga";
    Student2.name = "Bob";
    printf("Year:%d , Name:%s\n",Student1.year,Student1.name);
    return 0;
    

}

