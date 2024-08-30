#include <iostream>

using namespace std;

int positiveSum(int x) {
	return (x <= 0)? 0 : x + positiveSum(x -1);
}

int fibonacci(int n) {
	if(n <= 2)
		return 1;
	return fibonacci(n - 1) + fibonacci(n - 2);
}
int main()
{
	//cout << positiveSum(10);
	for(int i = 1; i <= 5; i++)
		cout << fibonacci(i) << " ";
	return 0;
}