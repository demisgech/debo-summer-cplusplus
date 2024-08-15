#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    cout << setw(15) << "Number" << setw(15)
         << "Square" << setw(15) << "Cubic" << setw(15) << "Fourth" << endl;
    for(int i = 1; i <= 50; i++)
        cout <<  setw(15) << i << setw(15)<< pow(i,2)
             << setw(15) << pow(i,3) << setw(15) << pow(i,4) << endl;

    return 0;
}

