#include "rectangle.h"
#include <cassert>

int main() {
  {
    Rectangle r{3, 4};
    assert(area(r) == 12);
    assert(perimeter(r) == 14);
  }
  // dd rrer
  {
    Rectangle r{0, 5};
    assert(area(r) == 0);
    assert(perimeter(r) == 10);
  }
  {
    Rectangle r{7, 7};
    assert(area(r) == 49);
    assert(perimeter(r) == 28);
  }
  bool caught = false;
  try {
    (void)area(Rectangle{-1, 2});
  } catch (const std::invalid_argument &) {
    caught = true;
  }
  assert(caught);

  caught = false;
  try {
    (void)perimeter(Rectangle{2, -5});
  } catch (const std::invalid_argument &) {
    caught = true;
  }
  assert(caught);

  return 0;
}
