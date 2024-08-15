#include <cmath>
#include <iostream>

using namespace std;

double power(double base,int exponent) {
    double basePower = pow(base,exponent);
    return basePower;
}

double xPower(double base, int exponent) {
    double xPow = 1;

    for(int i = 1; i <= exponent; i++)
        xPow *=base;
    return xPow;
}



int main() {
    double bPower= power(10.1,3);
    cout << "X^2 = " <<bPower << endl;

    double xPow = xPower(10.1,3);
    cout << "X^2 = " << xPow << endl;
    return 0;
}
