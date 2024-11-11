#ifndef VECTOR2_H
#define VECTOR2_H

class Vector2 {
public:
    Vector2();                      // Default constructor
    Vector2(float x, float y);      // Constructor with x, y components

    // Getters
    float getX() const;
    float getY() const;

    // Vector operations
    float norm() const;                         // Returns the magnitude of the vector
    float dot(const Vector2& other) const;      // Dot product with another vector
    float cross(const Vector2& other) const;    // Cross product with another vector (2D pseudo cross)
    Vector2 scale(float scalar) const;          // Scales the vector by a scalar
    void print() const;                         // Print the vector

private:
    float x, y;  // Components of the vector
};

#endif // VECTOR2_H

