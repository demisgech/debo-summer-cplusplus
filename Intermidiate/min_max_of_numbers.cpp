#include <iostream>
#include "./utils/even_odd_sum.cpp"

using namespace std;
using namespace Calculating;

double getMin(double numbers[],int size) {
    double minimum = numbers[0];
    for(int i = 1; i < size; i++)
         if(minimum > numbers[i])
            minimum = numbers[i];
    return minimum;
}

double getMax(double numbers[],int size) {
     double maximum = numbers[0];
    for(int i = 1; i < size; i++)
         if(maximum < numbers[i])
            maximum = numbers[i];
    return maximum;
}


int main() {
    double numbers[] = {10,-10,20,-8,90,-15};
    int size = sizeof(numbers)/sizeof(numbers[0]);


    double minimum = getMin(numbers,size);
    cout << "Minimum = " << minimum << endl;

    double maximum = getMax(numbers,size);
    cout << "Maximum = " << maximum << endl;

    int numberList[] = {10,-10,20,-8,90,-15};
    int sizes = sizeof(numberList)/sizeof(numberList[0]);
    int add = sum(numberList,sizes);
    cout << "Sum = " << add << endl;
    return 0;
}
