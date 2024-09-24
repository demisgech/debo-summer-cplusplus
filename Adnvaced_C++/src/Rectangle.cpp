
#include <iostream>
#include "Rectangle.h"

using namespace std;
Rectangle::Rectangle(const Rectangle& source) {
    cout << "Constructor copied" << endl;
    this->width = source.width;
    this->height = source.height;
    this->length = source.length;
}
Rectangle::Rectangle(double width,double height) {
    cout << "constructing a rectangle with dimension of " << width<< " and "<< height << endl;
   setWidth(width);
    setHeight(height);
}
// Constructor deligation (forwarding construtor )
Rectangle::Rectangle(double width, double height, double length):Rectangle(width,height) {
    cout << "Building a rectangle with a dimension of " << width << "," << height<< " and " << length << endl;
    this->length = length;
}
Rectangle::~Rectangle() {
    cout << "Destructing a rectangle" << endl;
}
double Rectangle::getArea() {
        return width * height;
}

void Rectangle::draw() {
        cout << "Drawing a rectangle" << endl;
        cout << "Dimensions: " << width << "," << height << endl;
}

 // Setter (Mutator)
void Rectangle::setWidth(double width) {
    if(width < 0)
        throw invalid_argument{"Width!"};
    //(*this).width = width;
    this->width = width;
}

double Rectangle::getWidth() {
    return width;
}


void Rectangle::setHeight(double height) {
    if(height < 0)
    throw invalid_argument ("Height!");
    this->height = height;
   // Rectangle::height = height;
}

double Rectangle::getHeight() {
    return height;
}
