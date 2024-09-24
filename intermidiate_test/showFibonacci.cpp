#include <iostream>

using namespace std;

int fibonacci(int n) {
    return  (n <= 2 ? 1: fibonacci(n - 1) + fibonacci(n - 2));
}

void showFibonacci(int numberLimit) {
    for(int i = 1; i <= numberLimit; i++)
        cout << fibonacci(i) << ", ";
}
