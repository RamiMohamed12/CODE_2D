#ifndef SEGMENT2_H
#define SEGMENT2_H

#include "Point2.h"
#include "Vector2.h"

enum class IntersectionStatus {
    POINT,
    COLINEAR_INTERSECTING,
    COLINEAR_NON_INTERSECTING,
    PARALLEL_NON_INTERSECTING,
    NON_INTERSECTING
};

class Segment2 {
private:
    Point2 origin;
    Vector2 direction;

public:
    // Constructors
    Segment2(const Point2& origin, const Vector2& direction);

    // Accessors
    Point2 getOrigin() const;
    Vector2 getDirection() const;
    float length() const;

    // Intersection check
    IntersectionStatus intersect(const Segment2& other, Point2& intersectionPoint) const;
};

#endif // SEGMENT2_H

