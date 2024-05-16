#pragma once

#include <iostream>
using namespace std;

class Box {
public:
    // Default constructor
    Box();

    // Parameterized constructor
    Box(const double newLength, const double newbreadth, const double newHeight);

    // Destructor
    ~Box();

    // Function to calculate volume
    double GetVolume();

    // Setter methods
    void setLength(double len);
    void setBreadth(double bre);
    void setHeight(double hei);

    // Overload + operator to add two Box objects
    Box operator+(const Box& b);

private:
    double length;
    double breadth;
    double height;
};
