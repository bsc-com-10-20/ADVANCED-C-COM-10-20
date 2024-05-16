#include <iostream>
#include "Rectangle.h"
   
   using namespace std;
   
int main() {
    // First rectangle using default constructor
    Rectangle rect1;

    float length, width;

    cout << "Enter the length of the first rectangle: ";
    cin >> length;
    rect1.setLength(length);

    cout << "Enter the width of the first rectangle: ";
    cin >> width;
    rect1.setWidth(width);

    cout << "Area of the first rectangle: " << rect1.calculateArea() << endl;

    // Second rectangle using overloaded constructor
    cout << "\nEnter the length and width of the second rectangle: ";
    cin >> length >> width;
    Rectangle rect2(length, width);

    cout << "Area of the second rectangle: " << rect2.calculateArea() << endl;

    return 0;
}
