#include "Shape.h"
#include <iostream>
using namespace std;
void Shape::draw() {
    cout << "Drawing a shape..." << endl;
}

double Shape::getLineCount() {
    return lineCount;
}

void Shape::setLinecount(double lineCount) {
    this->lineCount = lineCount;
}
