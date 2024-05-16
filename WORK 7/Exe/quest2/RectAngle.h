#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
     // Default constructor
    Rectangle(); 
    // Overloaded constructor
    Rectangle(float len, float wid); 
    // Destructor
    ~Rectangle(); 

    // Accessor methods
    void setLength(float len);
    void setWidth(float wid);
    float getLength() const;
    float getWidth() const;

    // Member function to calculate area
    float calculateArea() const;
};
// RECTANGLE_H
#endif 
