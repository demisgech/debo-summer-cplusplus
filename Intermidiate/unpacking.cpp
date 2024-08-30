#include <iostream>

using namespace std;

int main() {
    int numbers[] = {12,44,56};
   /*
    int  x = numbers[0];
    int y = numbers[1];
    int z = numbers[2];
   */
    // Unpacking

    auto [x,y,z]{numbers};
    cout << x << "," << y << "," << z << endl;

    return 0;
}
