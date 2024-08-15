#include <iostream>

using namespace std;

int main() {
    double price[] = {12.2,14.1,45,67.5,67.5,78};
    int size = sizeof(price) / sizeof(price[0]);

    double sum = 0;
    for(int i = 0; i < size; i++)
        sum += price[i];
    cout << "Sum = " << sum << endl;

    // Range based for loop

    sum = 0;
    for(int p : price)
        sum += p;
    cout << "Sum = " << sum << endl;

    return 0;
}



