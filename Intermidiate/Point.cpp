#include <iostream>
#include <cmath>

using namespace std;
struct Point {
    double x;
    double y;

    bool equals(const Point& other) const {
        return ( x == other.x && y == other.y);
    }

    bool operator==(const Point& other) const {
        return ( x == other.x && y == other.y);
    }
    bool operator!=(const Point& other) const {
        return !( x == other.x && y == other.y);
    }

    double distanceTo(const Point& other) const {
        return (sqrt(pow(x-other.x,2)+ pow(y-other.y,2)));

        /*
        double dx = x - other.x;
        double dy = y - other.y;
        double squareSum = pow(dx,2) + pow(dy,2);
        double result = sqrt(squareSum);
        return result;
        */
    }
    double getArea(const Point& other) {
        // area = 1/2bh;
        return ((static_cast<double>(1)/2)*abs((x-other.x)) * abs((y- other.y)));
    }
};

ostream& operator<<(ostream& stream, const Point& point) {
    return stream << "(" << point.x << "," << point.y << ")" << endl;
}


int main() {
    Point pointA = {1,1};
    Point pointB = {5,4};
    if(pointA.equals(pointB))
        cout << "Equal" << endl;
    else cout << "Not equal " << endl;

     if(pointA != pointB)
        cout << "Not Equal" << endl;
    else cout << "equal " << endl;

    double distance = pointA.distanceTo(pointB);
    cout << "Distance = " << distance << "m"<< endl;

    double area = pointA.getArea(pointB);
    cout << "Area = " << area << "m^2" << endl;

    cout << pointA;


    return 0;
}
