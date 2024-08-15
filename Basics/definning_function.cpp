#include <iostream>

using namespace std;
// Function declaration ( function Prototype)
void greet(string name);
int main() {
    greet("Demis");
    return 0;
}

// Function definition
void greet(string name) {
    cout << "Hello " << name << endl;
}
