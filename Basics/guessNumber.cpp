
#include <iostream>

using namespace std;

int main(){


/*

    while(true) {
         int number;
        cout << "Number: ";
        cin >> number;
        if(number >= 1 && number <= 5)
        break;

    }
*/

    int secretNumber = 7;


    while(true) {
    int guess;
    cout << "Guess: ";
    cin >> guess;
        if(guess > secretNumber)
            cout << "Your Guess is too high!"<< endl;
        else if(guess < secretNumber)
            cout << "Your Guess is too low!" << endl;
        else {
            cout << "congratulations! You win!"<< endl;
            break;
        }



    }

    return 0;
}


