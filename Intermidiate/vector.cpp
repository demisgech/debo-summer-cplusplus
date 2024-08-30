#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double>numbers = {12.2,34,56.5,78,80.9,45,67};
    numbers.push_back(12);
    numbers.pop_back();
    numbers.clear();

    for(int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << endl;
    }


    double numbers[7] = {12.2,34,56.5,78,80.9,45,67};
    for(int i = 0; i < 5; i++){
        cout << numbers[i] << endl;
    }

    return 0;
}
