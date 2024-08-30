#include <iostream>

using namespace std;
void makeLShape() {
 int numbers[] = {2,2,2,2,5,5};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    for(int i = 0; i < size; i++) {
        for(int j = 1; j <= numbers[i]; j++)
            cout << "X";
        cout << endl;
    }
}
int main() {
    makeLShape();
    return 0;
}
