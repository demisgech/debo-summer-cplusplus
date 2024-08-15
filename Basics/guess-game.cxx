#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);

    int minValue = 1;
    int maxValue = 15;
    int secretNumber = (rand()%(maxValue - minValue + 1)) + minValue;
    //cout << secretNumber << endl;;

    int guess;
    /*
    while(true) {
        cout << "Guess: ";
        cin >> guess;
        if(secretNumber == guess) {
            cout << "Congratulations! You won!" << endl;
            break;
        }
        else
            cout << "You loss! Please try again!" << endl;
    }
*/
    int guessCount = 0;
    int guessLimit = 15;
    int points = 0;
    int leftChances = 0;
    while(guessCount < guessLimit) {
        cout << "Guess: ";
        cin >> guess;
        points = guessLimit - guessCount;
        guessCount++;
        leftChances = guessLimit - guessCount;
        if(secretNumber == guess) {
            cout << "Congratulations! You won!" << endl
                 << "You have got " << points << " points out of "
                 << guessLimit << endl;
            break;
        }
        else if(guessCount != guessLimit) {
            cout << "You loss!  You have "
                 << leftChances << " chances. Please try again!" << endl;
        }
        else {
            cout << "Sorry! You loss! all of your chances." << endl
                 << "Please, run the program again! and try it out!" << endl;
        }
    }

    return 0;
}
