
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << setw(15) << "Number" << setw(15)
         << "Sqrt" << setw(15) << "cbrt"  << endl;
    for(int i = 1; i <= 50; i++)
        cout << fixed << setprecision(3) << setw(15)
             << i << setw(15)<< sqrt(i) << setw(15) << cbrt(i) << endl;

    return 0;
}

