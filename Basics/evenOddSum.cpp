#include <iostream>
using namespace std;

double evenMultiplication(int numberLimit) {
   long double product = 1;
    for (int i = 1; i <= numberLimit; i++){
        if (i % 2 == 0)
            product *= i;
    }
    return product;
}

double oddMultiplication(int numberLimit) {
   long double product = 1;
    for (int i = 1; i <= numberLimit; i++){
        if (i % 2 != 0)
            product *= i;
    }
    return product;
}

double evenSum(int numberLimit) {
   long double sum = 0;
    for (int i = 1; i <= numberLimit; i++){
        if (i % 2 == 0)
            product += i;
    }
    return product;
}

double oddSum(int numberLimit) {
   long double sum = 0;
    for (int i = 1; i <= numberLimit; i++){
        if (i % 2 == 0)
            product += i;
    }
    return product;
}


int main() {
    double product = evenMultiplication(100);
    cout << "Product = " << product << endl;

    return 0;
}
