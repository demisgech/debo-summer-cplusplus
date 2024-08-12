#include <iostream>

using namespace std;

int main() {

// order of operators
// ()
// / and *
// + and -
//int x = 10;
//int y = 5;
//int z = (x + 4*y) /(2*y);
//cout << z;

//int a = 20;
//int b = 10;
// a = 20
//cout << "a = " << a << endl << "b = " << b;
// b = 10

double force = 100.90;
double displacement = 20;
double work = force * displacement;

// Chaining Stream Insertion Operator
cout  << "Force = " << force << "N" << endl
      << "Displacement = " << displacement << "m" << endl
      << "Work = " << work << "J";

return 0;
}

