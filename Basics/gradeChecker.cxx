#include <iostream>

using namespace std;

int main() {
    int mark;
    cout << "Mark: ";
    cin >> mark;
    char grade;
    if(mark>= 0 && mark <= 100) {
        if(mark >= 80 )
            grade = 'A';
        else if(mark >= 75)
            grade = 'B';
        else if(mark >= 60)
            grade = 'c';
        else if(mark >= 45)
            grade = 'D';
        else grade = 'F';
        cout << "Grade = " << grade;
    }
    else {
        cout << "Sorry! Mark should be between 0 and 100!";
    }


    return 0;
}



