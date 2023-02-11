#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void speak() = 0;
};

class Dog : public Animal{
    public:
        void speak(){
            cout << "わんわん" << endl;
        }
};

class Cat : public Animal{
    public:
        void speak(){
            cout << "ミャーミャー" << endl;
        }
};

int main(){
    Dog obj;
    Cat obj2;
    obj.speak();
    obj2.speak();
    return 0;
}