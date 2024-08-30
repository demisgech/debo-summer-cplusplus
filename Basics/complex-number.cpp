#include <iostream>
#include <complex>
using namespace std;

int main() {
	// a+bi: a -> represent real part and b -> represent imaginary part
	// in programming instead of a + bi we use a + bj to represen a coplex number
	complex<double> z0 = 2 + 3j;
	complex<double> z1 = 1.2 - 3.5j;
	complex<double> z2 = z0 + z1;
	cout << z2;
	
	complex<double> z3 = (12+34j);
	cout << z3; 
	return 0;
}