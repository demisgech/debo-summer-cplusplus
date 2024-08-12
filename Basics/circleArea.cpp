
#include <iostream>
#include <cmath>

using namespace std;

int main() {

    const double pi = 3.14;
    double radius;
    //cout << "Radius: ";
    //cin >> radius;

    double circleArea = pi*pow(radius,2);
    //cout << "Circle Area = " << circleArea << "cm^2";

    double floorValue = floor(-2.1);
   // cout << "Floor = " << floorValue << endl;

    double ceilValue = ceil(3.45);
    //cout << "Ceil = " << ceilValue << endl;

    int x = 4;
    int y = x--;
    cout << "y = " << y << ", x= "<< x;


    return 0;
}
