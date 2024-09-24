#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape() = default;
        void draw();
        double getLineCount();
        void setLinecount(double lineCount);
    protected:
        double lineCount;
    private:
        double radius;
};

#endif // SHAPE_H
