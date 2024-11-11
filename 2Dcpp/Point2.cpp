#include "Point2.h"
#include <iostream>

// Default constructor initializes x and y to 0
Point2::Point2() : x(0), y(0) {}

// Constructor with parameters
Point2::Point2(float x, float y) : x(x), y(y) {}

// Getters for x and y
float Point2::getX() const { return x; }
float Point2::getY() const { return y; }

// Add a vector to this point, resulting in a new point
Point2 Point2::add(const Vector2& vec) const {
    return Point2(x + vec.getX(), y + vec.getY());
}

// Subtract another point from this point, resulting in a vector
Vector2 Point2::subtract(const Point2& other) const {
    return Vector2(x - other.getX(), y - other.getY());
}

// Print the point's coordinates to the console
void Point2::print() const {
    std::cout << "Point2(" << x << ", " << y << ")" << std::endl;
}

