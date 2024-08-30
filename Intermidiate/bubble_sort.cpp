
#include <iostream>
#include <cstdlib>

 using namespace std;

void bubbleSort(int numbers[],int size) {
    for(int i = size - 1; i >= 0;i--) {
            for(int j = 0; j < i;j++)
        if(numbers[j] < numbers[j+1]) {
            int temp = numbers[j];
            numbers[j] = numbers[j+1];
            numbers[j+1] = temp;
        }
    }
}

int main() {
    int numbers[] = {12,34,54,87,90,89,-12,34,-234};
    int size = sizeof(numbers)/sizeof(numbers[0]);

   bubbleSort(numbers,size);

    for(int i = 0; i < size; i++)
        cout << numbers[i] << ",";


    return 0;

}
