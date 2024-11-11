#include "Vector2.h"
#include <cmath>
#include <iostream>

// Default constructor initializes x and y to 0
Vector2::Vector2() : x(0), y(0) {}

// Constructor with parameters
Vector2::Vector2(float x, float y) : x(x), y(y) {}

// Getters for x and y
float Vector2::getX() const { return x; }
float Vector2::getY() const { return y; }

// Returns the magnitude (norm) of the vector
float Vector2::norm() const {
    return std::sqrt(x * x + y * y);
}

// Dot product with another vector
float Vector2::dot(const Vector2& other) const {
    return x * other.getX() + y * other.getY();
}

// Cross product (2D pseudo cross) with another vector
float Vector2::cross(const Vector2& other) const {
    return x * other.getY() - y * other.getX();
}

// Scales the vector by a scalar and returns the resulting vector
Vector2 Vector2::scale(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

// Print the vector's components to the console
void Vector2::print() const {
    std::cout << "Vector2(" << x << ", " << y << ")" << std::endl;
}

