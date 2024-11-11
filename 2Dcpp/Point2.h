#ifndef POINT2_H
#define POINT2_H

#include "Vector2.h"

class Point2 {
public:
    Point2();                           // Default constructor
    Point2(float x, float y);           // Constructor with x, y coordinates

    // Getters
    float getX() const;
    float getY() const;

    // Point operations
    Point2 add(const Vector2& vec) const;       // Add a vector to a point, returning a new point
    Vector2 subtract(const Point2& other) const; // Subtract a point from this point, resulting in a vector
    void print() const;                          // Print the point to console

private:
    float x, y;  // Coordinates
};

#endif // POINT2_H

