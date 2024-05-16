#ifndef AREA_H
#define AREA_H

#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    static double calculateArea(const shapes::Square &square);
    static double calculateArea(const shapes::Triangle &triangle);
    static double calculateArea(const shapes::Circle &circle);
};
// AREA_H
#endif 
