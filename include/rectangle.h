#pragma once
#include <stdexcept>

struct Rectangle {
  double width;
  double height;
};

double area(const Rectangle &r);

double perimeter(const Rectangle &r);
