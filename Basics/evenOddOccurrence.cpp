#include <iostream>

using namespace std;

void evenOddOccurrence(int numberLimit) {
    int evenCounter = 0;
    int oddCounter = 0;
    for (int i = 1; i <= numberLimit; i++){
        if (i % 2 == 0)
            evenCounter++;
        else
            oddCounter++;
    }
    cout << "You've got " << evenCounter << " even numbers and "
         << oddCounter << " odd numbers." << endl;
}

int main() {

    evenOddOccurrence(17);
    return 0;
}
