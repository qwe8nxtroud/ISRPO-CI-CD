#include "rectangle.h"

double area(const Rectangle& r) {
    if (r.width < 0 || r.height < 0) {
        throw std::invalid_argument("Rectangle sides must be non-negative");
    }
    return r.width * r.height;
}

double perimeter(const Rectangle& r) {
    if (r.width < 0 || r.height < 0) {
        throw std::invalid_argument("Rectangle sides must be non-negative");
    }
    return 2.0 * (r.width + r.height);
}
