#include <iostream>
#include <cmath>
#include <limits>
using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    char choice;
    double base, height, length, width, side;

    do {
        cout << "Select a shape to calculate the area: " << endl;
        cout << "1. Triangle" << endl;
        cout << "2. Rectangle" << endl;
        cout << "3. Square" << endl;
        cout << "4. Quit progrm"<< endl;
        cout << "Enter selection: ";
        cin >> choice;

        switch(choice) {
            case '1':
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "The area of the triangle is: " << calculateTriangleArea(base, height) <<endl;
                break;
            case '2':
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "The area of the rectangle is: " << calculateRectangleArea(length, width) << endl;
                break;
            case '3':
                cout << "Enter the side length of the square: ";
                cin >> side;
                cout << "The area of the square is: " << calculateSquareArea(side) <<endl;
                break;
            case '4':
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Your input was: "<<choice<<" which is an invalid input" <<endl;
                cout<<"Please enter a valid input!!!"<<endl;
                // cin.clear(); // clear error flags
                // cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
               // continue; // return to the beginning of the loop
        }

        cout << "Do you want to calculate the area of another shape? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    return 0;
}
