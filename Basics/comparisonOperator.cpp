#include <iostream>

using namespace std;

int main() {

    // Comparison Operator
    // <  = lessthan
    // <= =
    //int x = 10;


    //cout <<boolalpha << (10 == 20);

    int x = 10;
    int y =  3; //Casting(Type conversion)
    // C-style Casting (double)x

    double z = (double)x/y;
    // C++ casting => static_cast<dobuble>()
    z = static_cast<double>(x) / y;
    cout << z;

    return 0;
}
