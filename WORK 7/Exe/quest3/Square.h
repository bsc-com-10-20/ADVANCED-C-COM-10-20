#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double side_length;
    public:
        Square();
        Square(double length);

        double getSideLength() const;

        ~Square();
    };
}
// SQUARE_H
#endif 
