#include <iomanip>
#include <iostream>

using namespace std;

void multiplicationTable(int x) {
    cout <<left<< setw(8) << "X";
    for(int i = 1; i <= x; i++)
        cout << setw(8)<< i;
    cout << endl;

    for(int i = 1; i <= x; i++) {
        cout  <<left << setw(8) << i ;
        for(int j = 1; j <= x; j++)
            cout << setw(8) << i*j;
        cout << endl;
    }
}

int main() {
    multiplicationTable(12);
    return 0;
}
