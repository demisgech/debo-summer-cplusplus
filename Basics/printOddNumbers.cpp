#include <iostream>

using namespace std;

void printOddNumbers(int limit) {
    for(int i = 0; i < limit; i++)
        if(i % 2 != 0)
            cout << i << endl;
}


int main() {
    printOddNumbers(10);
    return 0;
}
