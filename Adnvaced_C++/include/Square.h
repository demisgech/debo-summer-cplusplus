#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
class Square: public Shape
{
    public:
        Square()=default;
        double getLength();
        void setLength(double length);

    private:
        double length;
};

#endif // SQUARE_H
