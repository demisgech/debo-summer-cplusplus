#include <iostream>
#include <cmath>
using namespace std;

namespace SimpleCalculator {

    double add(double x,double y) {
        return x + y;
    }

    double subtract(double x, double y) {
        return x - y;
    }

    double multipy(double x, double y) {
        return x * y;
    }

    double divide(double x,double y) {
        return x/y;
    }

    double power(double base,int exponent) {
        return pow(base,exponent);
    }

    double square(double x) {
        return x * x;
    }

    double squareRoot(double x) {
        return sqrt(x);
    }

    double cubicRoot(double x) {
        return cbrt(x);
    }

    double absolute(double x) {
        return abs(x);
    }
}

int main() {
    cout << SimpleCalculator::absolute(-12);
    return 0;
}
