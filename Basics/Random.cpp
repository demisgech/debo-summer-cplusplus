#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    long elapsedSeconds = time(0);
    srand(elapsedSeconds);
    int result = rand() % 11 +1;
    cout << result << endl;

    int maxValue = 6;
    int minValue = 1;
    int dice1 = (rand()%(maxValue - minValue +1)) + minValue;
    int dice2 = (rand()%(maxValue - minValue +1)) + minValue;
    cout << dice1 << "," << dice2 ;



    string name;
    cout << "What is your name? ";
    getline(cin,name,'.');
    cout << name << endl;

    bool isMale = true;
    cout << noboolalpha << isMale << endl;


    return 0;
}
