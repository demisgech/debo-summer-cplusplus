#include <iostream>

using namespace std;
void greet(string name) {
    cout << "Hello " << name << endl;
}
// Function Overloading
// Function Signature = name + ( type and number of parameters)
string greet(string title, string name) {
    cout << "Hello " << title << " " << name << endl;
    return title;
}

double xPower(double base, int exponent) {
    double xPow = 1;

    for(int i = 1; i <= exponent; i++)
        xPow *=base;
    return xPow;
}


double xPower(double x) {
    double xPow = 1;
    for(int i = 1; i <= 2; i++)
        xPow *= x;
    return xPow;
}


int main() {
    //greet("Demis");
    //greet("Mr.","Demis");

    double square = xPower(4);
    cout << "Square = " << square << endl;

    double exponentiation = xPower(10,4);
    cout << "Exponentiation = " << exponentiation << endl;

    //static int y;
    //cout << y;
   /*
    // Storage variable
    auto int x = 10;
    static int y = 10;
    extern int z = 20;
    register int m = 20;
    // Constant and volatile
    const int pi = 3.14;
    volatile int rate = 4.5;
    */
    return 0;
}
