#include <iostream>
#include "rectangle.h"

int main() {
    Rectangle r{3, 4};
    std::cout << "Area: " << area(r) << "\n";
    std::cout << "Perimeter: " << perimeter(r) << "\n";
    return 0;
}
