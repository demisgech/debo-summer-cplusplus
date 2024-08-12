#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << right <<setw(20) << "Subject" << setw(20) << "Mark" << endl
         << setw(20) << "C++" << setw(20) << 100 << endl
         << setw(20) << "Java" << setw(20) << 90 << endl
         << setw(20) << "Python" << setw(20) << 90 << endl;

    return 0;
}
