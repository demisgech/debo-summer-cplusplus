#include <iostream>
#include "Shape.h"
#include "Square.h"
using namespace std;

int main() {

    Shape shape;
    shape.draw();

    Square square;
    square.draw();
    square.setLength(10);
    cout << square.getLength() << endl;
    cout << square.getLineCount();
    return 0;
}
