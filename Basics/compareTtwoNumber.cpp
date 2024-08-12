#include <iostream>

using namespace std;

int main() {
    cout << "Enter two numbers: ";
    double first;
    double second;
    cin >> first>> second;
    double result =(first > second)? first : second;

    if(first > second)
        result = first;
    else
        result = second;
    cout << result;
    return 0;
}


