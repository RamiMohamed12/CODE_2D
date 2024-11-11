#include "Segment2.h"
#include <cmath>

// Constructor
Segment2::Segment2(const Point2& origin, const Vector2& direction)
    : origin(origin), direction(direction) {}

// Accessors
Point2 Segment2::getOrigin() const {
    return origin;
}

Vector2 Segment2::getDirection() const {
    return direction;
}

// Length of the segment (norm of the direction vector)
float Segment2::length() const {
    return direction.norm();
}

// Intersection check
IntersectionStatus Segment2::intersect(const Segment2& other, Point2& intersectionPoint) const {
    Point2 oa = getOrigin(), ob = other.getOrigin();
    Vector2 da = getDirection(), db = other.getDirection();
    Vector2 dc = ob.subtract(oa);

    float det = da.cross(db);
    if (det != 0.0f) {
        float u = dc.cross(db) / det;
        float v = dc.cross(da) / det;
        if ((u >= 0.0f && u <= 1.0f) && (v >= 0.0f && v <= 1.0f)) {
            intersectionPoint = oa.add(da.scale(u));
            return IntersectionStatus::POINT;
        } else {
            return IntersectionStatus::NON_INTERSECTING;
        }
    } else {
        float st = dc.cross(da);
        if (det == 0.0f && st == 0.0f) { // Collinear check
            float pj = da.dot(da);
            float d1 = dc.dot(da) / pj;
            float d2 = d1 + db.dot(da) / pj;

            if (d1 >= 0.0f && d1 <= 1.0f) {
                intersectionPoint = ob;
                return IntersectionStatus::COLINEAR_INTERSECTING;
            } else if (d2 >= 0.0f && d2 <= 1.0f) {
                intersectionPoint = ob.add(db);
                return IntersectionStatus::COLINEAR_INTERSECTING;
            } else {
                return IntersectionStatus::COLINEAR_NON_INTERSECTING;
            }
        } else if (det == 0.0f && st != 0.0f) {
            return IntersectionStatus::PARALLEL_NON_INTERSECTING;
        }
    }

    return IntersectionStatus::NON_INTERSECTING;
}

