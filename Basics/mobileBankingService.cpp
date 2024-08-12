#include <iostream>

using namespace std;

int main() {
    string secretCode = "*889#";
    cout << "User Input: ";
    string userInput;
    cin >> userInput;

    if(secretCode == userInput) {
            doAgain:
        cout << "Welcome to CBE Mobile Banking" << endl
             << "1. Login" << endl
             << "2. Exit" << endl
             << "Choice: ";
        char ch;
        cin >> ch;
        if(ch == '1') {
            string password = "1234";
            cout << "Password: ";
            string inputPassword;
            cin >> inputPassword;
            if(inputPassword == password) {
                cout << "Welcome to CBE Mobile Banking!" << endl
                     << "1. My account" << endl
                     << "2. Transfer to CBE account" << endl
                     << "3. Airtime"<< endl
                     << "Choice: ";
                     char c;
                     cin >> c;
                     if(c == '1')
                        cout << "Your balance is $1000"<< endl;
                     else if ( c == '2')
                        cout << "You'r transferring a money!" << endl;
                     else if(c == '3')
                        cout << "Buy airtime";
                    else cout << "Please select the correct choice!";
            }
            else {
                cout << "Invalid Password!!";
            }
        }
        else if(ch == '2'){
                cout << "Logged out!"<< endl;
            return 0;
        }
        else {
            goto doAgain;
        }

    }
    else {
        cout << "Sorry! Secret code does not match." << endl;
    }

    return 0;
}
