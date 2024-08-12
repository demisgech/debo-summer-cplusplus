#include <iostream>

using namespace std;

int main() {
    // Nested if statement

    cout << "*** Welcome to use mobile banking service ****" << endl
         << "1. log in" << endl
         << "2. Exit" << endl
         << "Choice: ";
    char ch;
    cin >> ch;
    if(ch == '1') {
            cout << "1. My account" << endl
                 << "2. Buy airtime" << endl
                 << "..."<< endl
                 << "Choice: ";
                char c;
                cin >> c;
        if(c == '1')

          cout << "Your balance is 1000";
        else if(c == '2')
        cout << "Buy airtime";
        else cout << "Invalid choice!";
    }

    else if(ch == '2') {
          return 1;
    }
    return 0;
}
