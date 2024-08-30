
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void numberRootTable(double numberlimit) {
    cout << setw(15) << "Number" << setw(15)
         << "Sqrt" << setw(15) << "Cbrt"  << endl;
    for(int i = 1; i <= numberlimit; i++)
        cout << fixed << setprecision(3) << setw(15)
             << i << setw(15)<< sqrt(i) << setw(15) << cbrt(i) << endl;
}

int main() {

    numberRootTable(100);

    return 0;
}

