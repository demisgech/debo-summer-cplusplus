#include <iostream>

using namespace std;

int main() {
    cout << "**** Menu Procedure ****" << endl
         << "1- Create account." << endl
         << "2- Enter a password." << endl
         << "3- Quit." << endl
         << "Choice: ";
    char choice;
    cin >> choice;

    if(choice == '1')
        cout << "Create Account.";
    else if(choice == '2')
        cout << "Enter a password.";
    else if(choice == '3')
        cout << "Quit.";
    else cout << "Invalid choice!";
    return 0;
}
