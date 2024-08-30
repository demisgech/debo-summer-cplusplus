#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    /*
    cout << "Hello world" << endl;

    string word = "Hello";
    for(auto w: word)
        cout << w<< endl;

    int numbers[] = {5,4,3,2,1};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    for(int i = 0; i < size; i++) {
        for(int j = 0; j < numbers[i]; j++)
            cout << "@ ";
        cout << endl;
    }
*/
    const double radian = 57.295779513082320876798154814105;

    cout << setw(10) << "x"
         << setw(10) << "cos(x)"
         << setw(10) << "sin(x)"
         << setw(10) <<"tan(x)"
         << setw(10) << "sec(x)"
         << setw(10) << "csc(x)"
         << setw(10) <<"cot(x)" << endl;
    for(int i = 0; i <= 360; i++) {
        double x = i/radian;
        cout << fixed<< setprecision(4) <<setw(10) << i
             << setw(10) << cos(x)
             << setw(10) << sin(x)
             << setw(10) << (sin(x)/cos(x))
             << setw(10) << (1/cos(x))
             << setw(10) << (1/sin(x))
             << setw(10) << (cos(x)/sin(x)) << endl;
    }

        cout << setw(10) << "x"
         << setw(10) << "cosh(x)"
         << setw(10) << "sinh(x)"
         << setw(10) <<"tanh(x)"
         << setw(10) << "sech(x)"
         << setw(10) << "csch(x)"
         << setw(10) <<"coth(x)" << endl;
    for(int i = 0; i <= 10; i++) {
        cout <<setw(10) << i<< fixed<< setprecision(4)
             << setw(10) << cosh(i)
             << setw(10) << sinh(i)
             << setw(10) << (tanh(i))
             << setw(10) << (1/cosh(i))
             << setw(10) << (1/sinh(i))
             << setw(10) << (cosh(i)/sinh(i)) << endl;
    }


    return 0;
}
