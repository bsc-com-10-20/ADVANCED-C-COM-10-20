#include "Person.h"
#include <iostream>
#include <string>

// Default constructor
Person::Person() {
    // Initialize member variables to default values
    mWeight = 0.0f;
    mFirstName = "";
    mAge = 0;
}

// Parameterized constructor
Person::Person(float newWeight) {
    // Initialize member variables with provided values
    mWeight = newWeight;
    mFirstName = "";
    mAge = 0;
}

// Destructor
Person::~Person() {
    // Perform any cleanup or resource deallocation if needed
}

// Overloaded addition operator
float Person::operator+(const Person& otherPerson) {
    // Perform some operation with the other Person object
    // For example, return the sum of their weights
    return mWeight + otherPerson.mWeight;
}
