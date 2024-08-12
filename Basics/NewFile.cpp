#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Same initialization
    // int number = 0;
    // int number(0);
    // int number{};
    /*
    int number = 1000000;
    cout << number << endl;
    // Narrowing
    short another {number};
    cout << another << endl;
    */
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);
   int result = rand()%100;
   //cout << result;
   int maxValue = 5;
   int minValue = 1;
   int first = (rand()%(maxValue - minValue + 1))+minValue;
    
   int second = (rand()%(maxValue - minValue + 1))+minValue;
    cout << first <<"," << second;
    
     int numbers[] = {1,3,2};
    for(int num : numbers)
        cout << num << endl;
	return 0;
}
