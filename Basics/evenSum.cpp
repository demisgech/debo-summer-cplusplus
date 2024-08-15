#include <iostream>

using namespace std;

int main() {
    cout << "Number: ";
    int number;
    cin >> number;

    // For loop ...
    int sum = 0;
    for(int i = 1; i <= number; i++)
        if( i % 2 == 0)
            sum += i;
    cout << "Sum = " << sum << endl;

    // while loop ...
    sum = 0;
    int i = 1;
    while(i <= number) {
        if( i % 2 == 0)
            sum += i;
        i++;
    }
    cout << "Sum = " << sum << endl;

    // Do ... while loop ...
     sum = 0;
     i = 1;
    do {
        if( i % 2 == 0)
            sum += i;
        i++;
    } while(i <= number);
    cout << "Sum = " << sum << endl;


    return 0;
}


