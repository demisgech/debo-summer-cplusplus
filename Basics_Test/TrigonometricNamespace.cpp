
#include <cmath>

namespace Trigonometirc {
    const double radian = 57.2958;

    double sine(double x) {
        return sin(x/radian);
    }

    double cosine(double x) {
        return cos(x/radian);
    }

    double tangent(double x) {
        return tan(x/radian);
    }

    double cosecant(double x) {
        return static_cast<double>(1)/sin(x/radian);
    }

    double secant(double x) {
        return static_cast<double>(1)/cos(x/radian);
    }

    double cotangent(double x) {
        return static_cast<double>(1)/tan(x/radian);
    }
}



