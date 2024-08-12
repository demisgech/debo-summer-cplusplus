#include <iostream>

using namespace std;

int main() {

    string name;
    cout << "Name: ";
    cin >> name;

    double cpp;
    cout << "C++ : ";
    cin >> cpp;

    double java;
    cout << "Java: ";
    cin >> java;

    double python;
    cout << "Python: ";
    cin >> python;

    double total = cpp + java + python;

    double average = total / 3;

    cout << "Name : " << name << endl
         << "C++ : " << cpp << endl
         << "Java : " << java << endl
         << "Python : " << python << endl
         << "Total : " << total<< endl
         << "Average: " << average << endl;


    return 0;
}
