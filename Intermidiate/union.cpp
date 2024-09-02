#include <iostream>

using namespace std;

union Movie {
    string tilte;
    int releaseDate;
};

union Joystick {
    double up;
    double down;
    double left;
    double right;
};

int main() {
    Movie movie;
    movie.tilte = "Terminator";
    movie.releaseDate = 2;
   // cout << movie.tilte << endl;

    Joystick joystick;
    joystick.down = -1;
    joystick.up = 1;
    cout << joystick.down << endl;
    return 0;
}
