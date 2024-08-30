#include <iostream>
#include <cmath>

using namespace std;

double getPositiveSum(double numbers[],int size) {
	double sum =  0;
	for(int i = 0; i < size; i++)
		if(numbers[i] > 0)
			sum+=numbers[i];
  return sum;
}

void bubbleSort(double numbers[],int size) {
	for(int i = size - 1 ; i >= 0; i--){
		for(int j = 0; j < i; j++)
		  if(abs(numbers[j]) > abs(numbers[j+1])) {
			  double temp = numbers[j];
			  numbers[j] = numbers[j+1];
			  numbers[j+1] = temp;
		  }
	}
}

int linearSearch(double numbers[],int size,double target) {
    for(int i = 0; i < size; i++)
        if(numbers[i] == target)
            return i;
    return -1;
}

int main()
{
	double numbers[] = {12,30.1,0.12,-50.5};
	int size = sizeof(numbers)/sizeof(numbers[0]);
	cout << getPositiveSum(numbers,size) << endl;

	bubbleSort(numbers,size);

	for(int i = 0; i < size; i++)
		cout << numbers[i] << " ";

    int x = linearSearch(numbers,size,30);
    cout <<endl << x;
	return 0;
}
