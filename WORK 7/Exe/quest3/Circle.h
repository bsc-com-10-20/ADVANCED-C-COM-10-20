#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;
    public:
        Circle();
        Circle(double r);

        double getRadius() const;

        ~Circle();
    };
}
// CIRCLE_H
#endif 
