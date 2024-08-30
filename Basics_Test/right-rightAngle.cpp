#include <iostream>

using namespace std;

void drawRightRightAngleTriangle(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n; j++) {
            if(i <= j)
                cout << j << " ";
            else cout << "  ";
        }
        cout << endl;
    }
}
int main() {
    drawRightRightAngleTriangle(10);
    return 0;
}
