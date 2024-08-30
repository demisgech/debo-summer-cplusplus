#include <iostream>

using namespace std;

double getPrimeNumberAverage(int numberLimit) {
    int sum = 0;
    int primeNumberCounter = 0;
    for (int i = 1; i <= numberLimit; i++){
        int currentNumber = i;
        int count = 0;

        for (int j = 1; j <= currentNumber; j++){
            if (currentNumber % j == 0)
                count++;
        }
        if (count == 2){
            sum += i;
            primeNumberCounter++;
            cout << i << ",";
        }
    }
    double average = static_cast<double>(sum) / primeNumberCounter;

    return average;
}
int main()
{

    int numberLimit;
    cout << "Number Limit: ";
    cin >> numberLimit;
    double average = getPrimeNumberAverage(numberLimit);
    cout << endl
         << "Average = " << average
         << endl
         << "Done!";
    return 0;
}
