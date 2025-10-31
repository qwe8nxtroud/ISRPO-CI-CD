#include "rectangle.h"
#include <cassert>

// Minimalistic unit tests using plain asserts.
// If an assert fails, the test binary will exit with non-zero code and CI will mark the job as failed.

int main() {
    // Normal cases
    {
        Rectangle r{3, 4};
        assert(area(r) == 12);
        assert(perimeter(r) == 14);
    }
    // Zero side
    {
        Rectangle r{0, 5};
        assert(area(r) == 0);
        assert(perimeter(r) == 10);
    }
    // Square
    {
        Rectangle r{7, 7};
        assert(area(r) == 49);
        assert(perimeter(r) == 28);
    }
    // Exceptions on negative input
    bool caught = false;
    try {
        (void)area(Rectangle{-1, 2});
    } catch (const std::invalid_argument&) {
        caught = true;
    }
    assert(caught);

    caught = false;
    try {
        (void)perimeter(Rectangle{2, -5});
    } catch (const std::invalid_argument&) {
        caught = true;
    }
    assert(caught);

    return 0;
}
