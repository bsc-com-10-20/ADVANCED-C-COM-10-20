#include "Square.h"

namespace shapes {
    Square::Square() : side_length(0) {}

    Square::Square(double length) : side_length(length) {}

    double Square::getSideLength() const {
        return side_length;
    }

    Square::~Square() {}
}
