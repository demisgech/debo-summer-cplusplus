#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    string result = number % 2 == 1 ? "Odd":"Even";
    cout << result << endl;

    if(number % 2 == 0) {
            cout << "even" << endl;
            cout << "Done!" << endl;
    }


    return 0;
}
