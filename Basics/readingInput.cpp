#include <iostream>

using namespace std;

int main() {
    //cout << "Enter a value: ";
    //int value;
    //cin >> value;

    //cout << "Value = " << value;

    //int x;
    //int y;
    //cout << "Enter two values: ";
    //cin >> x >>y;
    //cout << "X = " << x << ", y = " << y;

    int resistance;
    cout << "Enter Resistance: ";
    cin >> resistance;

    int current;
    cout << "Enter Current: ";
    cin >> current;

    int voltage = resistance * current; // V = R*I
    cout << "Voltage = " << voltage <<"V";

return 0;
}


