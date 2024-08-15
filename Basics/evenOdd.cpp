#include <iostream>

using namespace std;

int main() {
    cout << "Number: ";
    int number;
    cin >> number;

    if(number % 2 == 0)
        cout << "Even!" << endl;
    else cout << "Odd!" << endl;

    // or
    if(number % 2 == 1 /* number % 2 != 0*/)
        cout << "Odd!" << endl;
    else
        cout << "Even!" << endl;
    // or
    string result = number % 2 == 0 ? "Even!" : "Odd!";
    cout << result << endl;

    return 0;
}



