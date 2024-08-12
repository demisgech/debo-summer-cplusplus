
#include <iostream>

using namespace std;

int main() {

        int previousTerm = 1;
        int currentTerm = 1;
        int nextTerm;
        cout << "Enter a number: ";
        int number;
        cin >> number;
        cout << previousTerm << " " << currentTerm << " ";
    for (int i = 2; i < number; i++) {
        nextTerm = previousTerm + currentTerm;
        previousTerm = currentTerm;
        currentTerm = nextTerm;
        cout << nextTerm << " ";
    }


    return 0;
}
