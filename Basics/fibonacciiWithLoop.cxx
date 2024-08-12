#include <iostream>
using namespace std;

int main() {
    int previousTerm = 1;
    int currentTerm = 1;
    int nextTerm;

    cout << "X: ";
    int x; cin >> x;
    cout << previousTerm << " " << currentTerm << " ";
   for(int i = 3; i <= x; i++) {
    nextTerm = previousTerm + currentTerm;
    previousTerm = currentTerm;
    currentTerm = nextTerm;
    cout << nextTerm << " ";
   }


    return 0;
}


