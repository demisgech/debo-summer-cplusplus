#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n) {
    if(n < 0) return n;
    if(n == 1 || n == 0) return 1;
    return n*factorial(n - 1);
}

void showFactorial(int n) {
    cout << setw(10) <<"n" << setw(10) << "n!" << endl;
    for(int i = 1; i <= n; i++)
        cout <<setw(10) << i << setw(10) <<  factorial(i) << endl;
}
