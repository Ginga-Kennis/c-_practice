#include <iostream>
using namespace std;

int calc(int apple, int orange){
    int cost;
    cost = apple * 150 + orange * 200;
    return cost;
}

int main(){
    int apples,oranges;

    cout << "How many apples:\n";
    cin >> apples;

    cout << "How many oranges:\n";
    cin >> oranges;

    cout << calc(apples,oranges) << "\n";
    return 0;
}