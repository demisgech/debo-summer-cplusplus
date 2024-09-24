#include <iostream>
#include "Rectangle.h"
#include "showFactorial.h"
#include "showFibonacci.h"
#include "showShape.h"
#include "showPrimeNumber.h"
#include "showSum.h"

using namespace std;
void showRectangleInformation() {
    Rectangle rectangle{12,30,10};
    cout << "Base Area: " << rectangle.getBaseArea() << endl;
    cout << "Lateral Surface Area: " << rectangle.getLateralSurfaceArea() << endl;
    cout << "Total Area: " << rectangle.getTotalArea() << endl;
    cout << "Volume: " << rectangle.getVolume();
}
int main() {
    showFactorial(10);
    return 0;
}
