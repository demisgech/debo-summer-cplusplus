#include <iostream>

using namespace std;

// Encapsulation principle
class Rectangle {
    public:
    Rectangle() = default;
    Rectangle(double width, double height);
    Rectangle(double width, double height, double length);
    ~Rectangle();
    void draw();
    double getArea();

    void setWidth(double width);
    double getWidth();

    void setHeight(double height);
    double getHeight();

    private:
    double width = 0;
    double height = 0;
    double length = 0;

};

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


/*
struct Rectangle {
    private:
    double width;
    double height;
};*/
int main() {
    Rectangle rectangleOne{12,13};
    rectangleOne.setWidth(12);
    //rectangleOne.draw();
    //cout << "Rectangle Area = " << rectangleOne.getArea() << endl;

    Rectangle rectanagleTwo{30,90};
    rectanagleTwo.setWidth(1);
    double width = rectanagleTwo.getWidth();
    //cout << "Width: " << width << endl;;

    rectanagleTwo.setHeight(20);
    double height = rectanagleTwo.getHeight();
    //cout << "Height: " << height << endl;

    Rectangle rectanagleThree{10,20};
    rectanagleThree.setWidth(12);
    double width3 = rectanagleThree.getWidth();
    cout << "Width : " << width3 <<endl;

    Rectangle rectangleFour;

    Rectangle rectangleFive{12,13,14};

    return 0;
}
