#include <iostream>
#include <cstdlib>

#include "Point2.h"
#include "Vector2.h"
#include "Segment2.h"

int main() {
    // Create Points
    Point2 p1(5.0f, 7.0f);
    Point2 p2(4.0f, 2.0f);

    // Create Vectors
    Vector2 v1(1.0f, 1.0f);
    Vector2 v2(2.0f, 4.0f);

    // Create Segments using Points and Vectors
    Segment2 s1(p1, v1);
    Segment2 s2(p2, v2);

    // Optional: Output for verification
    std::cout << "Segment 1 Origin: ";
    s1.getOrigin().print();
    std::cout << "Segment 1 Direction: ";
    s1.getDirection().print();

    std::cout << "Segment 2 Origin: ";
    s2.getOrigin().print();
    std::cout << "Segment 2 Direction: ";
    s2.getDirection().print();

    return EXIT_SUCCESS;
}

