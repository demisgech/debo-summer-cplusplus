#include <iostream>

using namespace std;

int main() {

    double fahrenheit;
    cout << "Fahrenheit: ";
    cin >> fahrenheit;

    double celsius = 5.0/9*(fahrenheit-32);
    cout << "Celsius = " << celsius << endl;

    double kelvin = celsius + 273.15;
    cout << "Kelvin = " << kelvin << endl;

return 0;
}
