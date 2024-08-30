#include <iostream>

using namespace std;

int factorial(int x) {
	if(x <= 0)
		return 1;
	else 
		return x*factorial(x-1); 
}
int infinitFunction(int n) {
	cout << "Infinit function"<< endl;
	return infinitFunction(n);
}

int main()
{
	cout << factorial(4) << endl;
	//cout << infinitFunction(1);
	return 0;
}