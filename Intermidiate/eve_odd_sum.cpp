
#include <iostream>
#include "./utils/even_odd_sum.cpp"
using namespace std;

using namespace Calculating;


int main() {
    int numbers[] = {12,34,5,67,78,76,23,13,15,17,132,456,78,99,800};

    int size = sizeof(numbers)/sizeof(numbers[0]);

    int even_sum = evenSum(numbers,size);
    cout << "Even Sum = " << even_sum << endl;

    int odd_sum = oddSum(numbers,size);
    cout << "Odd Sum = " << odd_sum << endl;

    int total = sum(numbers,size);
    cout << "Sum = " << total << endl;
    return 0;
}
