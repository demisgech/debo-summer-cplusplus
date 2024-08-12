
#include <iostream>

using namespace std;

int main() {

    cout << "For loop ..." << endl;
    for(int x = 0; x <= 5; x++)
        for(int y = 0; y <= 5; y++)
            cout << "(" << x << "," << y << ")" << endl;

    cout << endl << "While loop ..." << endl;

    int x = 0;
    while(x <= 5) {
        int y = 0;
        while(y <= 5) {
            cout << "(" << x << "," << y << ")" << endl;
          y++;
        }

        x++;
    }


    cout << endl << "Do...While loop ..." << endl;
      int i = 0;
    do {
        int j = 0;
        do {
            cout << "(" << i << "," << j << ")" << endl;
          j++;
        } while(j <= 5);

        i++;
    }while(i <= 5);

    return 0;
}



