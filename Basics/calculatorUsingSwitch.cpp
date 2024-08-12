#include <iostream>

using namespace std;

int main() {

    cout << "First: ";
    double first;
    cin >> first;

    double second;
    cout << "Second: ";
    cin >> second;

    cout << "Operator: ";
    char op;
    cin >> op;

    switch(op) {
    case '+':
        cout << "Sum = " << first + second << endl;
         break;
    case '-':
        cout << "Difference = " << first - second << endl;
        break;
    case '*':
        cout << "Product = " << first * second << endl;
        break;
    case '/':
        cout << "Division = " << first / second << endl;
    case '%':
        // C - Style casting
        //cout << "Remainder = " << ((int)first % (int)second )<< endl;

        // C++ Style casting
        cout << "Remainder = "
             << (static_cast<int>(first) % static_cast<int>(second ))<< endl;
        break;
    default:
        cout << "Invalid operator!";

    }

   /*
   int x = 10;
   int y = 3;

   // C-style casting
   double z = (double)x/y;
   cout << z << endl;
    (int)x;
   // C++ -Style casting
   z = static_cast<double>(x)/y;
   cout << z;
   */
    return 0;
}
