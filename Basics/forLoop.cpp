#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << setw(10) << "X" << setw(10) << "X^2" << endl;
    for(int x = 0; x <= 20; x++)
        cout <<setw(10) <<  x << setw(10) << x*x << endl;

    cout << endl << endl;
    cout << setw(10) << "X" << setw(10) << "X^2" << endl;
    int x = 0;
    while(x <= 20) {
         cout <<setw(10) <<  x << setw(10) << x*x << endl;
         x++;
    }

    return 0;
}
