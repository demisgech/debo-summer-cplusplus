#include <iostream>

using namespace std;
int sum(int number) {
   int sum = 0;
    for(int i = 1; i <= number; i++)
        sum += i;
    return sum;
}

void showSum(int number) {

    cout << "Sum = " << sum(number) << endl;
}
