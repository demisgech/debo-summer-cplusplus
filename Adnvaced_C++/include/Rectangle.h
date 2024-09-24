#ifndef RECTANGLE_H
#define RECTANGLE_H

// Encapsulation principle
class Rectangle {
    public:
    Rectangle() = default;
    Rectangle(const Rectangle& source);
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

#endif // RECTANGLE_H
