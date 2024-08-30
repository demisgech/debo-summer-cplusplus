#include <iostream>
using namespace std;

int main() {
	
	int numbers[] = {10,20,30,12,34,56,78};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	for(int i = 0; i < size ; i++)
		cout << numbers[i] << endl;
	
	double prices[] = {12.2,32.4,45.4,100.0,290.3};
	
	int length = sizeof(prices)/sizeof(prices[0]);
	double sum = 0;
	for( int i = 0; i < length; i++)
		sum += prices[i];
	cout << "Total price = $" << sum << endl;
	
	
	return 0;
}