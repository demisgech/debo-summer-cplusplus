#include <iostream>
#include <cstdlib>

 using namespace std;

bool isFound(int numbers[],int size,int secretNumber) {
    for(int i = 0; i < size; i++) {
        if(secretNumber == numbers[i]) {
                return true;
        }
    }
    return false;
}

int main() {
    int numbers[5] = {12,34,54,44,33};
    int size = sizeof(numbers)/sizeof(numbers[0]);

    string result = isFound(numbers,size,12)? "Found!" : "Not found!";
    cout << result;

  /*
    for(int i =0; i < 5; i++) {
        cout << "Numbers[" << i<< "]: ";
        cin >> numbers[i];
    }

    cout << "Output:" << endl;
    for(int i = 0; i < 5; i++)
        cout << "Numbers[" << i << "]:" << numbers[i] << endl;

  */
    return 0;

}
