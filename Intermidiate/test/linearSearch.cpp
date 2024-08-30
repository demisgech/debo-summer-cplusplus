#include <iostream>

using namespace std;

int linearSearch(double numbers[],int size,double target) {
	for(int i = 0; i < size; i++)
		if(numbers[i] == target)
			return i;
  return -1;
}

int main()
{
	   double numbers[] = {12.1,34.3,50,70,-34};
	   int size = sizeof(numbers)/sizeof(numbers[0]);
	   cout << linearSearch(numbers,size,50);	
	return 0;
}