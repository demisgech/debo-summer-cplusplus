#include <iostream>

using namespace std;

void showPrimeNumber(int numberLimit) {
    for (int i = 1; i <= numberLimit; i++){
        int currentNumber = i;
        int count = 0;

        for (int j = 1; j <= currentNumber; j++){
            if (currentNumber % j == 0)
                count++;
        }
        if (count == 2)
            cout << i << ",";
    }
}
