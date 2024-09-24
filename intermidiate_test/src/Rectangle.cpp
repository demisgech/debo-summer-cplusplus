#include "Rectangle.h"
#include <stdexcept>

using namespace std;

 Rectangle::Rectangle() {
    width = height = length = 0;
 }

Rectangle::Rectangle(double length):length{length} {

}
Rectangle::Rectangle(double width,double height) {
    setWidth(width);
    setHeight(height);
}
Rectangle::Rectangle(double width, double height, double length):Rectangle(width,height) {
    setLength(length);
}


void Rectangle::setWidth(double width) {
    if(width < 0)
        throw invalid_argument{"Width:"};
    this->width = width;
}
double Rectangle::getWidth() {
    return width;
}

void Rectangle::setHeight(double height) {
    if(height < 0)
        throw invalid_argument{"Height: "};
    this->height = height;
}

double Rectangle::getHeight() {
    return height;
}

void Rectangle::setLength(double length) {
    if(length < 0)
        throw invalid_argument{"Length"};
    this->length = length;
}
double Rectangle::getLength() {
    return length;
}

double Rectangle::getBaseArea() {
    return 2*width*length;
}
double Rectangle::getLateralSurfaceArea() {
    return (2*width*height + 2*height*length);
}

double Rectangle::getTotalArea() {
    return (getBaseArea() + getLateralSurfaceArea());
}

double Rectangle::getVolume() {
    return width*height*length;
}
