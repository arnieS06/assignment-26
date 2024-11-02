#pragma once

#include <ostream>
#include "Struct.h"


bool operator == (Coordinates one, Coordinates two) {
    return (one.pointX == two.pointX && one.pointY == two.pointY);
}

std::ostream& operator << (std::ostream& os, const Coordinates& coordinate) {
    os << "The X coordinate is: " << coordinate.pointX << std::endl;
    os << "The Y coordinate is: " << coordinate.pointY << std::endl;
    os << "The coordinate pair we have is (" << coordinate.pointX
        << ", " << coordinate.pointY << ")" << std::endl;

    return os;
}