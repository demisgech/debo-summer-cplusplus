#include <iostream>

using namespace std;

/*
void increasePrice(double price //Pass by value (by copy)) {
     price *=1.2;
}*/
static void increasePrice(double &price /*Pass by referrence*/) {
     price *=1.2;
}
// static and inline
inline int increaseValue(int &x) {
    x++;
}

int main() {
    double price = 100;
    increasePrice(price);
    cout << price << endl;

    int x = 10;
    increaseValue(x);
    increaseValue(x);
    cout << x;
    return 0;
}
