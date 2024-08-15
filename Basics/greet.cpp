
#include <iostream>

using namespace std;

void greet(string name) {
    cout << "Hello " << name << endl;
}

string fullName(string firstName,string lastName) {
    //Concatinating
    return firstName + " " + lastName;
}

int getMax(int x, int y) {
    return (x > y)? x:y;
   /* if(x > y)
        return x;
   // else
       return y; */
}

double calculateTax(double income, double taxRat = 0.02,double expense = 0) {
    return income*taxRat;
}

int main() {
    // calling - invoking - executing a function

    //string name = fullName("Demis","Getachew");
    //greet(name);
    //greet(fullName("Demis","Getachew"));

    //int larger = getMax(12,13);
    //cout << larger;
/*
    double tax = calculateTax();
    cout << "Tax = " << tax << endl;
    tax = calculateTax(1000,0.3);
    cout << "Tax = " << tax;
    */
    int x = 10;
    int &y = x;
    y = 20;
    x = 30;
    cout << y;

    return 0;
}
