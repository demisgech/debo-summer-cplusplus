#include <iostream>
#include <iomanip>

using  namespace std;

int main() {
    int y = 10;
    for(int i = 0; i < 9; i++)  {
         for(int j = 10; j <= 19; j++)
            //cout << left<< setw(5) << y++;
            cout << left<< setw(5) << (i*10 + j);
        cout << endl;
    }

    return 0;
}
