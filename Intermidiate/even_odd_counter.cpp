#include <iostream>
using namespace std;

int main() {
	
	int numbers[] = {10,20,30,1,13,15};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	
	int evenCounter = 0;
	int oddCounter = 0;
	int evenSum = 0;
	int oddSum = 0;
	for(int i = 0; i < size; i++){
		if(numbers[i] % 2 == 0) {
				evenCounter++;
				evenSum += numbers[i];
		}
		
		else {
			oddCounter++;
			oddSum += numbers[i];
		}
		
	}
	
	cout << "You have " <<  evenCounter << " Even and " 
		 << oddCounter << " Odd numbers" << endl;
    cout << "Even Sum = " << evenSum << endl
		 << "Odd Sum = " << oddSum << endl; 

	return 0;
}