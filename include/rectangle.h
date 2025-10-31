#pragma once
#include <stdexcept>

struct Rectangle {
    double width;
    double height;
};

// Returns rectangle area (width * height). Throws if any side is negative.
double area(const Rectangle& r);

// Returns rectangle perimeter (2 * (width + height)). Throws if any side is negative.
double perimeter(const Rectangle& r);
