#include <iostream>

using namespace std;

void triangle(int size) {
    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= i; j++){
           if(i % 2 == 0)cout << "@";
           else cout << "X";
        }

        cout << endl;
    }
}

void rectangle(int size) {
    for(int i = 1; i <= size; i++){
        for(int j = 1; j <= size; j++) {
            if(i >= j)
             cout << "@";
             else cout << "#";
        }
        cout << endl;
    }
}



void showShape(int size) {
    cout << "1.Triangle"<< endl
         << "2.Rectangle" << endl
         << "Choice: ";
    int choice;
    cin >> choice;
    if(choice == 1)
        triangle(size);
    else if(choice == 2)
        rectangle(size);
    else cout << "Invalid choice!!!" << endl;
}
