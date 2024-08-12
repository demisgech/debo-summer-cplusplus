#include <iostream>

using namespace std;

int main() {

    cout << "Enter two numbers: ";
    double x;
    double y;
    cin >> x>>y;
    cout << "A/a- Addition" << endl
         << "S/s- Subtraction" << endl
         << "M/m- Multiplication" << endl
         << "D/d- Division" << endl
         << "Choice: ";
    char ch;
    cin >> ch;

    switch(ch) {
    case 'A':
        {
        double sum = x+y;
        cout << "Sum = " << sum;
        break;
        }

    case 'S': {
    double difference = x-y;
        cout << "Difference = " << difference;
        break;

    }

    default:
    cout << "Invalid choice!";

    }
    if(ch =='A' || ch=='a') {
        double sum = x+y;
        cout << "Sum = " << sum;
    }
    else if(ch =='S'|| ch=='s') {
        double difference = x-y;
        cout << "Difference = " << difference;
    }
   else if(ch =='M'|| ch=='m') {
        double product = x*y;
        cout << "Product = " << product;
    }
    else if(ch =='D'|| ch=='d') {
        double division = x/y;
        cout << "Division = " << division;
    }

    else cout << "Invalid choice!";


    return 0;
}
