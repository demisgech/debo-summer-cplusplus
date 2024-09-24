#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle {
    public:
        Rectangle();
        explicit Rectangle(double length);
        Rectangle(double width,double height);
        Rectangle(double width, double height, double length);

        void setWidth(double width);
        double getWidth();

        void setHeight(double height);
        double getHeight();

        void setLength(double length);
        double getLength();

        double getBaseArea();
        double getLateralSurfaceArea();
        double getTotalArea();

        double getVolume();


    private:
        double width = 0;
        double height = 0;
        double length  = 0;
};

#endif // RECTANGLE_H
